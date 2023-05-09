procedure TCustomSynEdit.PasteFromClipboard;
var
  ClipHelper: TSynClipboardStream;
begin
  ClipHelper := TSynClipboardStream.Create;
  try
    ClipHelper.ReadFromClipboard(Clipboard);
    PasteFromClipboardEx(ClipHelper);
  finally
    ClipHelper.Free;
  end;
end;

function TCustomSynEdit.PasteFromClipboardEx(ClipHelper: TSynClipboardStream) : Boolean;
var
  PTxt: PChar;
  PStr: String;
  PMode: TSynSelectionMode;
  InsStart: TPoint;
  PasteAction: TSynCopyPasteAction;
begin
  Result := False;
//  InternalBeginUndoBlock;
  try
    PTxt := ClipHelper.TextP;
    PMode := ClipHelper.SelectionMode;
    PasteAction := scaContinue;
{    if assigned(FOnPaste) then begin
      if ClipHelper.IsPlainText then PasteAction := scaPlainText;
      InsStart := FCaret.LineBytePos;
      if SelAvail and (not FBlockSelection.Persistent) and (eoOverwriteBlock in fOptions2) then
        InsStart := FBlockSelection.FirstLineBytePos;
      PStr := PTxt;
      FOnPaste(self, PStr, PMode, InsStart, PasteAction);
      PTxt := PChar(PStr);
      if (PStr = '') or (PasteAction = scaAbort) then
        exit;
    end;
}

    if ClipHelper.TextP = nil then
      exit;

    Result := True;
{    if SelAvail and (not FBlockSelection.Persistent) and (eoOverwriteBlock in fOptions2) then
      FBlockSelection.SelText := '';

    InsStart := FCaret.LineBytePos;
    FInternalBlockSelection.StartLineBytePos := InsStart;
    FInternalBlockSelection.SetSelTextPrimitive(PMode, PTxt);
    FCaret.LineBytePos := FInternalBlockSelection.StartLineBytePos;
}
    if PasteAction = scaPlainText then
      exit;

    {
    if eoFoldedCopyPaste in fOptions2 then begin
      PTxt := ClipHelper.GetTagPointer(synClipTagFold);
      if PTxt <> nil then begin
        ScanRanges;
        FFoldedLinesView.ApplyFoldDescription(InsStart.Y -1, InsStart.X,
            FInternalBlockSelection.StartLinePos-1, FInternalBlockSelection.StartBytePos,
            PTxt, ClipHelper.GetTagLen(synClipTagFold));
      end;
    end;
    }
  finally
//    InternalEndUndoBlock;
  end;
end;