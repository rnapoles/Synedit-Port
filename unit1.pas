unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, Menus,
  StdCtrls, ExtCtrls, SynEditKbdHandler, SynEditKeyCmds, SynEditTextBuffer,
  SynTextDrawer, SynEditClipboard, SynEditHighlighter, SynEdit,
  SynHighlighterPas, SynCompletionProposal,LCLType,LResources,
  SynHighlighterWeb, SynHighlighterWebData,SynHighlighterWebMisc;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Panel1: TPanel;
    procedure Button1Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private
    { private declarations }
  public
    SynEdit1: TSynEdit;
    PascalHighligher:TSynPasSyn;
    //SynWeb
    SynWebEngine1: TSynWebEngine;
    SynWebHtmlSyn1: TSynWebHtmlSyn;
    SynWebCSSSyn1: TSynWebCssSyn;
    SynWebESSyn1: TSynWebEsSyn;
    SynWebPHPCliSyn1: TSynWebPhpCliSyn;
    SynWebWmlSyn1: TSynWebWmlSyn;
    SynWebXmlSyn1: TSynWebXmlSyn;
    SynCompletionProposal1 : TSynCompletionProposal;
     procedure LoadDefaultText;

//    Procedure CustSynEditOnChange(Sender: TObject);
    procedure CustSynEditOnStatusChange(Sender: TObject;Changes: TSynStatusChanges);


    { public declarations }
    procedure InitSynWeb;


  end;

var
  Form1: TForm1;

implementation

{.$R *.lfm}

{ TForm1 }

procedure TForm1.InitSynWeb;
begin


 SynWebEngine1  :=  TSynWebEngine.Create(Self);


 with SynWebEngine1 do
 begin
     Options.HtmlVersion := shvXHtml10Transitional ;
     Options.WmlVersion := swvWml13;
     Options.CssVersion := scvCss21 ;
     Options.PhpVersion := spvPhp5 ;
     Options.PhpShortOpenTag := True;
     Options.PhpAspTags := False;
     EsWhitespaceAttri.Foreground:=clNone;
 end;


 SynWebHtmlSyn1:= TSynWebHtmlSyn.Create(Self);
 SynWebHtmlSyn1.ActiveHighlighterSwitch :=  False;
 SynWebHtmlSyn1.Engine :=  SynWebEngine1;
 SynWebHtmlSyn1.Options.HtmlVersion :=  shvXHtml10Transitional;
 SynWebHtmlSyn1.Options.CssVersion :=  scvCss21;
 SynWebHtmlSyn1.Options.PhpVersion :=  spvPhp5;
 SynWebHtmlSyn1.Options.PhpShortOpenTag :=  True;
 SynWebHtmlSyn1.Options.PhpAspTags :=  False;
 SynWebHtmlSyn1. Options.CssEmbeded :=  True;
 SynWebHtmlSyn1.Options.PhpEmbeded :=  True;
 SynWebHtmlSyn1.Options.EsEmbeded :=  True;
 SynWebHtmlSyn1.Options.UseEngineOptions :=  True;



 SynWebCSSSyn1 := TSynWebCssSyn.Create(Self);
 SynWebCSSSyn1.ActiveHighlighterSwitch :=  False;
 SynWebCSSSyn1.Engine :=  SynWebEngine1;
 SynWebCSSSyn1.Options.HtmlVersion :=  shvXHtml10Transitional;
 SynWebCSSSyn1.Options.CssVersion :=  scvCss21;
 SynWebCSSSyn1.Options.PhpVersion :=  spvPhp5;
 SynWebCSSSyn1.Options.PhpShortOpenTag :=  True;
 SynWebCSSSyn1.Options.PhpAspTags :=  False;
 SynWebCSSSyn1.Options.PhpEmbeded :=  True;
 SynWebCSSSyn1.Options.UseEngineOptions :=  True;



