function TSynWebEngine.MLTagUndef: TSynWebTokenKind;
begin
  Result:=stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc1: TSynWebTokenKind;
begin
  if  MLTagKeyComp(0) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc2: TSynWebTokenKind;
begin
  if  MLTagKeyComp(11) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc6: TSynWebTokenKind;
begin
  if  MLTagKeyComp(14) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc8: TSynWebTokenKind;
begin
  if  MLTagKeyComp(31) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc9: TSynWebTokenKind;
begin
  if  MLTagKeyComp(62) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc16: TSynWebTokenKind;
begin
  if  MLTagKeyComp(37) or
      MLTagKeyComp(89) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc17: TSynWebTokenKind;
begin
  if  MLTagKeyComp(68) or
      MLTagKeyComp(95) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc18: TSynWebTokenKind;
begin
  if  MLTagKeyComp(16) or
      MLTagKeyComp(40) or
      MLTagKeyComp(57) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc19: TSynWebTokenKind;
begin
  if  MLTagKeyComp(38) or
      MLTagKeyComp(100) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc20: TSynWebTokenKind;
begin
  if  MLTagKeyComp(19) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc21: TSynWebTokenKind;
begin
  if  MLTagKeyComp(15) or
      MLTagKeyComp(32) or
      MLTagKeyComp(72) or
      MLTagKeyComp(128) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc22: TSynWebTokenKind;
begin
  if  MLTagKeyComp(50) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc23: TSynWebTokenKind;
begin
  if  MLTagKeyComp(1) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc24: TSynWebTokenKind;
begin
  if  MLTagKeyComp(34) or
      MLTagKeyComp(39) or
      MLTagKeyComp(117) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc25: TSynWebTokenKind;
begin
  if  MLTagKeyComp(7) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc26: TSynWebTokenKind;
begin
  if  MLTagKeyComp(23) or
      MLTagKeyComp(60) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc27: TSynWebTokenKind;
begin
  if  MLTagKeyComp(12) or
      MLTagKeyComp(26) or
      MLTagKeyComp(84) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc28: TSynWebTokenKind;
begin
  if  MLTagKeyComp(121) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc29: TSynWebTokenKind;
begin
  if  MLTagKeyComp(41) or
      MLTagKeyComp(64) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc30: TSynWebTokenKind;
begin
  if  MLTagKeyComp(27) or
      MLTagKeyComp(74) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc31: TSynWebTokenKind;
begin
  if  MLTagKeyComp(35) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc32: TSynWebTokenKind;
begin
  if  MLTagKeyComp(70) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc33: TSynWebTokenKind;
begin
  if  MLTagKeyComp(129) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc34: TSynWebTokenKind;
begin
  if  MLTagKeyComp(97) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc35: TSynWebTokenKind;
begin
  if  MLTagKeyComp(36) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc36: TSynWebTokenKind;
begin
  if  MLTagKeyComp(51) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc37: TSynWebTokenKind;
begin
  if  MLTagKeyComp(25) or
      MLTagKeyComp(52) or
      MLTagKeyComp(79) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc38: TSynWebTokenKind;
begin
  if  MLTagKeyComp(9) or
      MLTagKeyComp(53) or
      MLTagKeyComp(98) or
      MLTagKeyComp(122) or
      MLTagKeyComp(126) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc39: TSynWebTokenKind;
begin
  if  MLTagKeyComp(54) or
      MLTagKeyComp(77) or
      MLTagKeyComp(92) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc40: TSynWebTokenKind;
begin
  if  MLTagKeyComp(55) or
      MLTagKeyComp(115) or
      MLTagKeyComp(127) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc41: TSynWebTokenKind;
begin
  if  MLTagKeyComp(56) or
      MLTagKeyComp(58) or
      MLTagKeyComp(130) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc42: TSynWebTokenKind;
begin
  if  MLTagKeyComp(66) or
      MLTagKeyComp(112) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc43: TSynWebTokenKind;
begin
  if  MLTagKeyComp(48) or
      MLTagKeyComp(75) or
      MLTagKeyComp(132) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc46: TSynWebTokenKind;
begin
  if  MLTagKeyComp(18) or
      MLTagKeyComp(73) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc47: TSynWebTokenKind;
begin
  if  MLTagKeyComp(71) or
      MLTagKeyComp(123) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc48: TSynWebTokenKind;
begin
  if  MLTagKeyComp(133) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc49: TSynWebTokenKind;
begin
  if  MLTagKeyComp(90) or
      MLTagKeyComp(101) or
      MLTagKeyComp(134) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc50: TSynWebTokenKind;
