function TSynWebEngine.EsKeywordIdent: TSynWebTokenKind;
begin
  Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc15: TSynWebTokenKind;
begin
  if  EsKeywordComp(12) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc19: TSynWebTokenKind;
begin
  if  EsKeywordComp(6) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc23: TSynWebTokenKind;
begin
  if  EsKeywordComp(13) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc28: TSynWebTokenKind;
begin
  if  EsKeywordComp(1) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc30: TSynWebTokenKind;
begin
  if  EsKeywordComp(30) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc35: TSynWebTokenKind;
begin
  if  EsKeywordComp(2) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc37: TSynWebTokenKind;
begin
  if  EsKeywordComp(0) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc39: TSynWebTokenKind;
begin
  if  EsKeywordComp(10) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc41: TSynWebTokenKind;
begin
  if  EsKeywordComp(7) or
      EsKeywordComp(23) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc42: TSynWebTokenKind;
begin
  if  EsKeywordComp(15) then
    Result := stkEsKeyword
  else
    if  EsKeywordComp(38) then
      Result := stkEsKeyword
    else
      Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc43: TSynWebTokenKind;
begin
  if  EsKeywordComp(8) then
    Result := stkEsKeyword
  else
    if  EsKeywordComp(43) then
      Result := stkEsKeyword
    else
      Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc44: TSynWebTokenKind;
begin
  if  EsKeywordComp(47) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc48: TSynWebTokenKind;
begin
  if  EsKeywordComp(45) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc50: TSynWebTokenKind;
begin
  if  EsKeywordComp(24) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc51: TSynWebTokenKind;
begin
  if  EsKeywordComp(5) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc52: TSynWebTokenKind;
begin
  if  EsKeywordComp(29) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc53: TSynWebTokenKind;
begin
  if  EsKeywordComp(35) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc54: TSynWebTokenKind;
begin
  if  EsKeywordComp(31) or
      EsKeywordComp(39) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc56: TSynWebTokenKind;
begin
  if  EsKeywordComp(18) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc57: TSynWebTokenKind;
begin
  if  EsKeywordComp(25) then
    Result := stkEsKeyword
  else
    if  EsKeywordComp(40) then
      Result := stkEsKeyword
    else
      Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc59: TSynWebTokenKind;
begin
  if  EsKeywordComp(34) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc60: TSynWebTokenKind;
begin
  if  EsKeywordComp(26) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc63: TSynWebTokenKind;
begin
  if  EsKeywordComp(21) then
    Result := stkEsKeyword
  else
    if  EsKeywordComp(50) then
      Result := stkEsKeyword
    else
      Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc64: TSynWebTokenKind;
begin
  if  EsKeywordComp(20) then
    Result := stkEsKeyword
  else
    if  EsKeywordComp(28) then
      Result := stkEsKeyword
    else
      Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc69: TSynWebTokenKind;
begin
  if  EsKeywordComp(4) then
    Result := stkEsKeyword
  else
    if  EsKeywordComp(33) then
      Result := stkEsKeyword
    else
      Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc71: TSynWebTokenKind;
begin
  if  EsKeywordComp(32) or
      EsKeywordComp(46) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc72: TSynWebTokenKind;
begin
  if  EsKeywordComp(52) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc79: TSynWebTokenKind;
begin
  if  EsKeywordComp(9) then
    Result := stkEsKeyword
  else
    if  EsKeywordComp(53) then
      Result := stkEsKeyword
    else
      Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc80: TSynWebTokenKind;
begin
  if  EsKeywordComp(51) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc81: TSynWebTokenKind;
begin
  if  EsKeywordComp(44) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc82: TSynWebTokenKind;
begin
  if  EsKeywordComp(17) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc84: TSynWebTokenKind;
begin
  if  EsKeywordComp(19) then
    Result := stkEsKeyword
  else
    if  EsKeywordComp(27) then
      Result := stkEsKeyword
    else
      Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc87: TSynWebTokenKind;
begin
  if  EsKeywordComp(22) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc91: TSynWebTokenKind;
begin
  if  EsKeywordComp(37) or
      EsKeywordComp(42) or
      EsKeywordComp(48) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc96: TSynWebTokenKind;
begin
  if  EsKeywordComp(16) then
    Result := stkEsKeyword
  else
    if  EsKeywordComp(57) then
      Result := stkEsKeyword
    else
      Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc98: TSynWebTokenKind;
begin
  if  EsKeywordComp(36) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc101: TSynWebTokenKind;
begin
  if  EsKeywordComp(3) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc102: TSynWebTokenKind;
begin
  if  EsKeywordComp(11) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc103: TSynWebTokenKind;
begin
  if  EsKeywordComp(55) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc106: TSynWebTokenKind;
begin
  if  EsKeywordComp(14) then
    Result := stkEsKeyword
  else
    if  EsKeywordComp(49) then
      Result := stkEsKeyword
    else
      Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc120: TSynWebTokenKind;
begin
  if  EsKeywordComp(56) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc126: TSynWebTokenKind;
begin
  if  EsKeywordComp(41) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;

function TSynWebEngine.EsKeywordFunc160: TSynWebTokenKind;
begin
  if  EsKeywordComp(54) then
    Result := stkEsKeyword
  else
    Result := stkEsIdentifier;
end;
