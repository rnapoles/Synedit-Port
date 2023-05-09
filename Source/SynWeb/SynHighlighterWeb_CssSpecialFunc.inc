function TSynWebEngine.CssSpecialUndef: Boolean;
begin
  Result:=False;
end;

function TSynWebEngine.CssSpecialFunc16: Boolean;
begin
  if  CssSpecialKeyComp(7) or
      CssSpecialKeyComp(8) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc18: Boolean;
begin
  if  CssSpecialKeyComp(9) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc19: Boolean;
begin
  if  CssSpecialKeyComp(33) or
      CssSpecialKeyComp(40) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc23: Boolean;
begin
  if  CssSpecialKeyComp(24) or
      CssSpecialKeyComp(38) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc25: Boolean;
begin
  if  CssSpecialKeyComp(2) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc26: Boolean;
begin
  if  CssSpecialKeyComp(30) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc29: Boolean;
begin
  if  CssSpecialKeyComp(11) or
      CssSpecialKeyComp(32) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc30: Boolean;
begin
  if  CssSpecialKeyComp(18) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc32: Boolean;
begin
  if  CssSpecialKeyComp(29) or
      CssSpecialKeyComp(31) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc34: Boolean;
begin
  if  CssSpecialKeyComp(21) or
      CssSpecialKeyComp(26) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc36: Boolean;
begin
  if  CssSpecialKeyComp(36) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc40: Boolean;
begin
  if  CssSpecialKeyComp(37) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc42: Boolean;
begin
  if  CssSpecialKeyComp(44) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc43: Boolean;
begin
  if  CssSpecialKeyComp(27) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc45: Boolean;
begin
  if  CssSpecialKeyComp(25) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc46: Boolean;
begin
  if  CssSpecialKeyComp(28) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc50: Boolean;
begin
  if  CssSpecialKeyComp(1) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc51: Boolean;
begin
  if  CssSpecialKeyComp(4) or
      CssSpecialKeyComp(45) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc56: Boolean;
begin
  if  CssSpecialKeyComp(19) or
      CssSpecialKeyComp(42) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc57: Boolean;
begin
  if  CssSpecialKeyComp(3) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc59: Boolean;
begin
  if  CssSpecialKeyComp(5) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc60: Boolean;
begin
  if  CssSpecialKeyComp(0) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc62: Boolean;
begin
  if  CssSpecialKeyComp(39) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc64: Boolean;
begin
  if  CssSpecialKeyComp(16) or
      CssSpecialKeyComp(41) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc65: Boolean;
begin
  if  CssSpecialKeyComp(43) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc68: Boolean;
begin
  if  CssSpecialKeyComp(20) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc72: Boolean;
begin
  if  CssSpecialKeyComp(12) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc74: Boolean;
begin
  if  CssSpecialKeyComp(6) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc77: Boolean;
begin
  if  CssSpecialKeyComp(34) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc82: Boolean;
begin
  if  CssSpecialKeyComp(10) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc88: Boolean;
begin
  if  CssSpecialKeyComp(46) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc91: Boolean;
begin
  if  CssSpecialKeyComp(22) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc108: Boolean;
begin
  if  CssSpecialKeyComp(17) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc125: Boolean;
begin
  if  CssSpecialKeyComp(35) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc126: Boolean;
begin
  if  CssSpecialKeyComp(23) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc146: Boolean;
begin
  if  CssSpecialKeyComp(13) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc150: Boolean;
begin
  if  CssSpecialKeyComp(15) then
    Result := True
  else
    Result := False;
end;

function TSynWebEngine.CssSpecialFunc190: Boolean;
begin
  if  CssSpecialKeyComp(14) then
    Result := True
  else
    Result := False;
end;
