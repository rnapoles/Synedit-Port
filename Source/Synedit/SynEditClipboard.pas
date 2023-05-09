unit SynEditClipboard;
{$I SynEdit.inc}

interface
  Uses
   LCLIntf,
   LCLType,
   LCLProc,
   SynEditTypes,
   Clipbrd,
   sysutils,
   Classes;

type

  TSynClipboardStreamTag = type word;

  { TSynClipboardStream }

  TSynClipboardStream = class
  private
    FMemStream: TMemoryStream;
    FText: String;
    FTextP: PChar;
    FIsPlainText: Boolean;

    function GetMemory: Pointer;
    function GetSize: LongInt;
    function GetSelectionMode: TSynSelectionMode;
    procedure SetSelectionMode(const AValue: TSynSelectionMode);
    procedure SetInternalText(const AValue: String);
    procedure SetText(const AValue: String);
  public
    constructor Create;
    destructor Destroy; override;
    class function ClipboardFormatId: TClipboardFormat;

    function CanReadFromClipboard(AClipboard: TClipboard): Boolean;
    function ReadFromClipboard(AClipboard: TClipboard): Boolean;
    function WriteToClipboard(AClipboard: TClipboard): Boolean;

    procedure Clear;

    function HasTag(ATag: TSynClipboardStreamTag): Boolean;
    function GetTagPointer(ATag: TSynClipboardStreamTag): Pointer;
    function GetTagLen(ATag: TSynClipboardStreamTag): Integer;
    // No check for duplicates
    Procedure AddTag(ATag: TSynClipboardStreamTag; Location: Pointer; Len: Integer);
    property IsPlainText: Boolean read FIsPlainText;

    // Currently Each method (or each method of a pair) must be assigned only ONCE
    property TextP: PChar read FTextP;
    property Text: String write SetText;
    property InternalText: String write SetInternalText;

    property SelectionMode: TSynSelectionMode read GetSelectionMode write SetSelectionMode;

    property Memory: Pointer read GetMemory;
    property Size: LongInt read GetSize;
  end; 
  
const
  synClipTagText = TSynClipboardStreamTag(1);
  synClipTagExtText = TSynClipboardStreamTag(2);
  synClipTagMode = TSynClipboardStreamTag(3);
  synClipTagFold = TSynClipboardStreamTag(4); 
    
implementation

{ TSynClipboardStream }

function TSynClipboardStream.GetMemory: Pointer;
begin
  Result := FMemStream.Memory;
end;

function TSynClipboardStream.GetSize: LongInt;
begin
  Result := FMemStream.Size;
end;

procedure TSynClipboardStream.SetInternalText(const AValue: String);
begin
  FIsPlainText := False;
  // Text, if we don't need CF_TEXT // Must include a zero byte
  AddTag(synClipTagText, @AValue[1], length(AValue) + 1);
end;

function TSynClipboardStream.GetSelectionMode: TSynSelectionMode;
var
  PasteMode: ^TSynSelectionMode;
begin
  PasteMode := GetTagPointer(synClipTagMode);
  if PasteMode = nil then
    Result := smNormal
  else
    Result := PasteMode^;
end;

procedure TSynClipboardStream.SetSelectionMode(const AValue: TSynSelectionMode);
begin
  AddTag(synClipTagMode, @AValue, SizeOf(TSynSelectionMode));
end;

procedure TSynClipboardStream.SetText(const AValue: String);
var
  SLen: Integer;
begin
  FIsPlainText := True;
  FText := AValue;
  SLen := length(FText);
  AddTag(synClipTagExtText, @SLen, SizeOf(Integer));
end;

constructor TSynClipboardStream.Create;
begin
  FMemStream := TMemoryStream.Create;
end;

destructor TSynClipboardStream.Destroy;
begin
  FreeAndNil(FMemStream);
  inherited Destroy;
end;

class function TSynClipboardStream.ClipboardFormatId: TClipboardFormat;
const
  SYNEDIT_CLIPBOARD_FORMAT_TAGGED = 'Application/X-Laz-SynEdit-Tagged';
  Format: UINT = 0;
begin
  if Format = 0 then
    Format := ClipboardRegisterFormat(SYNEDIT_CLIPBOARD_FORMAT_TAGGED);
  Result := Format;