SynWebESSyn1:= TSynWebEsSyn.Create(Self);
with SynWebESSyn1 do begin
 ActiveHighlighterSwitch :=  False;
 Engine :=  SynWebEngine1;
 Options.PhpVersion :=  spvPhp5;
 Options.PhpShortOpenTag :=  True;
 Options.PhpAspTags :=  False;
 Options.PhpEmbeded :=  True;
 Options.UseEngineOptions :=  True;
 Left :=  176;
 Top :=  260;
end;

SynWebPHPCliSyn1:= TSynWebPhpCliSyn.Create(Self);
with SynWebPHPCliSyn1 do begin
 ActiveHighlighterSwitch :=  False;
 Engine :=  SynWebEngine1;
 Options.PhpVersion :=  spvPhp5;
 Options.PhpShortOpenTag :=  True;
 Options.PhpAspTags :=  False;
 Options.UseEngineOptions :=  True;
 Left :=  208;
 Top :=  260;
end;

{
with SynEditOptionsDialog1: TSynEditOptionsDialog do begin
 UseExtend;edStrings :=  False
 Left :=  20
 Top :=  128
end;}

SynWebWmlSyn1:= TSynWebWmlSyn.Create(Self);
with SynWebWmlSyn1 do begin
 ActiveHighlighterSwitch :=  False;
 Engine :=  SynWebEngine1;
 Options.WmlVersion :=  swvWml13;
 Options.PhpVersion :=  spvPhp5;
 Options.PhpShortOpenTag :=  True;
 Options.PhpAspTags :=  False;
 Options.PhpEmbeded :=  True;
 Options.UseEngineOptions :=  True;
 Left :=  80;
 Top :=  260;
end;

SynWebXmlSyn1:= TSynWebXmlSyn.Create(Self);
with  SynWebXmlSyn1 do begin
 ActiveHighlighterSwitch :=  False;
 Engine :=  SynWebEngine1;
 Options.PhpVersion :=  spvPhp5;
 Options.PhpShortOpenTag :=  False;
 Options.PhpAspTags :=  False;
 Options.PhpEmbeded :=  True;
 Options.UseEngineOptions :=  False;
 Left :=  112;
 Top :=  260;
end;
  //CustSynEdit().Highlighter:= SynWebHtmlSyn1;
  //SynEdit1.Highlighter := SynWebHtmlSyn1;
end;

Procedure TForm1.CustSynEditOnStatusChange(Sender: TObject;
 Changes: TSynStatusChanges);
var
  t:TSynWebHighlighterTypes;
begin
  if Changes-[scCaretX, scCaretY]<>Changes then
  begin
    t := SynWebUpdateActiveHighlighter(SynEdit1, TSynWebBase(SynEdit1.Highlighter));
    Caption:='';
    if shtML in t then
      Caption:=Caption+'HTML/WML,';
    if shtCss in t then
      Caption:=Caption+'CSS,';
    if shtES in t then
      Caption:=Caption+'JS,';
    if t-[shtPhpInML, shtPhpInCss, shtPhpInES]<>t then
      Caption:=Caption+'PHP,';
  end;
  with SynEdit1, SynWebHtmlSyn1 do
  begin
    if SynEdit1.CaretY = 1 then
      ResetRange
    else
      SetRange(TSynEditStringList(Lines).Ranges[CaretY - 2]);
    SetLine(Lines[CaretY-1], CaretY-1);
    while not GetEol and (CaretX-1 >= GetTokenPos + Length(GetToken)) do
      Next;
    Caption := Format('%.8x, %s, %d, %d', [Integer(GetRange),
      GetToken, MLGetTagID, MLGetTagKind]);
  end;
end;




procedure TForm1.LoadDefaultText;
var
  E: String;