begin
  if  MLTagKeyComp(2) or
      MLTagKeyComp(10) or
      MLTagKeyComp(108) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc52: TSynWebTokenKind;
begin
  if  MLTagKeyComp(47) or
      MLTagKeyComp(63) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc53: TSynWebTokenKind;
begin
  if  MLTagKeyComp(61) or
      MLTagKeyComp(76) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc55: TSynWebTokenKind;
begin
  if  MLTagKeyComp(45) or
      MLTagKeyComp(83) or
      MLTagKeyComp(131) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc56: TSynWebTokenKind;
begin
  if  MLTagKeyComp(114) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc57: TSynWebTokenKind;
begin
  if  MLTagKeyComp(106) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc59: TSynWebTokenKind;
begin
  if  MLTagKeyComp(5) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc60: TSynWebTokenKind;
begin
  if  MLTagKeyComp(21) or
      MLTagKeyComp(81) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc61: TSynWebTokenKind;
begin
  if  MLTagKeyComp(78) or
      MLTagKeyComp(93) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc63: TSynWebTokenKind;
begin
  if  MLTagKeyComp(29) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc64: TSynWebTokenKind;
begin
  if  MLTagKeyComp(104) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc65: TSynWebTokenKind;
begin
  if  MLTagKeyComp(24) or
      MLTagKeyComp(124) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc66: TSynWebTokenKind;
begin
  if  MLTagKeyComp(44) or
      MLTagKeyComp(99) or
      MLTagKeyComp(116) or
      MLTagKeyComp(125) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc67: TSynWebTokenKind;
begin
  if  MLTagKeyComp(69) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc68: TSynWebTokenKind;
begin
  if  MLTagKeyComp(8) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc70: TSynWebTokenKind;
begin
  if  MLTagKeyComp(4) or
      MLTagKeyComp(6) or
      MLTagKeyComp(33) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc76: TSynWebTokenKind;
begin
  if  MLTagKeyComp(120) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc78: TSynWebTokenKind;
begin
  if  MLTagKeyComp(22) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc79: TSynWebTokenKind;
begin
  if  MLTagKeyComp(46) or
      MLTagKeyComp(96) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc80: TSynWebTokenKind;
begin
  if  MLTagKeyComp(42) or
      MLTagKeyComp(65) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc81: TSynWebTokenKind;
begin
  if  MLTagKeyComp(107) or
      MLTagKeyComp(111) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc82: TSynWebTokenKind;
begin
  if  MLTagKeyComp(13) or
      MLTagKeyComp(109) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc84: TSynWebTokenKind;
begin
  if  MLTagKeyComp(67) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc85: TSynWebTokenKind;
begin
  if  MLTagKeyComp(59) or
      MLTagKeyComp(102) or
      MLTagKeyComp(103) or
      MLTagKeyComp(105) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc86: TSynWebTokenKind;
begin
  if  MLTagKeyComp(30) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc87: TSynWebTokenKind;
begin
  if  MLTagKeyComp(49) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc89: TSynWebTokenKind;
begin
  if  MLTagKeyComp(3) or
      MLTagKeyComp(87) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc91: TSynWebTokenKind;
begin
  if  MLTagKeyComp(80) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc92: TSynWebTokenKind;
begin
  if  MLTagKeyComp(20) or
      MLTagKeyComp(118) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc93: TSynWebTokenKind;
begin
  if  MLTagKeyComp(110) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc94: TSynWebTokenKind;
begin
  if  MLTagKeyComp(119) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc95: TSynWebTokenKind;
begin
  if  MLTagKeyComp(85) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc100: TSynWebTokenKind;
begin
  if  MLTagKeyComp(43) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc106: TSynWebTokenKind;
begin
  if  MLTagKeyComp(91) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc107: TSynWebTokenKind;
begin
  if  MLTagKeyComp(28) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc110: TSynWebTokenKind;
begin
  if  MLTagKeyComp(113) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc113: TSynWebTokenKind;
begin
  if  MLTagKeyComp(88) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc114: TSynWebTokenKind;
begin
  if  MLTagKeyComp(82) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc117: TSynWebTokenKind;
begin
  if  MLTagKeyComp(94) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc121: TSynWebTokenKind;
begin
  if  MLTagKeyComp(17) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;

function TSynWebEngine.MLTagFunc128: TSynWebTokenKind;
begin
  if  MLTagKeyComp(86) then
    Result := stkMLTagName
  else
    Result := stkMLTagNameUndef;
end;