end;

function TSynClipboardStream.CanReadFromClipboard(AClipboard: TClipboard): Boolean;
begin
  Result := AClipboard.HasFormat(ClipboardFormatId);
end;

function TSynClipboardStream.ReadFromClipboard(AClipboard: TClipboard): Boolean;
var
  ip: PInteger;
  len: LongInt;
begin
  Result := false;
  Clear;
  FTextP := nil;
  // Check for embedded text
  if AClipboard.HasFormat(ClipboardFormatId) then begin
    Result := AClipboard.GetFormat(ClipboardFormatId, FMemStream);
    FTextP := GetTagPointer(synClipTagText);
    if FTextP <> nil then begin
      len := GetTagLen(synClipTagText);
      if len > 0 then
        (FTextP + len - 1)^ := #0
      else
        FTextP := nil;
    end;
  end;
  // Normal text
  if (FTextP = nil) and AClipboard.HasFormat(CF_TEXT) then begin
    Result := true;
    FText := AClipboard.AsText;
    if FText <> '' then begin
      FTextP := @FText[1];
      ip := GetTagPointer(synClipTagExtText);
      if (length(FText) = 0) or (ip = nil) or (length(FText) <> ip^) then
        FIsPlainText := True;
    end;
  end;
end;

function TSynClipboardStream.WriteToClipboard(AClipboard: TClipboard): Boolean;
begin
  if FIsPlainText and (FText <> '') then begin
    Clipboard.AsText:= FText;
    if not Clipboard.HasFormat(CF_TEXT) then
      raise Exception.Create('Clipboard copy operation failed: HasFormat');
  end;
  Result := AClipboard.AddFormat(ClipboardFormatId, FMemStream.Memory^, FMemStream.Size);
end;

procedure TSynClipboardStream.Clear;
begin
  FMemStream.Clear;
  FIsPlainText := False;
end;

function TSynClipboardStream.HasTag(ATag: TSynClipboardStreamTag): Boolean;
begin
  Result := GetTagPointer(ATag) <> nil;
end;

function TSynClipboardStream.GetTagPointer(ATag: TSynClipboardStreamTag): Pointer;
var
  ctag, mend: Pointer;
begin
  Result :=  nil;
  if FIsPlainText then
    exit;
  ctag := FMemStream.Memory;
  mend := ctag + FMemStream.Size;
  while (result = nil) and
        (ctag + SizeOf(TSynClipboardStreamTag) + SizeOf(Integer) <= mend) do
  begin
     if TSynClipboardStreamTag(ctag^) = ATag then begin
      Result := ctag + SizeOf(TSynClipboardStreamTag) + SizeOf(Integer)
    end else begin
      inc(ctag, SizeOf(TSynClipboardStreamTag));
      inc(ctag, PInteger(ctag)^);
      inc(ctag, SizeOf(Integer));
    end;
  end;
  if (Result <> nil) and
     (ctag + Integer((ctag + SizeOf(TSynClipboardStreamTag))^) > mend) then
  begin
    Result := nil;
    raise Exception.Create('Clipboard read operation failed, data corrupt');
  end;
end;

function TSynClipboardStream.GetTagLen(ATag: TSynClipboardStreamTag): Integer;
var
  p: PInteger;
begin
  Result := 0;
  p := GetTagPointer(ATag);
  if p = nil then
    exit;
  dec(p, 1);
  Result := p^;
end;

procedure TSynClipboardStream.AddTag(ATag: TSynClipboardStreamTag; Location: Pointer;
  Len: Integer);
var
  msize: Int64;
  mpos: Pointer;
begin
  msize := FMemStream.Size;
  FMemStream.Size := msize + Len + SizeOf(TSynClipboardStreamTag) + SizeOf(Integer);
  mpos := FMemStream.Memory + msize;
  TSynClipboardStreamTag(mpos^) := ATag;
  inc(mpos, SizeOf(TSynClipboardStreamTag));
  Integer(mpos^) := Len;
  inc(mpos, SizeOf(Integer));
  System.Move(Location^, mpos^, Len);
end;
  
  
initialization

finalization

end.