begin
  E:=#13#10;
  SynEdit1.Lines.Text:=
    '{'+e+
    '  SynEdit 2.0.5 Test'+e+
    '}'+e+
    'program synedit1;'+e+
    ''+e+
    '{$mode objfpc}{$H+}'+e+
    ''+e+
    'uses'+e+
    '  Interfaces, Classes, SysUtils, Forms, Controls, GraphType, Graphics, SynEdit,'+e+
    '  SynHighlighterPas;'+e+
    ''+e+
    'type'+e+
    '  TForm1 = class(TForm)'+e+
    '    SynEdit1: TSynEdit;'+e+
    '    PascalHighligher: TSynPasSyn;'+e+
    '    procedure Form1Resize(Sender: TObject);'+e+
    '  private'+e+
    '  public'+e+
    '    procedure LoadDefaultText;'+e+
    '    procedure LoadText(const Filename: string);'+e+
    '    constructor Create(TheOwner: TComponent); override;'+e+
    '    destructor Destroy; override;'+e+
    '  end;'+e+
    ''+e+
    '{ TForm1 }'+e+
    ''+e+
    'procedure TForm1.Form1Resize(Sender: TObject);'+e+
    'begin'+e+
    '  with SynEdit1 do'+e+
    '    SetBounds(10,10,Parent.ClientWidth-10,Parent.ClientHeight-20);'+e+
    'end;'+e+
    ''+e+
    'end.'+e;
end;

procedure TForm1.FormCreate(Sender: TObject);
var
  itemList,insertList:TStringList;
begin

  //SetBounds(10,20,980,700);


  itemList:=TStringList.Create;
  insertList:=TStringList.Create;

   InitSynWeb;

  SynEdit1:=TSynEdit.Create(Self);
  with SynEdit1 do begin
    Name:='SynEdit1';
    Parent:=Self;
    Font.Height := -13;
    Font.Name := 'Courier New';
    Font.Pitch := fpFixed;
    Font.Quality := fqNonAntialiased;
  end;
  SynEdit1.OnStatusChange:=@CustSynEditOnStatusChange;



  PascalHighligher:=TSynPasSyn.Create(Self);
  with PascalHighligher do begin
    Name:='PascalHighligher';
    CommentAttri.Foreground:=clBlue;
    CommentAttri.Style:=[fsBold];
    KeyAttri.Style:=[fsBold];
    StringAttri.Foreground:=clBlue;
    SymbolAttri.Foreground:=clRed;
  end;


  SynCompletionProposal1:= TSynCompletionProposal.Create(Self);
//  SynCompletionProposal1.ShortCut:=Menus.ShortCut(VK_SPACE, [ssCtrl]);
//  SynCompletionProposal1.Options := [scoLimitToMatchedText, scoUseInsertList, scoUsePrettyText, scoUseBuiltInTimer, scoEndCharCompletion, scoCompleteWithTab, scoCompleteWithEnter];

  SynCompletionProposal1.Editor:=SynEdit1;
  with SynCompletionProposal1 do begin
    //Options := [scoLimitToMatchedText, scoUseInsertList, scoEndCharCompletion, scoCompleteWithTab, scoCompleteWithEnter];
    EndOfTokenChr := '()[]. ';
    TriggerChars := '.';
    Title := 'Completion Proposal Demo';
    Options := [scoLimitToMatchedText, scoUseInsertList, scoUsePrettyText, scoUseBuiltInTimer, scoEndCharCompletion, scoCompleteWithTab, scoCompleteWithEnter];
    Font.Color := clWindowText;
    Font.Height := -11;
//    Font.Name := 'MS Sans Serif';
    Font.Style := [];
    Columns.Add;
    Columns.Items[0].BiggestWord:='constructor';

  end;

{
  with SynCompletionProposal1 do begin
    Options := [scoLimitToMatchedText, scoUseInsertList, scoEndCharCompletion, scoCompleteWithTab, scoCompleteWithEnter];
    EndOfTokenChr := '()[]. ';
    TriggerChars := '.';
//    Font.Charset := DEFAULT_CHARSET;
    Font.Color := clWindowText;
    Font.Height := -11;
    Font.Name := 'MS Sans Serif';
    Font.Style := [];
//    TitleFont.Charset := DEFAULT_CHARSET;
    TitleFont.Color := clBtnText;
    TitleFont.Height := -11;
    TitleFont.Name := 'MS Sans Serif';
    TitleFont.Style := [fsBold];
//    Columns := <>;
    ShortCut := 16416;
    Editor := SynEdit1;
    Left := 488;
    Top := 104;
  end;
}


  with insertList do
  begin
    Clear;
    Add('Create');
    Add('Destroy');
    Add('Add');
    Add('ClearLine');
    Add('Delete');
    Add('First');
    Add('GetMarksForLine');
    Add('Insert');
    Add('Last');
    Add('Place');
    Add('Remove');
    Add('WMCaptureChanged');
    Add('WMCopy');
    Add('WMCut');
    Add('WMDropFiles');
    Add('WMEraseBkgnd');
    Add('WMGetDlgCode');
    Add('WMHScroll');
    Add('WMPaste');
  end;

  with itemList do
  begin
    Clear;
    Add('constructor \column{}\style{+B}Create\style{-B}(AOwner: TCustomSynEdit)');
    Add('destructor \column{}\style{+B}Destroy\style{-B}');
    Add('function \column{}\style{+B}Add\style{-B}(Item: TSynEditMark): Integer');
    Add('procedure \column{}\style{+B}ClearLine\style{-B}(line: integer)');
    Add('procedure \column{}\style{+B}Delete\style{-B}(Index: Integer)');
    Add('function \column{}\style{+B}First\style{-B}: TSynEditMark');
    Add('procedure \column{}\style{+B}GetMarksForLine\style{-B}(line: integer; var Marks: TSynEditMarks)');
    Add('procedure \column{}\style{+B}Insert\style{-B}(Index: Integer; Item: TSynEditMark)');
    Add('function \column{}\style{+B}Last\style{-B}: TSynEditMark');
    Add('procedure \column{}\style{+B}Place\style{-B}(mark: TSynEditMark)');
    Add('function \column{}\style{+B}Remove\style{-B}(Item: TSynEditMark): Integer');
    Add('procedure \column{}\style{+B}WMCaptureChanged\style{-B}(var Msg: TMessage); message WM_CAPTURECHANGED');
    Add('procedure \column{}\style{+B}WMCopy\style{-B}(var Message: TMessage); message WM_COPY');
    Add('procedure \column{}\style{+B}WMCut\style{-B}(var Message: TMessage); message WM_CUT');
    Add('procedure \column{}\style{+B}WMDropFiles\style{-B}(var Msg: TMessage); message WM_DROPFILES');
    Add('procedure \column{}\style{+B}WMEraseBkgnd\style{-B}(var Msg: TMessage); message WM_ERASEBKGND');
    Add('procedure \column{}\style{+B}WMGetDlgCode\style{-B}(var Msg: TWMGetDlgCode); message WM_GETDLGCODE');
    Add('procedure \column{}\style{+B}WMHScroll\style{-B}(var Msg: TWMScroll); message WM_HSCROLL');
    Add('procedure \column{}\style{+B}WMPaste\style{-B}(var Message: TMessage); message WM_PASTE');
  end;
  SynCompletionProposal1.InsertList.AddStrings(insertList);
  SynCompletionProposal1.ItemList.AddStrings(itemList);

  SynEdit1.Highlighter:= SynWebHtmlSyn1;

  //SynEdit1.Highlighter:=PascalHighligher;
  SynEdit1.Align:=alClient;
  LoadDefaultText;
  SynEdit1.Text:= SynWebHtmlSyn1.SynWebSample;

end;

procedure TForm1.Button1Click(Sender: TObject);
begin
  SynCompletionProposal1.Execute('a',5,5);
end;


initialization
   {$I unit1.lrs}

end.

