function TSynWebEngine.PhpKeywordIdent: TSynWebTokenKind;
begin
  Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc14: TSynWebTokenKind;
begin
  if  PhpFunctionComp(195) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc15: TSynWebTokenKind;
begin
  if  PhpKeywordComp(45) then
    Result := stkPhpKeyword
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc16: TSynWebTokenKind;
begin
  if  PhpFunctionComp(626) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc17: TSynWebTokenKind;
begin
  if  PhpFunctionComp(644) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc18: TSynWebTokenKind;
begin
  if  PhpKeywordComp(21) then
    Result := stkPhpKeyword
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc19: TSynWebTokenKind;
begin
  if  PhpKeywordComp(6) or
      PhpKeywordComp(22) then
    Result := stkPhpKeyword
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc20: TSynWebTokenKind;
begin
  if  PhpKeywordComp(8) then
    Result := stkPhpKeyword
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc22: TSynWebTokenKind;
begin
  if  PhpFunctionComp(81) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc23: TSynWebTokenKind;
begin
  if  PhpFunctionComp(673) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc25: TSynWebTokenKind;
begin
  if  PhpFunctionComp(3252) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc28: TSynWebTokenKind;
begin
  if  PhpKeywordComp(12) then
    Result := stkPhpKeyword
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc29: TSynWebTokenKind;
begin
  if  PhpFunctionComp(257) or
      PhpFunctionComp(267) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc30: TSynWebTokenKind;
begin
  if  PhpFunctionComp(435) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc31: TSynWebTokenKind;
begin
  if  PhpKeywordComp(24) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(648) or
        PhpFunctionComp(2968) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc32: TSynWebTokenKind;
begin
  if  PhpFunctionComp(855) or
      PhpFunctionComp(871) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc33: TSynWebTokenKind;
begin
  if  PhpKeywordComp(59) then
    Result := stkPhpKeyword
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc34: TSynWebTokenKind;
begin
  if  PhpFunctionComp(915) or
      PhpFunctionComp(916) or
      PhpFunctionComp(1805) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc35: TSynWebTokenKind;
begin
  if  PhpKeywordComp(13) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(674) or
        PhpFunctionComp(1853) or
        PhpFunctionComp(4058) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc36: TSynWebTokenKind;
begin
  if  PhpKeywordComp(65) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(185) or
        PhpFunctionComp(1027) or
        PhpFunctionComp(1113) or
        PhpFunctionComp(2106) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc37: TSynWebTokenKind;
begin
  if  PhpKeywordComp(11) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(198) or
        PhpFunctionComp(221) or
        PhpFunctionComp(308) or
        PhpFunctionComp(598) or
        PhpFunctionComp(685) or
        PhpFunctionComp(2943) or
        PhpFunctionComp(3492) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc38: TSynWebTokenKind;
begin
  if  PhpKeywordComp(31) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(82) or
        PhpFunctionComp(908) or
        PhpFunctionComp(1868) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc39: TSynWebTokenKind;
begin
  if  PhpKeywordComp(41) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(592) or
        PhpFunctionComp(1285) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc40: TSynWebTokenKind;
begin
  if  PhpKeywordComp(34) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(197) or
        PhpFunctionComp(684) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc41: TSynWebTokenKind;
begin
  if  PhpKeywordComp(25) or
      PhpKeywordComp(77) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(865) or
        PhpFunctionComp(1123) or
        PhpFunctionComp(1743) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc42: TSynWebTokenKind;
begin
  if  PhpKeywordComp(39) or
      PhpKeywordComp(55) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(260) or
        PhpFunctionComp(265) or
        PhpFunctionComp(856) or
        PhpFunctionComp(3663) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc43: TSynWebTokenKind;
begin
  if  PhpKeywordComp(38) or
      PhpKeywordComp(50) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(176) or
        PhpFunctionComp(264) or
        PhpFunctionComp(601) or
        PhpFunctionComp(4059) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc44: TSynWebTokenKind;
begin
  if  PhpKeywordComp(9) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(187) or
        PhpFunctionComp(676) or
        PhpFunctionComp(1745) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc45: TSynWebTokenKind;
begin
  if  PhpKeywordComp(76) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(214) or
        PhpFunctionComp(309) or
        PhpFunctionComp(692) or
        PhpFunctionComp(3493) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc46: TSynWebTokenKind;
begin
  if  PhpFunctionComp(83) or
      PhpFunctionComp(921) or
      PhpFunctionComp(1398) or
      PhpFunctionComp(1800) or
      PhpFunctionComp(3253) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc47: TSynWebTokenKind;
begin
  if  PhpFunctionComp(216) or
      PhpFunctionComp(603) or
      PhpFunctionComp(905) or
      PhpFunctionComp(4093) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc48: TSynWebTokenKind;
begin
  if  PhpKeywordComp(19) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(1728) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc49: TSynWebTokenKind;
begin
  if  PhpKeywordComp(16) or
      PhpKeywordComp(44) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(599) or
        PhpFunctionComp(920) or
        PhpFunctionComp(1128) or
        PhpFunctionComp(2091) or
        PhpFunctionComp(2099) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc50: TSynWebTokenKind;
begin
  if  PhpFunctionComp(600) or
      PhpFunctionComp(1028) or
      PhpFunctionComp(2807) or
      PhpFunctionComp(3256) or
      PhpFunctionComp(3522) or
      PhpFunctionComp(3664) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc51: TSynWebTokenKind;
begin
  if  PhpFunctionComp(177) or
      PhpFunctionComp(199) or
      PhpFunctionComp(605) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc52: TSynWebTokenKind;
begin
  if  PhpFunctionComp(196) or
      PhpFunctionComp(263) or
      PhpFunctionComp(925) or
      PhpFunctionComp(1646) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc54: TSynWebTokenKind;
begin
  if  PhpKeywordComp(15) or
      PhpKeywordComp(40) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(281) or
        PhpFunctionComp(3292) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc55: TSynWebTokenKind;
begin
  if  PhpKeywordComp(57) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(924) or
        PhpFunctionComp(2112) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc56: TSynWebTokenKind;
begin
  if  PhpKeywordComp(26) or
      PhpKeywordComp(42) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(231) or
        PhpFunctionComp(758) or
        PhpFunctionComp(910) or
        PhpFunctionComp(3527) or
        PhpFunctionComp(3642) or
        PhpFunctionComp(3767) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc57: TSynWebTokenKind;
begin
  if  PhpKeywordComp(78) or
      PhpKeywordComp(79) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(867) or
        PhpFunctionComp(1346) or
        PhpFunctionComp(1400) or
        PhpFunctionComp(3667) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc58: TSynWebTokenKind;
begin
  if  PhpKeywordComp(36) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(691) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc59: TSynWebTokenKind;
begin
  if  PhpKeywordComp(23) or
      PhpKeywordComp(56) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(212) or
        PhpFunctionComp(307) or
        PhpFunctionComp(1098) or
        PhpFunctionComp(3501) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc60: TSynWebTokenKind;
begin
  if  PhpKeywordComp(54) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(194) or
        PhpFunctionComp(261) or
        PhpFunctionComp(819) or
        PhpFunctionComp(1126) or
        PhpFunctionComp(1802) or
        PhpFunctionComp(3502) or
        PhpFunctionComp(3797) or
        PhpFunctionComp(4108) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc61: TSynWebTokenKind;
begin
  if  PhpFunctionComp(528) or
      PhpFunctionComp(1107) or
      PhpFunctionComp(2144) or
      PhpFunctionComp(3302) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc62: TSynWebTokenKind;
begin
  if  PhpKeywordComp(29) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(1004) or
        PhpFunctionComp(1005) or
        PhpFunctionComp(3536) or
        PhpFunctionComp(3768) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc63: TSynWebTokenKind;
begin
  if  PhpKeywordComp(7) or
      PhpKeywordComp(64) or
      PhpKeywordComp(74) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(126) or
        PhpFunctionComp(266) or
        PhpFunctionComp(1127) or
        PhpFunctionComp(1266) or
        PhpFunctionComp(2691) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc64: TSynWebTokenKind;
begin
  if  PhpKeywordComp(10) or
      PhpKeywordComp(73) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(620) or
        PhpFunctionComp(1749) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc65: TSynWebTokenKind;
begin
  if  PhpFunctionComp(186) or
      PhpFunctionComp(909) or
      PhpFunctionComp(1099) or
      PhpFunctionComp(1347) or
      PhpFunctionComp(2773) or
      PhpFunctionComp(4137) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc66: TSynWebTokenKind;
begin
  if  PhpFunctionComp(524) or
      PhpFunctionComp(906) or
      PhpFunctionComp(907) or
      PhpFunctionComp(923) or
      PhpFunctionComp(1683) or
      PhpFunctionComp(3255) or
      PhpFunctionComp(4143) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc67: TSynWebTokenKind;
begin
  if  PhpFunctionComp(3529) or
      PhpFunctionComp(4106) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc68: TSynWebTokenKind;
begin
  if  PhpKeywordComp(47) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(604) or
        PhpFunctionComp(1100) or
        PhpFunctionComp(3466) or
        PhpFunctionComp(3504) or
        PhpFunctionComp(3576) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc69: TSynWebTokenKind;
begin
  if  PhpKeywordComp(20) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(532) or
        PhpFunctionComp(1095) or
        PhpFunctionComp(2785) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc70: TSynWebTokenKind;
begin
  if  PhpFunctionComp(526) or
      PhpFunctionComp(891) or
      PhpFunctionComp(2977) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc71: TSynWebTokenKind;
begin
  if  PhpKeywordComp(17) or
      PhpKeywordComp(28) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(86) or
        PhpFunctionComp(298) or
        PhpFunctionComp(2113) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc72: TSynWebTokenKind;
begin
  if  PhpKeywordComp(53) or
      PhpKeywordComp(69) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(864) or
        PhpFunctionComp(1408) or
        PhpFunctionComp(1715) or
        PhpFunctionComp(1809) or
        PhpFunctionComp(1810) or
        PhpFunctionComp(3538) or
        PhpFunctionComp(3712) or
        PhpFunctionComp(3866) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc73: TSynWebTokenKind;
begin
  if  PhpFunctionComp(178) or
      PhpFunctionComp(297) or
      PhpFunctionComp(310) or
      PhpFunctionComp(525) or
      PhpFunctionComp(1006) or
      PhpFunctionComp(1109) or
      PhpFunctionComp(1403) or
      PhpFunctionComp(3534) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc74: TSynWebTokenKind;
begin
  if  PhpFunctionComp(299) or
      PhpFunctionComp(1386) or
      PhpFunctionComp(1434) or
      PhpFunctionComp(1614) or
      PhpFunctionComp(3517) or
      PhpFunctionComp(3537) or
      PhpFunctionComp(3766) or
      PhpFunctionComp(4140) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc75: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1399) or
      PhpFunctionComp(1405) or
      PhpFunctionComp(1750) or
      PhpFunctionComp(2695) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc76: TSynWebTokenKind;
begin
  if  PhpFunctionComp(868) or
      PhpFunctionComp(3722) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc77: TSynWebTokenKind;
begin
  if  PhpKeywordComp(61) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(1650) or
        PhpFunctionComp(3303) or
        PhpFunctionComp(3658) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc78: TSynWebTokenKind;
begin
  if  PhpKeywordComp(51) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(230) or
        PhpFunctionComp(1427) or
        PhpFunctionComp(1648) or
        PhpFunctionComp(1807) or
        PhpFunctionComp(3548) or
        PhpFunctionComp(4153) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc79: TSynWebTokenKind;
begin
  if  PhpKeywordComp(27) or
      PhpKeywordComp(30) or
      PhpKeywordComp(75) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(215) or
        PhpFunctionComp(268) or
        PhpFunctionComp(533) or
        PhpFunctionComp(651) or
        PhpFunctionComp(878) or
        PhpFunctionComp(1097) or
        PhpFunctionComp(1428) or
        PhpFunctionComp(1752) or
        PhpFunctionComp(3301) or
        PhpFunctionComp(4146) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc80: TSynWebTokenKind;
begin
  if  PhpKeywordComp(33) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(591) or
        PhpFunctionComp(875) or
        PhpFunctionComp(2818) or
        PhpFunctionComp(3665) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc81: TSynWebTokenKind;
begin
  if  PhpKeywordComp(52) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(695) or
        PhpFunctionComp(882) or
        PhpFunctionComp(965) or
        PhpFunctionComp(2854) or
        PhpFunctionComp(2878) or
        PhpFunctionComp(3521) or
        PhpFunctionComp(4103) or
        PhpFunctionComp(4142) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc82: TSynWebTokenKind;
begin
  if  PhpKeywordComp(71) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(183) or
        PhpFunctionComp(223) or
        PhpFunctionComp(390) or
        PhpFunctionComp(866) or
        PhpFunctionComp(876) or
        PhpFunctionComp(914) or
        PhpFunctionComp(1031) or
        PhpFunctionComp(1110) or
        PhpFunctionComp(4061) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc83: TSynWebTokenKind;
begin
  if  PhpFunctionComp(388) or
      PhpFunctionComp(686) or
      PhpFunctionComp(1017) or
      PhpFunctionComp(1104) or
      PhpFunctionComp(1747) or
      PhpFunctionComp(2853) or
      PhpFunctionComp(3336) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc84: TSynWebTokenKind;
begin
  if  PhpKeywordComp(5) or
      PhpKeywordComp(72) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(1101) or
        PhpFunctionComp(1202) or
        PhpFunctionComp(2879) or
        PhpFunctionComp(3250) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc85: TSynWebTokenKind;
begin
  if  PhpFunctionComp(282) or
      PhpFunctionComp(3000) or
      PhpFunctionComp(3723) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc86: TSynWebTokenKind;
begin
  if  PhpFunctionComp(500) or
      PhpFunctionComp(696) or
      PhpFunctionComp(1096) or
      PhpFunctionComp(2235) or
      PhpFunctionComp(2798) or
      PhpFunctionComp(3463) or
      PhpFunctionComp(3879) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc87: TSynWebTokenKind;
begin
  if  PhpKeywordComp(70) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(1042) or
        PhpFunctionComp(1093) or
        PhpFunctionComp(1146) or
        PhpFunctionComp(1371) or
        PhpFunctionComp(1971) or
        PhpFunctionComp(4148) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc88: TSynWebTokenKind;
begin
  if  PhpFunctionComp(283) or
      PhpFunctionComp(314) or
      PhpFunctionComp(2791) or
      PhpFunctionComp(3937) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc89: TSynWebTokenKind;
begin
  if  PhpFunctionComp(120) or
      PhpFunctionComp(904) or
      PhpFunctionComp(912) or
      PhpFunctionComp(1433) or
      PhpFunctionComp(1806) or
      PhpFunctionComp(2715) or
      PhpFunctionComp(2976) or
      PhpFunctionComp(3880) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc90: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1013) or
      PhpFunctionComp(1801) or
      PhpFunctionComp(1804) or
      PhpFunctionComp(2792) or
      PhpFunctionComp(2925) or
      PhpFunctionComp(3547) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc91: TSynWebTokenKind;
begin
  if  PhpKeywordComp(37) or
      PhpKeywordComp(62) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(174) or
        PhpFunctionComp(213) or
        PhpFunctionComp(217) or
        PhpFunctionComp(698) or
        PhpFunctionComp(889) or
        PhpFunctionComp(1029) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc92: TSynWebTokenKind;
begin
  if  PhpFunctionComp(85) or
      PhpFunctionComp(879) or
      PhpFunctionComp(966) or
      PhpFunctionComp(1032) or
      PhpFunctionComp(2946) or
      PhpFunctionComp(3639) or
      PhpFunctionComp(3956) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc93: TSynWebTokenKind;
begin
  if  PhpKeywordComp(66) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(241) or
        PhpFunctionComp(610) or
        PhpFunctionComp(3503) or
        PhpFunctionComp(4154) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc94: TSynWebTokenKind;
begin
  if  PhpFunctionComp(229) or
      PhpFunctionComp(507) or
      PhpFunctionComp(642) or
      PhpFunctionComp(836) or
      PhpFunctionComp(1366) or
      PhpFunctionComp(1700) or
      PhpFunctionComp(3349) or
      PhpFunctionComp(3676) or
      PhpFunctionComp(4109) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc95: TSynWebTokenKind;
begin
  if  PhpFunctionComp(84) or
      PhpFunctionComp(498) or
      PhpFunctionComp(1030) or
      PhpFunctionComp(1294) or
      PhpFunctionComp(2300) or
      PhpFunctionComp(3955) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc96: TSynWebTokenKind;
begin
  if  PhpKeywordComp(68) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(175) or
        PhpFunctionComp(647) or
        PhpFunctionComp(1689) or
        PhpFunctionComp(1981) or
        PhpFunctionComp(4110) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc97: TSynWebTokenKind;
begin
  if  PhpFunctionComp(235) or
      PhpFunctionComp(1692) or
      PhpFunctionComp(2097) or
      PhpFunctionComp(3155) or
      PhpFunctionComp(4056) or
      PhpFunctionComp(4149) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc98: TSynWebTokenKind;
begin
  if  PhpFunctionComp(226) or
      PhpFunctionComp(497) or
      PhpFunctionComp(890) or
      PhpFunctionComp(1026) or
      PhpFunctionComp(1117) or
      PhpFunctionComp(1784) or
      PhpFunctionComp(2821) or
      PhpFunctionComp(3435) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc99: TSynWebTokenKind;
begin
  if  PhpFunctionComp(108) or
      PhpFunctionComp(420) or
      PhpFunctionComp(522) or
      PhpFunctionComp(1015) or
      PhpFunctionComp(1052) or
      PhpFunctionComp(1753) or
      PhpFunctionComp(3001) or
      PhpFunctionComp(3149) or
      PhpFunctionComp(3881) or
      PhpFunctionComp(3957) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc100: TSynWebTokenKind;
begin
  if  PhpFunctionComp(287) or
      PhpFunctionComp(291) or
      PhpFunctionComp(841) or
      PhpFunctionComp(1103) or
      PhpFunctionComp(2781) or
      PhpFunctionComp(2917) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc101: TSynWebTokenKind;
begin
  if  PhpKeywordComp(18) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(1024) or
        PhpFunctionComp(1642) or
        PhpFunctionComp(1705) or
        PhpFunctionComp(1746) or
        PhpFunctionComp(2783) or
        PhpFunctionComp(2802) or
        PhpFunctionComp(4057) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc102: TSynWebTokenKind;
begin
  if  PhpKeywordComp(43) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(227) or
        PhpFunctionComp(1348) or
        PhpFunctionComp(1649) or
        PhpFunctionComp(1803) or
        PhpFunctionComp(1808) or
        PhpFunctionComp(2733) or
        PhpFunctionComp(3047) or
        PhpFunctionComp(3638) or
        PhpFunctionComp(3713) or
        PhpFunctionComp(3724) or
        PhpFunctionComp(3946) or
        PhpFunctionComp(4376) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc103: TSynWebTokenKind;
begin
  if  PhpFunctionComp(232) or
      PhpFunctionComp(262) or
      PhpFunctionComp(384) or
      PhpFunctionComp(434) or
      PhpFunctionComp(838) or
      PhpFunctionComp(881) or
      PhpFunctionComp(918) or
      PhpFunctionComp(1021) or
      PhpFunctionComp(1041) or
      PhpFunctionComp(1102) or
      PhpFunctionComp(1190) or
      PhpFunctionComp(1722) or
      PhpFunctionComp(3013) or
      PhpFunctionComp(3091) or
      PhpFunctionComp(3941) or
      PhpFunctionComp(3951) or
      PhpFunctionComp(4053) or
      PhpFunctionComp(4111) or
      PhpFunctionComp(4187) or
      PhpFunctionComp(4375) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc104: TSynWebTokenKind;
begin
  if  PhpFunctionComp(505) or
      PhpFunctionComp(510) or
      PhpFunctionComp(530) or
      PhpFunctionComp(922) or
      PhpFunctionComp(1016) or
      PhpFunctionComp(1035) or
      PhpFunctionComp(1395) or
      PhpFunctionComp(2796) or
      PhpFunctionComp(3535) or
      PhpFunctionComp(3583) or
      PhpFunctionComp(3942) or
      PhpFunctionComp(3945) or
      PhpFunctionComp(4136) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc105: TSynWebTokenKind;
begin
  if  PhpKeywordComp(14) or
      PhpKeywordComp(32) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(325) or
        PhpFunctionComp(511) or
        PhpFunctionComp(606) or
        PhpFunctionComp(611) or
        PhpFunctionComp(823) or
        PhpFunctionComp(1012) or
        PhpFunctionComp(1034) or
        PhpFunctionComp(1050) or
        PhpFunctionComp(1115) or
        PhpFunctionComp(1387) or
        PhpFunctionComp(1392) or
        PhpFunctionComp(2104) or
        PhpFunctionComp(3075) or
        PhpFunctionComp(4205) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc106: TSynWebTokenKind;
begin
  if  PhpKeywordComp(49) or
      PhpKeywordComp(63) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(116) or
        PhpFunctionComp(284) or
        PhpFunctionComp(303) or
        PhpFunctionComp(317) or
        PhpFunctionComp(346) or
        PhpFunctionComp(1054) or
        PhpFunctionComp(1108) or
        PhpFunctionComp(1550) or
        PhpFunctionComp(2740) or
        PhpFunctionComp(2800) or
        PhpFunctionComp(3217) or
        PhpFunctionComp(3579) or
        PhpFunctionComp(3679) or
        PhpFunctionComp(3949) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc107: TSynWebTokenKind;
begin
  if  PhpFunctionComp(706) or
      PhpFunctionComp(822) or
      PhpFunctionComp(880) or
      PhpFunctionComp(913) or
      PhpFunctionComp(1020) or
      PhpFunctionComp(1651) or
      PhpFunctionComp(2227) or
      PhpFunctionComp(2414) or
      PhpFunctionComp(3236) or
      PhpFunctionComp(3577) or
      PhpFunctionComp(3943) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc108: TSynWebTokenKind;
begin
  if  PhpFunctionComp(107) or
      PhpFunctionComp(589) or
      PhpFunctionComp(960) or
      PhpFunctionComp(1036) or
      PhpFunctionComp(1112) or
      PhpFunctionComp(1663) or
      PhpFunctionComp(1696) or
      PhpFunctionComp(2916) or
      PhpFunctionComp(2928) or
      PhpFunctionComp(3350) or
      PhpFunctionComp(4125) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc109: TSynWebTokenKind;
begin
  if  PhpFunctionComp(462) or
      PhpFunctionComp(877) or
      PhpFunctionComp(1106) or
      PhpFunctionComp(1686) or
      PhpFunctionComp(1720) or
      PhpFunctionComp(3086) or
      PhpFunctionComp(3680) or
      PhpFunctionComp(3882) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc110: TSynWebTokenKind;
begin
  if  PhpFunctionComp(509) or
      PhpFunctionComp(1608) or
      PhpFunctionComp(2784) or
      PhpFunctionComp(3090) or
      PhpFunctionComp(3641) or
      PhpFunctionComp(3931) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc111: TSynWebTokenKind;
begin
  if  PhpKeywordComp(35) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(701) or
        PhpFunctionComp(936) or
        PhpFunctionComp(1188) or
        PhpFunctionComp(1455) or
        PhpFunctionComp(1578) or
        PhpFunctionComp(1669) or
        PhpFunctionComp(1698) or
        PhpFunctionComp(3150) or
        PhpFunctionComp(3366) or
        PhpFunctionComp(4186) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc112: TSynWebTokenKind;
begin
  if  PhpFunctionComp(296) or
      PhpFunctionComp(338) or
      PhpFunctionComp(1182) or
      PhpFunctionComp(3355) or
      PhpFunctionComp(3385) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc113: TSynWebTokenKind;
begin
  if  PhpFunctionComp(344) or
      PhpFunctionComp(870) or
      PhpFunctionComp(1048) or
      PhpFunctionComp(1385) or
      PhpFunctionComp(1410) or
      PhpFunctionComp(1597) or
      PhpFunctionComp(1645) or
      PhpFunctionComp(1667) or
      PhpFunctionComp(1688) or
      PhpFunctionComp(1699) or
      PhpFunctionComp(1704) or
      PhpFunctionComp(2929) or
      PhpFunctionComp(3012) or
      PhpFunctionComp(4359) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc114: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1200) or
      PhpFunctionComp(1418) or
      PhpFunctionComp(1821) or
      PhpFunctionComp(3033) or
      PhpFunctionComp(3140) or
      PhpFunctionComp(3376) or
      PhpFunctionComp(3950) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc115: TSynWebTokenKind;
begin
  if  PhpFunctionComp(218) or
      PhpFunctionComp(527) or
      PhpFunctionComp(609) or
      PhpFunctionComp(859) or
      PhpFunctionComp(1068) or
      PhpFunctionComp(1116) or
      PhpFunctionComp(2693) or
      PhpFunctionComp(2810) or
      PhpFunctionComp(3205) or
      PhpFunctionComp(3871) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc116: TSynWebTokenKind;
begin
  if  PhpFunctionComp(316) or
      PhpFunctionComp(334) or
      PhpFunctionComp(933) or
      PhpFunctionComp(1011) or
      PhpFunctionComp(1261) or
      PhpFunctionComp(1383) or
      PhpFunctionComp(1725) or
      PhpFunctionComp(1732) or
      PhpFunctionComp(2047) or
      PhpFunctionComp(2772) or
      PhpFunctionComp(3934) or
      PhpFunctionComp(4396) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc117: TSynWebTokenKind;
begin
  if  PhpFunctionComp(934) or
      PhpFunctionComp(1003) or
      PhpFunctionComp(1014) or
      PhpFunctionComp(1569) or
      PhpFunctionComp(1721) or
      PhpFunctionComp(1726) or
      PhpFunctionComp(2940) or
      PhpFunctionComp(3014) or
      PhpFunctionComp(3465) or
      PhpFunctionComp(3878) or
      PhpFunctionComp(4141) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc118: TSynWebTokenKind;
begin
  if  PhpFunctionComp(521) or
      PhpFunctionComp(1343) or
      PhpFunctionComp(1511) or
      PhpFunctionComp(2092) or
      PhpFunctionComp(2141) or
      PhpFunctionComp(2734) or
      PhpFunctionComp(3249) or
      PhpFunctionComp(3381) or
      PhpFunctionComp(3646) or
      PhpFunctionComp(4230) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc119: TSynWebTokenKind;
begin
  if  PhpFunctionComp(114) or
      PhpFunctionComp(279) or
      PhpFunctionComp(436) or
      PhpFunctionComp(607) or
      PhpFunctionComp(627) or
      PhpFunctionComp(901) or
      PhpFunctionComp(1051) or
      PhpFunctionComp(1351) or
      PhpFunctionComp(1694) or
      PhpFunctionComp(1707) or
      PhpFunctionComp(1838) or
      PhpFunctionComp(2941) or
      PhpFunctionComp(3021) or
      PhpFunctionComp(3384) or
      PhpFunctionComp(3448) or
      PhpFunctionComp(3523) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc120: TSynWebTokenKind;
begin
  if  PhpFunctionComp(318) or
      PhpFunctionComp(514) or
      PhpFunctionComp(534) or
      PhpFunctionComp(608) or
      PhpFunctionComp(893) or
      PhpFunctionComp(1254) or
      PhpFunctionComp(1417) or
      PhpFunctionComp(1419) or
      PhpFunctionComp(1432) or
      PhpFunctionComp(1681) or
      PhpFunctionComp(1703) or
      PhpFunctionComp(1748) or
      PhpFunctionComp(1879) or
      PhpFunctionComp(1987) or
      PhpFunctionComp(2016) or
      PhpFunctionComp(2718) or
      PhpFunctionComp(2852) or
      PhpFunctionComp(3135) or
      PhpFunctionComp(3254) or
      PhpFunctionComp(3339) or
      PhpFunctionComp(3944) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc121: TSynWebTokenKind;
begin
  if  PhpFunctionComp(151) or
      PhpFunctionComp(253) or
      PhpFunctionComp(581) or
      PhpFunctionComp(625) or
      PhpFunctionComp(928) or
      PhpFunctionComp(951) or
      PhpFunctionComp(1345) or
      PhpFunctionComp(1729) or
      PhpFunctionComp(1758) or
      PhpFunctionComp(2936) or
      PhpFunctionComp(3123) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc122: TSynWebTokenKind;
begin
  if  PhpFunctionComp(246) or
      PhpFunctionComp(513) or
      PhpFunctionComp(590) or
      PhpFunctionComp(926) or
      PhpFunctionComp(929) or
      PhpFunctionComp(949) or
      PhpFunctionComp(1064) or
      PhpFunctionComp(1143) or
      PhpFunctionComp(1401) or
      PhpFunctionComp(1406) or
      PhpFunctionComp(1425) or
      PhpFunctionComp(1548) or
      PhpFunctionComp(1588) or
      PhpFunctionComp(1662) or
      PhpFunctionComp(2801) or
      PhpFunctionComp(2975) or
      PhpFunctionComp(3184) or
      PhpFunctionComp(3354) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc123: TSynWebTokenKind;
begin
  if  PhpFunctionComp(531) or
      PhpFunctionComp(825) or
      PhpFunctionComp(927) or
      PhpFunctionComp(978) or
      PhpFunctionComp(1616) or
      PhpFunctionComp(1687) or
      PhpFunctionComp(1724) or
      PhpFunctionComp(1727) or
      PhpFunctionComp(1824) or
      PhpFunctionComp(2764) or
      PhpFunctionComp(2809) or
      PhpFunctionComp(3362) or
      PhpFunctionComp(3936) or
      PhpFunctionComp(4382) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc124: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1430) or
      PhpFunctionComp(1467) or
      PhpFunctionComp(1566) or
      PhpFunctionComp(1690) or
      PhpFunctionComp(1701) or
      PhpFunctionComp(1754) or
      PhpFunctionComp(1787) or
      PhpFunctionComp(1816) or
      PhpFunctionComp(1849) or
      PhpFunctionComp(2797) or
      PhpFunctionComp(3228) or
      PhpFunctionComp(3497) or
      PhpFunctionComp(3939) or
      PhpFunctionComp(4063) or
      PhpFunctionComp(4206) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc125: TSynWebTokenKind;
begin
  if  PhpFunctionComp(99) or
      PhpFunctionComp(131) or
      PhpFunctionComp(502) or
      PhpFunctionComp(612) or
      PhpFunctionComp(683) or
      PhpFunctionComp(1045) or
      PhpFunctionComp(1119) or
      PhpFunctionComp(1424) or
      PhpFunctionComp(1468) or
      PhpFunctionComp(1641) or
      PhpFunctionComp(1906) or
      PhpFunctionComp(1909) or
      PhpFunctionComp(2918) or
      PhpFunctionComp(3117) or
      PhpFunctionComp(3238) or
      PhpFunctionComp(3643) or
      PhpFunctionComp(3948) or
      PhpFunctionComp(4007) or
      PhpFunctionComp(4062) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc126: TSynWebTokenKind;
begin
  if  PhpKeywordComp(46) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(228) or
        PhpFunctionComp(249) or
        PhpFunctionComp(444) or
        PhpFunctionComp(454) or
        PhpFunctionComp(707) or
        PhpFunctionComp(1010) or
        PhpFunctionComp(1587) or
        PhpFunctionComp(1668) or
        PhpFunctionComp(1785) or
        PhpFunctionComp(2228) or
        PhpFunctionComp(3356) or
        PhpFunctionComp(4367) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc127: TSynWebTokenKind;
begin
  if  PhpFunctionComp(618) or
      PhpFunctionComp(826) or
      PhpFunctionComp(1057) or
      PhpFunctionComp(1114) or
      PhpFunctionComp(1207) or
      PhpFunctionComp(1217) or
      PhpFunctionComp(1529) or
      PhpFunctionComp(1555) or
      PhpFunctionComp(1917) or
      PhpFunctionComp(2094) or
      PhpFunctionComp(2786) or
      PhpFunctionComp(3241) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc128: TSynWebTokenKind;
begin
  if  PhpFunctionComp(188) or
      PhpFunctionComp(406) or
      PhpFunctionComp(911) or
      PhpFunctionComp(1198) or
      PhpFunctionComp(1553) or
      PhpFunctionComp(1673) or
      PhpFunctionComp(1684) or
      PhpFunctionComp(1693) or
      PhpFunctionComp(1997) or
      PhpFunctionComp(3120) or
      PhpFunctionComp(3295) or
      PhpFunctionComp(3439) or
      PhpFunctionComp(3494) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc129: TSynWebTokenKind;
begin
  if  PhpFunctionComp(503) or
      PhpFunctionComp(939) or
      PhpFunctionComp(989) or
      PhpFunctionComp(1674) or
      PhpFunctionComp(3119) or
      PhpFunctionComp(3173) or
      PhpFunctionComp(3218) or
      PhpFunctionComp(3293) or
      PhpFunctionComp(3498) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc130: TSynWebTokenKind;
begin
  if  PhpFunctionComp(147) or
      PhpFunctionComp(190) or
      PhpFunctionComp(712) or
      PhpFunctionComp(722) or
      PhpFunctionComp(932) or
      PhpFunctionComp(1025) or
      PhpFunctionComp(1069) or
      PhpFunctionComp(1070) or
      PhpFunctionComp(1289) or
      PhpFunctionComp(1396) or
      PhpFunctionComp(1518) or
      PhpFunctionComp(1552) or
      PhpFunctionComp(1577) or
      PhpFunctionComp(1599) or
      PhpFunctionComp(1774) or
      PhpFunctionComp(2575) or
      PhpFunctionComp(2782) or
      PhpFunctionComp(2937) or
      PhpFunctionComp(3644) or
      PhpFunctionComp(3645) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc131: TSynWebTokenKind;
begin
  if  PhpFunctionComp(378) or
      PhpFunctionComp(496) or
      PhpFunctionComp(682) or
      PhpFunctionComp(1730) or
      PhpFunctionComp(2640) or
      PhpFunctionComp(3046) or
      PhpFunctionComp(3248) or
      PhpFunctionComp(3436) or
      PhpFunctionComp(3796) or
      PhpFunctionComp(3940) or
      PhpFunctionComp(4160) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc132: TSynWebTokenKind;
begin
  if  PhpFunctionComp(179) or
      PhpFunctionComp(529) or
      PhpFunctionComp(675) or
      PhpFunctionComp(956) or
      PhpFunctionComp(1184) or
      PhpFunctionComp(1440) or
      PhpFunctionComp(1545) or
      PhpFunctionComp(1590) or
      PhpFunctionComp(1606) or
      PhpFunctionComp(2048) or
      PhpFunctionComp(2729) or
      PhpFunctionComp(2932) or
      PhpFunctionComp(3304) or
      PhpFunctionComp(3636) or
      PhpFunctionComp(4157) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc133: TSynWebTokenKind;
begin
  if  PhpFunctionComp(295) or
      PhpFunctionComp(596) or
      PhpFunctionComp(930) or
      PhpFunctionComp(1464) or
      PhpFunctionComp(1466) or
      PhpFunctionComp(1794) or
      PhpFunctionComp(1907) or
      PhpFunctionComp(2596) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc134: TSynWebTokenKind;
begin
  if  PhpFunctionComp(111) or
      PhpFunctionComp(242) or
      PhpFunctionComp(256) or
      PhpFunctionComp(861) or
      PhpFunctionComp(862) or
      PhpFunctionComp(940) or
      PhpFunctionComp(1664) or
      PhpFunctionComp(1685) or
      PhpFunctionComp(1793) or
      PhpFunctionComp(2814) or
      PhpFunctionComp(2933) or
      PhpFunctionComp(3142) or
      PhpFunctionComp(3403) or
      PhpFunctionComp(3462) or
      PhpFunctionComp(3496) or
      PhpFunctionComp(3545) or
      PhpFunctionComp(3947) or
      PhpFunctionComp(4365) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc135: TSynWebTokenKind;
begin
  if  PhpFunctionComp(245) or
      PhpFunctionComp(382) or
      PhpFunctionComp(597) or
      PhpFunctionComp(645) or
      PhpFunctionComp(863) or
      PhpFunctionComp(953) or
      PhpFunctionComp(1873) or
      PhpFunctionComp(2413) or
      PhpFunctionComp(2815) or
      PhpFunctionComp(2819) or
      PhpFunctionComp(2847) or
      PhpFunctionComp(4105) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc136: TSynWebTokenKind;
begin
  if  PhpFunctionComp(224) or
      PhpFunctionComp(247) or
      PhpFunctionComp(858) or
      PhpFunctionComp(938) or
      PhpFunctionComp(948) or
      PhpFunctionComp(1043) or
      PhpFunctionComp(1196) or
      PhpFunctionComp(1571) or
      PhpFunctionComp(1573) or
      PhpFunctionComp(1601) or
      PhpFunctionComp(1711) or
      PhpFunctionComp(3654) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc137: TSynWebTokenKind;
begin
  if  PhpFunctionComp(155) or
      PhpFunctionComp(902) or
      PhpFunctionComp(947) or
      PhpFunctionComp(1033) or
      PhpFunctionComp(1061) or
      PhpFunctionComp(1680) or
      PhpFunctionComp(2152) or
      PhpFunctionComp(2735) or
      PhpFunctionComp(3204) or
      PhpFunctionComp(3406) or
      PhpFunctionComp(3681) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc138: TSynWebTokenKind;
begin
  if  PhpFunctionComp(258) or
      PhpFunctionComp(582) or
      PhpFunctionComp(957) or
      PhpFunctionComp(1060) or
      PhpFunctionComp(1062) or
      PhpFunctionComp(2736) or
      PhpFunctionComp(2738) or
      PhpFunctionComp(2768) or
      PhpFunctionComp(2775) or
      PhpFunctionComp(3069) or
      PhpFunctionComp(3405) or
      PhpFunctionComp(3542) or
      PhpFunctionComp(3697) or
      PhpFunctionComp(4369) or
      PhpFunctionComp(4384) or
      PhpFunctionComp(4395) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc139: TSynWebTokenKind;
begin
  if  PhpFunctionComp(136) or
      PhpFunctionComp(236) or
      PhpFunctionComp(442) or
      PhpFunctionComp(588) or
      PhpFunctionComp(827) or
      PhpFunctionComp(1263) or
      PhpFunctionComp(1409) or
      PhpFunctionComp(1416) or
      PhpFunctionComp(1465) or
      PhpFunctionComp(2050) or
      PhpFunctionComp(2672) or
      PhpFunctionComp(2979) or
      PhpFunctionComp(3102) or
      PhpFunctionComp(3201) or
      PhpFunctionComp(3219) or
      PhpFunctionComp(3340) or
      PhpFunctionComp(3499) or
      PhpFunctionComp(3540) or
      PhpFunctionComp(3580) or
      PhpFunctionComp(3683) or
      PhpFunctionComp(3895) or
      PhpFunctionComp(3953) or
      PhpFunctionComp(4145) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc140: TSynWebTokenKind;
begin
  if  PhpFunctionComp(113) or
      PhpFunctionComp(189) or
      PhpFunctionComp(440) or
      PhpFunctionComp(499) or
      PhpFunctionComp(593) or
      PhpFunctionComp(615) or
      PhpFunctionComp(1058) or
      PhpFunctionComp(1120) or
      PhpFunctionComp(1344) or
      PhpFunctionComp(1457) or
      PhpFunctionComp(1672) or
      PhpFunctionComp(1761) or
      PhpFunctionComp(2002) or
      PhpFunctionComp(2055) or
      PhpFunctionComp(2841) or
      PhpFunctionComp(3206) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc141: TSynWebTokenKind;
begin
  if  PhpFunctionComp(331) or
      PhpFunctionComp(535) or
      PhpFunctionComp(583) or
      PhpFunctionComp(584) or
      PhpFunctionComp(677) or
      PhpFunctionComp(900) or
      PhpFunctionComp(954) or
      PhpFunctionComp(1094) or
      PhpFunctionComp(1141) or
      PhpFunctionComp(1224) or
      PhpFunctionComp(1384) or
      PhpFunctionComp(1404) or
      PhpFunctionComp(1531) or
      PhpFunctionComp(1539) or
      PhpFunctionComp(1731) or
      PhpFunctionComp(1755) or
      PhpFunctionComp(1934) or
      PhpFunctionComp(2694) or
      PhpFunctionComp(3200) or
      PhpFunctionComp(3908) or
      PhpFunctionComp(4161) or
      PhpFunctionComp(4383) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc142: TSynWebTokenKind;
begin
  if  PhpKeywordComp(48) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(366) or
        PhpFunctionComp(689) or
        PhpFunctionComp(699) or
        PhpFunctionComp(857) or
        PhpFunctionComp(935) or
        PhpFunctionComp(1144) or
        PhpFunctionComp(1157) or
        PhpFunctionComp(1361) or
        PhpFunctionComp(1367) or
        PhpFunctionComp(1445) or
        PhpFunctionComp(1500) or
        PhpFunctionComp(1510) or
        PhpFunctionComp(1543) or
        PhpFunctionComp(1778) or
        PhpFunctionComp(1790) or
        PhpFunctionComp(2059) or
        PhpFunctionComp(3089) or
        PhpFunctionComp(3240) or
        PhpFunctionComp(3251) or
        PhpFunctionComp(4350) or
        PhpFunctionComp(4355) or
        PhpFunctionComp(4374) or
        PhpFunctionComp(4387) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc143: TSynWebTokenKind;
begin
  if  PhpFunctionComp(139) or
      PhpFunctionComp(408) or
      PhpFunctionComp(977) or
      PhpFunctionComp(1049) or
      PhpFunctionComp(1092) or
      PhpFunctionComp(1358) or
      PhpFunctionComp(1437) or
      PhpFunctionComp(1697) or
      PhpFunctionComp(1723) or
      PhpFunctionComp(2056) or
      PhpFunctionComp(2139) or
      PhpFunctionComp(3156) or
      PhpFunctionComp(3298) or
      PhpFunctionComp(3337) or
      PhpFunctionComp(3725) or
      PhpFunctionComp(4353) or
      PhpFunctionComp(4370) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc144: TSynWebTokenKind;
begin
  if  PhpFunctionComp(97) or
      PhpFunctionComp(181) or
      PhpFunctionComp(289) or
      PhpFunctionComp(392) or
      PhpFunctionComp(541) or
      PhpFunctionComp(729) or
      PhpFunctionComp(1155) or
      PhpFunctionComp(1199) or
      PhpFunctionComp(1584) or
      PhpFunctionComp(1756) or
      PhpFunctionComp(1762) or
      PhpFunctionComp(1839) or
      PhpFunctionComp(2822) or
      PhpFunctionComp(2922) or
      PhpFunctionComp(3174) or
      PhpFunctionComp(3640) or
      PhpFunctionComp(4159) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc145: TSynWebTokenKind;
begin
  if  PhpFunctionComp(225) or
      PhpFunctionComp(342) or
      PhpFunctionComp(402) or
      PhpFunctionComp(457) or
      PhpFunctionComp(679) or
      PhpFunctionComp(899) or
      PhpFunctionComp(1252) or
      PhpFunctionComp(1421) or
      PhpFunctionComp(1547) or
      PhpFunctionComp(2777) or
      PhpFunctionComp(2926) or
      PhpFunctionComp(2939) or
      PhpFunctionComp(3185) or
      PhpFunctionComp(3678) or
      PhpFunctionComp(4123) or
      PhpFunctionComp(4251) or
      PhpFunctionComp(4362) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc146: TSynWebTokenKind;
begin
  if  PhpFunctionComp(163) or
      PhpFunctionComp(460) or
      PhpFunctionComp(488) or
      PhpFunctionComp(572) or
      PhpFunctionComp(771) or
      PhpFunctionComp(869) or
      PhpFunctionComp(950) or
      PhpFunctionComp(1218) or
      PhpFunctionComp(1493) or
      PhpFunctionComp(2191) or
      PhpFunctionComp(2231) or
      PhpFunctionComp(2603) or
      PhpFunctionComp(3104) or
      PhpFunctionComp(3221) or
      PhpFunctionComp(4163) or
      PhpFunctionComp(4324) or
      PhpFunctionComp(4337) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc147: TSynWebTokenKind;
begin
  if  PhpFunctionComp(152) or
      PhpFunctionComp(172) or
      PhpFunctionComp(243) or
      PhpFunctionComp(641) or
      PhpFunctionComp(764) or
      PhpFunctionComp(1044) or
      PhpFunctionComp(1065) or
      PhpFunctionComp(1201) or
      PhpFunctionComp(1220) or
      PhpFunctionComp(1245) or
      PhpFunctionComp(1393) or
      PhpFunctionComp(1420) or
      PhpFunctionComp(1484) or
      PhpFunctionComp(1515) or
      PhpFunctionComp(2739) or
      PhpFunctionComp(2971) or
      PhpFunctionComp(2978) or
      PhpFunctionComp(3373) or
      PhpFunctionComp(3418) or
      PhpFunctionComp(3518) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc148: TSynWebTokenKind;
begin
  if  PhpFunctionComp(148) or
      PhpFunctionComp(160) or
      PhpFunctionComp(327) or
      PhpFunctionComp(506) or
      PhpFunctionComp(756) or
      PhpFunctionComp(897) or
      PhpFunctionComp(1007) or
      PhpFunctionComp(1063) or
      PhpFunctionComp(1603) or
      PhpFunctionComp(1682) or
      PhpFunctionComp(1702) or
      PhpFunctionComp(1775) or
      PhpFunctionComp(1825) or
      PhpFunctionComp(3394) or
      PhpFunctionComp(3578) or
      PhpFunctionComp(4147) or
      PhpFunctionComp(4176) or
      PhpFunctionComp(4378) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc149: TSynWebTokenKind;
begin
  if  PhpFunctionComp(290) or
      PhpFunctionComp(367) or
      PhpFunctionComp(617) or
      PhpFunctionComp(723) or
      PhpFunctionComp(1234) or
      PhpFunctionComp(1592) or
      PhpFunctionComp(2716) or
      PhpFunctionComp(2725) or
      PhpFunctionComp(3511) or
      PhpFunctionComp(3774) or
      PhpFunctionComp(4124) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc150: TSynWebTokenKind;
begin
  if  PhpFunctionComp(399) or
      PhpFunctionComp(725) or
      PhpFunctionComp(750) or
      PhpFunctionComp(1208) or
      PhpFunctionComp(1290) or
      PhpFunctionComp(1295) or
      PhpFunctionComp(1372) or
      PhpFunctionComp(1431) or
      PhpFunctionComp(1498) or
      PhpFunctionComp(1617) or
      PhpFunctionComp(1618) or
      PhpFunctionComp(2938) or
      PhpFunctionComp(3216) or
      PhpFunctionComp(3609) or
      PhpFunctionComp(4379) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc151: TSynWebTokenKind;
begin
  if  PhpFunctionComp(423) or
      PhpFunctionComp(483) or
      PhpFunctionComp(843) or
      PhpFunctionComp(1046) or
      PhpFunctionComp(1089) or
      PhpFunctionComp(1356) or
      PhpFunctionComp(1439) or
      PhpFunctionComp(1507) or
      PhpFunctionComp(1544) or
      PhpFunctionComp(1695) or
      PhpFunctionComp(1886) or
      PhpFunctionComp(2013) or
      PhpFunctionComp(2612) or
      PhpFunctionComp(2639) or
      PhpFunctionComp(2840) or
      PhpFunctionComp(3052) or
      PhpFunctionComp(3125) or
      PhpFunctionComp(3383) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc152: TSynWebTokenKind;
begin
  if  PhpFunctionComp(87) or
      PhpFunctionComp(429) or
      PhpFunctionComp(739) or
      PhpFunctionComp(1183) or
      PhpFunctionComp(1242) or
      PhpFunctionComp(1397) or
      PhpFunctionComp(1438) or
      PhpFunctionComp(1709) or
      PhpFunctionComp(2146) or
      PhpFunctionComp(2805) or
      PhpFunctionComp(2980) or
      PhpFunctionComp(3042) or
      PhpFunctionComp(3194) or
      PhpFunctionComp(3581) or
      PhpFunctionComp(3701) or
      PhpFunctionComp(3938) or
      PhpFunctionComp(4231) or
      PhpFunctionComp(4366) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc153: TSynWebTokenKind;
begin
  if  PhpFunctionComp(105) or
      PhpFunctionComp(162) or
      PhpFunctionComp(333) or
      PhpFunctionComp(536) or
      PhpFunctionComp(587) or
      PhpFunctionComp(616) or
      PhpFunctionComp(713) or
      PhpFunctionComp(931) or
      PhpFunctionComp(946) or
      PhpFunctionComp(1225) or
      PhpFunctionComp(1502) or
      PhpFunctionComp(1512) or
      PhpFunctionComp(1533) or
      PhpFunctionComp(1660) or
      PhpFunctionComp(1998) or
      PhpFunctionComp(2970) or
      PhpFunctionComp(3074) or
      PhpFunctionComp(3911) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc154: TSynWebTokenKind;
begin
  if  PhpFunctionComp(158) or
      PhpFunctionComp(222) or
      PhpFunctionComp(381) or
      PhpFunctionComp(646) or
      PhpFunctionComp(830) or
      PhpFunctionComp(1008) or
      PhpFunctionComp(1132) or
      PhpFunctionComp(1394) or
      PhpFunctionComp(1829) or
      PhpFunctionComp(1874) or
      PhpFunctionComp(2766) or
      PhpFunctionComp(3873) or
      PhpFunctionComp(4138) or
      PhpFunctionComp(4164) or
      PhpFunctionComp(4174) or
      PhpFunctionComp(4381) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc155: TSynWebTokenKind;
begin
  if  PhpFunctionComp(394) or
      PhpFunctionComp(463) or
      PhpFunctionComp(549) or
      PhpFunctionComp(747) or
      PhpFunctionComp(1105) or
      PhpFunctionComp(1125) or
      PhpFunctionComp(1167) or
      PhpFunctionComp(1311) or
      PhpFunctionComp(1713) or
      PhpFunctionComp(1875) or
      PhpFunctionComp(1887) or
      PhpFunctionComp(1924) or
      PhpFunctionComp(2090) or
      PhpFunctionComp(2788) or
      PhpFunctionComp(2816) or
      PhpFunctionComp(2984) or
      PhpFunctionComp(3176) or
      PhpFunctionComp(3223) or
      PhpFunctionComp(3395) or
      PhpFunctionComp(3628) or
      PhpFunctionComp(3649) or
      PhpFunctionComp(4155) or
      PhpFunctionComp(4178) or
      PhpFunctionComp(4329) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc156: TSynWebTokenKind;
begin
  if  PhpFunctionComp(103) or
      PhpFunctionComp(156) or
      PhpFunctionComp(234) or
      PhpFunctionComp(332) or
      PhpFunctionComp(395) or
      PhpFunctionComp(730) or
      PhpFunctionComp(1022) or
      PhpFunctionComp(1226) or
      PhpFunctionComp(1517) or
      PhpFunctionComp(1826) or
      PhpFunctionComp(2004) or
      PhpFunctionComp(2149) or
      PhpFunctionComp(2185) or
      PhpFunctionComp(2415) or
      PhpFunctionComp(2696) or
      PhpFunctionComp(2803) or
      PhpFunctionComp(2845) or
      PhpFunctionComp(3736) or
      PhpFunctionComp(4010) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc157: TSynWebTokenKind;
begin
  if  PhpFunctionComp(128) or
      PhpFunctionComp(244) or
      PhpFunctionComp(501) or
      PhpFunctionComp(508) or
      PhpFunctionComp(1124) or
      PhpFunctionComp(1129) or
      PhpFunctionComp(1414) or
      PhpFunctionComp(1769) or
      PhpFunctionComp(2154) or
      PhpFunctionComp(2232) or
      PhpFunctionComp(3146) or
      PhpFunctionComp(3677) or
      PhpFunctionComp(3972) or
      PhpFunctionComp(3982) or
      PhpFunctionComp(4167) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc158: TSynWebTokenKind;
begin
  if  PhpFunctionComp(104) or
      PhpFunctionComp(203) or
      PhpFunctionComp(1194) or
      PhpFunctionComp(1449) or
      PhpFunctionComp(1613) or
      PhpFunctionComp(1759) or
      PhpFunctionComp(2040) or
      PhpFunctionComp(2719) or
      PhpFunctionComp(2813) or
      PhpFunctionComp(3106) or
      PhpFunctionComp(3181) or
      PhpFunctionComp(3412) or
      PhpFunctionComp(3653) or
      PhpFunctionComp(3682) or
      PhpFunctionComp(3698) or
      PhpFunctionComp(4122) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc159: TSynWebTokenKind;
begin
  if  PhpFunctionComp(115) or
      PhpFunctionComp(311) or
      PhpFunctionComp(340) or
      PhpFunctionComp(387) or
      PhpFunctionComp(571) or
      PhpFunctionComp(731) or
      PhpFunctionComp(1243) or
      PhpFunctionComp(1251) or
      PhpFunctionComp(1413) or
      PhpFunctionComp(1426) or
      PhpFunctionComp(1542) or
      PhpFunctionComp(1561) or
      PhpFunctionComp(2003) or
      PhpFunctionComp(2100) or
      PhpFunctionComp(2449) or
      PhpFunctionComp(2767) or
      PhpFunctionComp(2790) or
      PhpFunctionComp(3300) or
      PhpFunctionComp(3429) or
      PhpFunctionComp(3520) or
      PhpFunctionComp(3652) or
      PhpFunctionComp(3760) or
      PhpFunctionComp(3872) or
      PhpFunctionComp(3991) or
      PhpFunctionComp(4268) or
      PhpFunctionComp(4357) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc160: TSynWebTokenKind;
begin
  if  PhpFunctionComp(146) or
      PhpFunctionComp(1162) or
      PhpFunctionComp(1180) or
      PhpFunctionComp(1221) or
      PhpFunctionComp(1264) or
      PhpFunctionComp(1305) or
      PhpFunctionComp(1422) or
      PhpFunctionComp(1714) or
      PhpFunctionComp(1776) or
      PhpFunctionComp(1918) or
      PhpFunctionComp(2051) or
      PhpFunctionComp(2426) or
      PhpFunctionComp(2713) or
      PhpFunctionComp(3131) or
      PhpFunctionComp(3368) or
      PhpFunctionComp(3411) or
      PhpFunctionComp(3461) or
      PhpFunctionComp(3747) or
      PhpFunctionComp(3989) or
      PhpFunctionComp(3990) or
      PhpFunctionComp(4172) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc161: TSynWebTokenKind;
begin
  if  PhpFunctionComp(129) or
      PhpFunctionComp(191) or
      PhpFunctionComp(219) or
      PhpFunctionComp(368) or
      PhpFunctionComp(404) or
      PhpFunctionComp(424) or
      PhpFunctionComp(553) or
      PhpFunctionComp(1040) or
      PhpFunctionComp(1047) or
      PhpFunctionComp(1140) or
      PhpFunctionComp(1375) or
      PhpFunctionComp(1388) or
      PhpFunctionComp(1570) or
      PhpFunctionComp(3297) or
      PhpFunctionComp(3363) or
      PhpFunctionComp(3867) or
      PhpFunctionComp(3994) or
      PhpFunctionComp(3997) or
      PhpFunctionComp(4169) or
      PhpFunctionComp(4372) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc162: TSynWebTokenKind;
begin
  if  PhpFunctionComp(159) or
      PhpFunctionComp(200) or
      PhpFunctionComp(482) or
      PhpFunctionComp(748) or
      PhpFunctionComp(1037) or
      PhpFunctionComp(1312) or
      PhpFunctionComp(1462) or
      PhpFunctionComp(1609) or
      PhpFunctionComp(2246) or
      PhpFunctionComp(2502) or
      PhpFunctionComp(3018) or
      PhpFunctionComp(3105) or
      PhpFunctionComp(3177) or
      PhpFunctionComp(3208) or
      PhpFunctionComp(3209) or
      PhpFunctionComp(3242) or
      PhpFunctionComp(3375) or
      PhpFunctionComp(3651) or
      PhpFunctionComp(3687) or
      PhpFunctionComp(3720) or
      PhpFunctionComp(3926) or
      PhpFunctionComp(4029) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc163: TSynWebTokenKind;
begin
  if  PhpFunctionComp(385) or
      PhpFunctionComp(550) or
      PhpFunctionComp(726) or
      PhpFunctionComp(776) or
      PhpFunctionComp(976) or
      PhpFunctionComp(1039) or
      PhpFunctionComp(1241) or
      PhpFunctionComp(1456) or
      PhpFunctionComp(1523) or
      PhpFunctionComp(1620) or
      PhpFunctionComp(1643) or
      PhpFunctionComp(1691) or
      PhpFunctionComp(2794) or
      PhpFunctionComp(2996) or
      PhpFunctionComp(3087) or
      PhpFunctionComp(3212) or
      PhpFunctionComp(3470) or
      PhpFunctionComp(3471) or
      PhpFunctionComp(3870) or
      PhpFunctionComp(3907) or
      PhpFunctionComp(4354) or
      PhpFunctionComp(4356) or
      PhpFunctionComp(4358) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc164: TSynWebTokenKind;
begin
  if  PhpFunctionComp(154) or
      PhpFunctionComp(161) or
      PhpFunctionComp(192) or
      PhpFunctionComp(944) or
      PhpFunctionComp(1459) or
      PhpFunctionComp(1486) or
      PhpFunctionComp(1560) or
      PhpFunctionComp(1675) or
      PhpFunctionComp(1737) or
      PhpFunctionComp(1847) or
      PhpFunctionComp(1848) or
      PhpFunctionComp(2109) or
      PhpFunctionComp(2425) or
      PhpFunctionComp(2707) or
      PhpFunctionComp(2778) or
      PhpFunctionComp(2983) or
      PhpFunctionComp(3157) or
      PhpFunctionComp(3196) or
      PhpFunctionComp(3279) or
      PhpFunctionComp(3685) or
      PhpFunctionComp(4006) or
      PhpFunctionComp(4060) or
      PhpFunctionComp(4183) or
      PhpFunctionComp(4234) or
      PhpFunctionComp(4334) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc165: TSynWebTokenKind;
begin
  if  PhpFunctionComp(319) or
      PhpFunctionComp(405) or
      PhpFunctionComp(447) or
      PhpFunctionComp(537) or
      PhpFunctionComp(574) or
      PhpFunctionComp(872) or
      PhpFunctionComp(1067) or
      PhpFunctionComp(1494) or
      PhpFunctionComp(1983) or
      PhpFunctionComp(2005) or
      PhpFunctionComp(2167) or
      PhpFunctionComp(2827) or
      PhpFunctionComp(2942) or
      PhpFunctionComp(3935) or
      PhpFunctionComp(3952) or
      PhpFunctionComp(4156) or
      PhpFunctionComp(4162) or
      PhpFunctionComp(4173) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc166: TSynWebTokenKind;
begin
  if  PhpFunctionComp(339) or
      PhpFunctionComp(746) or
      PhpFunctionComp(765) or
      PhpFunctionComp(816) or
      PhpFunctionComp(845) or
      PhpFunctionComp(917) or
      PhpFunctionComp(1009) or
      PhpFunctionComp(1310) or
      PhpFunctionComp(1480) or
      PhpFunctionComp(1496) or
      PhpFunctionComp(1996) or
      PhpFunctionComp(2008) or
      PhpFunctionComp(3008) or
      PhpFunctionComp(3165) or
      PhpFunctionComp(3590) or
      PhpFunctionComp(3932) or
      PhpFunctionComp(4168) or
      PhpFunctionComp(4171) or
      PhpFunctionComp(4181) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc167: TSynWebTokenKind;
begin
  if  PhpKeywordComp(67) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(391) or
        PhpFunctionComp(407) or
        PhpFunctionComp(487) or
        PhpFunctionComp(614) or
        PhpFunctionComp(766) or
        PhpFunctionComp(777) or
        PhpFunctionComp(806) or
        PhpFunctionComp(831) or
        PhpFunctionComp(896) or
        PhpFunctionComp(1118) or
        PhpFunctionComp(1133) or
        PhpFunctionComp(1349) or
        PhpFunctionComp(1546) or
        PhpFunctionComp(1836) or
        PhpFunctionComp(1919) or
        PhpFunctionComp(2168) or
        PhpFunctionComp(2275) or
        PhpFunctionComp(2447) or
        PhpFunctionComp(2828) or
        PhpFunctionComp(3031) or
        PhpFunctionComp(3072) or
        PhpFunctionComp(3109) or
        PhpFunctionComp(3397) or
        PhpFunctionComp(3585) or
        PhpFunctionComp(3655) or
        PhpFunctionComp(3765) or
        PhpFunctionComp(3887) or
        PhpFunctionComp(3996) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc168: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1142) or
      PhpFunctionComp(1390) or
      PhpFunctionComp(1463) or
      PhpFunctionComp(1558) or
      PhpFunctionComp(1666) or
      PhpFunctionComp(2000) or
      PhpFunctionComp(2188) or
      PhpFunctionComp(2230) or
      PhpFunctionComp(2443) or
      PhpFunctionComp(2741) or
      PhpFunctionComp(2836) or
      PhpFunctionComp(2934) or
      PhpFunctionComp(3207) or
      PhpFunctionComp(3214) or
      PhpFunctionComp(3586) or
      PhpFunctionComp(3599) or
      PhpFunctionComp(3794) or
      PhpFunctionComp(3933) or
      PhpFunctionComp(3954) or
      PhpFunctionComp(3976) or
      PhpFunctionComp(4175) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc169: TSynWebTokenKind;
begin
  if  PhpFunctionComp(112) or
      PhpFunctionComp(456) or
      PhpFunctionComp(975) or
      PhpFunctionComp(1178) or
      PhpFunctionComp(1223) or
      PhpFunctionComp(1516) or
      PhpFunctionComp(1557) or
      PhpFunctionComp(1596) or
      PhpFunctionComp(1644) or
      PhpFunctionComp(1706) or
      PhpFunctionComp(1972) or
      PhpFunctionComp(2211) or
      PhpFunctionComp(2289) or
      PhpFunctionComp(3755) or
      PhpFunctionComp(4067) or
      PhpFunctionComp(4270) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc170: TSynWebTokenKind;
begin
  if  PhpKeywordComp(58) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(138) or
        PhpFunctionComp(269) or
        PhpFunctionComp(323) or
        PhpFunctionComp(371) or
        PhpFunctionComp(942) or
        PhpFunctionComp(1446) or
        PhpFunctionComp(1589) or
        PhpFunctionComp(2466) or
        PhpFunctionComp(2579) or
        PhpFunctionComp(2747) or
        PhpFunctionComp(3040) or
        PhpFunctionComp(3053) or
        PhpFunctionComp(3101) or
        PhpFunctionComp(3257) or
        PhpFunctionComp(3476) or
        PhpFunctionComp(3612) or
        PhpFunctionComp(3869) or
        PhpFunctionComp(3876) or
        PhpFunctionComp(4132) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc171: TSynWebTokenKind;
begin
  if  PhpFunctionComp(110) or
      PhpFunctionComp(280) or
      PhpFunctionComp(519) or
      PhpFunctionComp(538) or
      PhpFunctionComp(1391) or
      PhpFunctionComp(1411) or
      PhpFunctionComp(1508) or
      PhpFunctionComp(1530) or
      PhpFunctionComp(1534) or
      PhpFunctionComp(2189) or
      PhpFunctionComp(2192) or
      PhpFunctionComp(2314) or
      PhpFunctionComp(2779) or
      PhpFunctionComp(2923) or
      PhpFunctionComp(3358) or
      PhpFunctionComp(3396) or
      PhpFunctionComp(3875) or
      PhpFunctionComp(3973) or
      PhpFunctionComp(4177) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc172: TSynWebTokenKind;
begin
  if  PhpFunctionComp(446) or
      PhpFunctionComp(554) or
      PhpFunctionComp(567) or
      PhpFunctionComp(619) or
      PhpFunctionComp(688) or
      PhpFunctionComp(728) or
      PhpFunctionComp(1212) or
      PhpFunctionComp(1514) or
      PhpFunctionComp(2147) or
      PhpFunctionComp(2155) or
      PhpFunctionComp(2927) or
      PhpFunctionComp(3083) or
      PhpFunctionComp(3183) or
      PhpFunctionComp(3264) or
      PhpFunctionComp(3346) or
      PhpFunctionComp(3382) or
      PhpFunctionComp(3500) or
      PhpFunctionComp(3804) or
      PhpFunctionComp(4009) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc173: TSynWebTokenKind;
begin
  if  PhpFunctionComp(393) or
      PhpFunctionComp(681) or
      PhpFunctionComp(832) or
      PhpFunctionComp(1213) or
      PhpFunctionComp(1244) or
      PhpFunctionComp(1407) or
      PhpFunctionComp(1435) or
      PhpFunctionComp(1575) or
      PhpFunctionComp(1818) or
      PhpFunctionComp(1831) or
      PhpFunctionComp(1923) or
      PhpFunctionComp(2011) or
      PhpFunctionComp(2611) or
      PhpFunctionComp(2708) or
      PhpFunctionComp(2924) or
      PhpFunctionComp(3127) or
      PhpFunctionComp(3141) or
      PhpFunctionComp(3169) or
      PhpFunctionComp(3197) or
      PhpFunctionComp(3605) or
      PhpFunctionComp(3714) or
      PhpFunctionComp(3729) or
      PhpFunctionComp(3784) or
      PhpFunctionComp(3925) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc174: TSynWebTokenKind;
begin
  if  PhpFunctionComp(193) or
      PhpFunctionComp(248) or
      PhpFunctionComp(341) or
      PhpFunctionComp(552) or
      PhpFunctionComp(1002) or
      PhpFunctionComp(1147) or
      PhpFunctionComp(1605) or
      PhpFunctionComp(1744) or
      PhpFunctionComp(2169) or
      PhpFunctionComp(2326) or
      PhpFunctionComp(2730) or
      PhpFunctionComp(2820) or
      PhpFunctionComp(2831) or
      PhpFunctionComp(2906) or
      PhpFunctionComp(3193) or
      PhpFunctionComp(3291) or
      PhpFunctionComp(3372) or
      PhpFunctionComp(3524) or
      PhpFunctionComp(3700) or
      PhpFunctionComp(3854) or
      PhpFunctionComp(3978) or
      PhpFunctionComp(4152) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc175: TSynWebTokenKind;
begin
  if  PhpFunctionComp(717) or
      PhpFunctionComp(1156) or
      PhpFunctionComp(1304) or
      PhpFunctionComp(1472) or
      PhpFunctionComp(2001) or
      PhpFunctionComp(2432) or
      PhpFunctionComp(2480) or
      PhpFunctionComp(3351) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc176: TSynWebTokenKind;
begin
  if  PhpFunctionComp(250) or
      PhpFunctionComp(252) or
      PhpFunctionComp(383) or
      PhpFunctionComp(694) or
      PhpFunctionComp(718) or
      PhpFunctionComp(749) or
      PhpFunctionComp(961) or
      PhpFunctionComp(1018) or
      PhpFunctionComp(1111) or
      PhpFunctionComp(1148) or
      PhpFunctionComp(1175) or
      PhpFunctionComp(1303) or
      PhpFunctionComp(1355) or
      PhpFunctionComp(1377) or
      PhpFunctionComp(1452) or
      PhpFunctionComp(1473) or
      PhpFunctionComp(1604) or
      PhpFunctionComp(2126) or
      PhpFunctionComp(2348) or
      PhpFunctionComp(2351) or
      PhpFunctionComp(2431) or
      PhpFunctionComp(2877) or
      PhpFunctionComp(3190) or
      PhpFunctionComp(3361) or
      PhpFunctionComp(3398) or
      PhpFunctionComp(3728) or
      PhpFunctionComp(4158) or
      PhpFunctionComp(4179) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc177: TSynWebTokenKind;
begin
  if  PhpFunctionComp(430) or
      PhpFunctionComp(512) or
      PhpFunctionComp(543) or
      PhpFunctionComp(1281) or
      PhpFunctionComp(1301) or
      PhpFunctionComp(1376) or
      PhpFunctionComp(2007) or
      PhpFunctionComp(2226) or
      PhpFunctionComp(2239) or
      PhpFunctionComp(2749) or
      PhpFunctionComp(2793) or
      PhpFunctionComp(2811) or
      PhpFunctionComp(3188) or
      PhpFunctionComp(3262) or
      PhpFunctionComp(3281) or
      PhpFunctionComp(3912) or
      PhpFunctionComp(4000) or
      PhpFunctionComp(4150) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc178: TSynWebTokenKind;
begin
  if  PhpFunctionComp(437) or
      PhpFunctionComp(470) or
      PhpFunctionComp(578) or
      PhpFunctionComp(1160) or
      PhpFunctionComp(1163) or
      PhpFunctionComp(1300) or
      PhpFunctionComp(1380) or
      PhpFunctionComp(1974) or
      PhpFunctionComp(2360) or
      PhpFunctionComp(2516) or
      PhpFunctionComp(2668) or
      PhpFunctionComp(2789) or
      PhpFunctionComp(3038) or
      PhpFunctionComp(3189) or
      PhpFunctionComp(3203) or
      PhpFunctionComp(4080) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc179: TSynWebTokenKind;
begin
  if  PhpFunctionComp(396) or
      PhpFunctionComp(401) or
      PhpFunctionComp(539) or
      PhpFunctionComp(562) or
      PhpFunctionComp(802) or
      PhpFunctionComp(846) or
      PhpFunctionComp(1209) or
      PhpFunctionComp(1373) or
      PhpFunctionComp(1474) or
      PhpFunctionComp(1607) or
      PhpFunctionComp(1624) or
      PhpFunctionComp(1837) or
      PhpFunctionComp(2166) or
      PhpFunctionComp(2455) or
      PhpFunctionComp(2557) or
      PhpFunctionComp(2723) or
      PhpFunctionComp(3081) or
      PhpFunctionComp(3151) or
      PhpFunctionComp(3393) or
      PhpFunctionComp(3900) or
      PhpFunctionComp(4184) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc180: TSynWebTokenKind;
begin
  if  PhpKeywordComp(1) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(171) or
        PhpFunctionComp(251) or
        PhpFunctionComp(398) or
        PhpFunctionComp(629) or
        PhpFunctionComp(1038) or
        PhpFunctionComp(1370) or
        PhpFunctionComp(1653) or
        PhpFunctionComp(1814) or
        PhpFunctionComp(2670) or
        PhpFunctionComp(2717) or
        PhpFunctionComp(2799) or
        PhpFunctionComp(3130) or
        PhpFunctionComp(3280) or
        PhpFunctionComp(3449) or
        PhpFunctionComp(3598) or
        PhpFunctionComp(3757) or
        PhpFunctionComp(4232) or
        PhpFunctionComp(4236) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc181: TSynWebTokenKind;
begin
  if  PhpFunctionComp(540) or
      PhpFunctionComp(556) or
      PhpFunctionComp(690) or
      PhpFunctionComp(952) or
      PhpFunctionComp(1158) or
      PhpFunctionComp(1174) or
      PhpFunctionComp(1497) or
      PhpFunctionComp(2019) or
      PhpFunctionComp(2242) or
      PhpFunctionComp(2606) or
      PhpFunctionComp(2931) or
      PhpFunctionComp(2997) or
      PhpFunctionComp(3166) or
      PhpFunctionComp(3175) or
      PhpFunctionComp(3271) or
      PhpFunctionComp(3380) or
      PhpFunctionComp(3543) or
      PhpFunctionComp(4117) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc182: TSynWebTokenKind;
begin
  if  PhpFunctionComp(400) or
      PhpFunctionComp(687) or
      PhpFunctionComp(714) or
      PhpFunctionComp(1205) or
      PhpFunctionComp(1470) or
      PhpFunctionComp(1621) or
      PhpFunctionComp(2114) or
      PhpFunctionComp(2123) or
      PhpFunctionComp(2248) or
      PhpFunctionComp(2453) or
      PhpFunctionComp(2829) or
      PhpFunctionComp(2919) or
      PhpFunctionComp(3077) or
      PhpFunctionComp(3261) or
      PhpFunctionComp(3415) or
      PhpFunctionComp(3441) or
      PhpFunctionComp(3666) or
      PhpFunctionComp(3752) or
      PhpFunctionComp(4030) or
      PhpFunctionComp(4072) or
      PhpFunctionComp(4335) or
      PhpFunctionComp(4351) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc183: TSynWebTokenKind;
begin
  if  PhpFunctionComp(397) or
      PhpFunctionComp(542) or
      PhpFunctionComp(801) or
      PhpFunctionComp(834) or
      PhpFunctionComp(1066) or
      PhpFunctionComp(1441) or
      PhpFunctionComp(1622) or
      PhpFunctionComp(1625) or
      PhpFunctionComp(1640) or
      PhpFunctionComp(2122) or
      PhpFunctionComp(2176) or
      PhpFunctionComp(2295) or
      PhpFunctionComp(2714) or
      PhpFunctionComp(3016) or
      PhpFunctionComp(3172) or
      PhpFunctionComp(3213) or
      PhpFunctionComp(3607) or
      PhpFunctionComp(3656) or
      PhpFunctionComp(3657) or
      PhpFunctionComp(3975) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc184: TSynWebTokenKind;
begin
  if  PhpFunctionComp(254) or
      PhpFunctionComp(272) or
      PhpFunctionComp(336) or
      PhpFunctionComp(547) or
      PhpFunctionComp(1878) or
      PhpFunctionComp(1973) or
      PhpFunctionComp(2184) or
      PhpFunctionComp(2349) or
      PhpFunctionComp(2450) or
      PhpFunctionComp(2465) or
      PhpFunctionComp(2985) or
      PhpFunctionComp(3006) or
      PhpFunctionComp(3041) or
      PhpFunctionComp(3276) or
      PhpFunctionComp(3284) or
      PhpFunctionComp(3686) or
      PhpFunctionComp(3894) or
      PhpFunctionComp(4008) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc185: TSynWebTokenKind;
begin
  if  PhpFunctionComp(473) or
      PhpFunctionComp(564) or
      PhpFunctionComp(710) or
      PhpFunctionComp(849) or
      PhpFunctionComp(1215) or
      PhpFunctionComp(1363) or
      PhpFunctionComp(1436) or
      PhpFunctionComp(1485) or
      PhpFunctionComp(2844) or
      PhpFunctionComp(2952) or
      PhpFunctionComp(2999) or
      PhpFunctionComp(3002) or
      PhpFunctionComp(3078) or
      PhpFunctionComp(3202) or
      PhpFunctionComp(3560) or
      PhpFunctionComp(3711) or
      PhpFunctionComp(3756) or
      PhpFunctionComp(4094) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc186: TSynWebTokenKind;
begin
  if  PhpFunctionComp(417) or
      PhpFunctionComp(545) or
      PhpFunctionComp(1138) or
      PhpFunctionComp(1450) or
      PhpFunctionComp(1458) or
      PhpFunctionComp(1483) or
      PhpFunctionComp(1504) or
      PhpFunctionComp(2006) or
      PhpFunctionComp(2308) or
      PhpFunctionComp(2787) or
      PhpFunctionComp(2907) or
      PhpFunctionComp(3277) or
      PhpFunctionComp(3289) or
      PhpFunctionComp(3451) or
      PhpFunctionComp(3546) or
      PhpFunctionComp(3773) or
      PhpFunctionComp(3812) or
      PhpFunctionComp(4336) or
      PhpFunctionComp(4364) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc187: TSynWebTokenKind;
begin
  if  PhpFunctionComp(169) or
      PhpFunctionComp(270) or
      PhpFunctionComp(433) or
      PhpFunctionComp(452) or
      PhpFunctionComp(551) or
      PhpFunctionComp(884) or
      PhpFunctionComp(894) or
      PhpFunctionComp(1085) or
      PhpFunctionComp(1090) or
      PhpFunctionComp(1369) or
      PhpFunctionComp(1389) or
      PhpFunctionComp(1423) or
      PhpFunctionComp(1444) or
      PhpFunctionComp(1563) or
      PhpFunctionComp(1678) or
      PhpFunctionComp(1786) or
      PhpFunctionComp(1956) or
      PhpFunctionComp(2890) or
      PhpFunctionComp(3070) or
      PhpFunctionComp(3328) or
      PhpFunctionComp(3647) or
      PhpFunctionComp(3659) or
      PhpFunctionComp(3702) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc188: TSynWebTokenKind;
begin
  if  PhpKeywordComp(3) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(720) or
        PhpFunctionComp(769) or
        PhpFunctionComp(792) or
        PhpFunctionComp(805) or
        PhpFunctionComp(1272) or
        PhpFunctionComp(1658) or
        PhpFunctionComp(1928) or
        PhpFunctionComp(2183) or
        PhpFunctionComp(2467) or
        PhpFunctionComp(2527) or
        PhpFunctionComp(3026) or
        PhpFunctionComp(3096) or
        PhpFunctionComp(3269) or
        PhpFunctionComp(3437) or
        PhpFunctionComp(3670) or
        PhpFunctionComp(3930) or
        PhpFunctionComp(4128) or
        PhpFunctionComp(4386) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc189: TSynWebTokenKind;
begin
  if  PhpFunctionComp(561) or
      PhpFunctionComp(775) or
      PhpFunctionComp(803) or
      PhpFunctionComp(817) or
      PhpFunctionComp(945) or
      PhpFunctionComp(1284) or
      PhpFunctionComp(1296) or
      PhpFunctionComp(1357) or
      PhpFunctionComp(1598) or
      PhpFunctionComp(1811) or
      PhpFunctionComp(1822) or
      PhpFunctionComp(1916) or
      PhpFunctionComp(2470) or
      PhpFunctionComp(2721) or
      PhpFunctionComp(2722) or
      PhpFunctionComp(2756) or
      PhpFunctionComp(3015) or
      PhpFunctionComp(3179) or
      PhpFunctionComp(3282) or
      PhpFunctionComp(3696) or
      PhpFunctionComp(3865) or
      PhpFunctionComp(3974) or
      PhpFunctionComp(3981) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc190: TSynWebTokenKind;
begin
  if  PhpFunctionComp(804) or
      PhpFunctionComp(1230) or
      PhpFunctionComp(1402) or
      PhpFunctionComp(1960) or
      PhpFunctionComp(2265) or
      PhpFunctionComp(3058) or
      PhpFunctionComp(3259) or
      PhpFunctionComp(3296) or
      PhpFunctionComp(3347) or
      PhpFunctionComp(3442) or
      PhpFunctionComp(3582) or
      PhpFunctionComp(3998) or
      PhpFunctionComp(4091) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc191: TSynWebTokenKind;
begin
  if  PhpFunctionComp(389) or
      PhpFunctionComp(613) or
      PhpFunctionComp(821) or
      PhpFunctionComp(1216) or
      PhpFunctionComp(1352) or
      PhpFunctionComp(1415) or
      PhpFunctionComp(2129) or
      PhpFunctionComp(2193) or
      PhpFunctionComp(2484) or
      PhpFunctionComp(2486) or
      PhpFunctionComp(2505) or
      PhpFunctionComp(2576) or
      PhpFunctionComp(2808) or
      PhpFunctionComp(3039) or
      PhpFunctionComp(3057) or
      PhpFunctionComp(3148) or
      PhpFunctionComp(3263) or
      PhpFunctionComp(3306) or
      PhpFunctionComp(3377) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc192: TSynWebTokenKind;
begin
  if  PhpFunctionComp(88) or
      PhpFunctionComp(157) or
      PhpFunctionComp(555) or
      PhpFunctionComp(996) or
      PhpFunctionComp(1023) or
      PhpFunctionComp(1381) or
      PhpFunctionComp(1487) or
      PhpFunctionComp(2266) or
      PhpFunctionComp(2383) or
      PhpFunctionComp(2774) or
      PhpFunctionComp(3004) or
      PhpFunctionComp(3112) or
      PhpFunctionComp(3168) or
      PhpFunctionComp(3246) or
      PhpFunctionComp(3258) or
      PhpFunctionComp(3759) or
      PhpFunctionComp(4373) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc193: TSynWebTokenKind;
begin
  if  PhpFunctionComp(419) or
      PhpFunctionComp(471) or
      PhpFunctionComp(735) or
      PhpFunctionComp(829) or
      PhpFunctionComp(1056) or
      PhpFunctionComp(1077) or
      PhpFunctionComp(1084) or
      PhpFunctionComp(1172) or
      PhpFunctionComp(1211) or
      PhpFunctionComp(1368) or
      PhpFunctionComp(1379) or
      PhpFunctionComp(1982) or
      PhpFunctionComp(2071) or
      PhpFunctionComp(2148) or
      PhpFunctionComp(2186) or
      PhpFunctionComp(2249) or
      PhpFunctionComp(2294) or
      PhpFunctionComp(3066) or
      PhpFunctionComp(3305) or
      PhpFunctionComp(3692) or
      PhpFunctionComp(4020) or
      PhpFunctionComp(4126) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc194: TSynWebTokenKind;
begin
  if  PhpFunctionComp(721) or
      PhpFunctionComp(1359) or
      PhpFunctionComp(1897) or
      PhpFunctionComp(1932) or
      PhpFunctionComp(2132) or
      PhpFunctionComp(2153) or
      PhpFunctionComp(2848) or
      PhpFunctionComp(2935) or
      PhpFunctionComp(2995) or
      PhpFunctionComp(3139) or
      PhpFunctionComp(3161) or
      PhpFunctionComp(3220) or
      PhpFunctionComp(3341) or
      PhpFunctionComp(3348) or
      PhpFunctionComp(3378) or
      PhpFunctionComp(3799) or
      PhpFunctionComp(3983) or
      PhpFunctionComp(3993) or
      PhpFunctionComp(4048) or
      PhpFunctionComp(4055) or
      PhpFunctionComp(4101) or
      PhpFunctionComp(4180) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc195: TSynWebTokenKind;
begin
  if  PhpFunctionComp(324) or
      PhpFunctionComp(448) or
      PhpFunctionComp(623) or
      PhpFunctionComp(693) or
      PhpFunctionComp(853) or
      PhpFunctionComp(943) or
      PhpFunctionComp(962) or
      PhpFunctionComp(1189) or
      PhpFunctionComp(1210) or
      PhpFunctionComp(1293) or
      PhpFunctionComp(1365) or
      PhpFunctionComp(1532) or
      PhpFunctionComp(1639) or
      PhpFunctionComp(1830) or
      PhpFunctionComp(1999) or
      PhpFunctionComp(2233) or
      PhpFunctionComp(2692) or
      PhpFunctionComp(2825) or
      PhpFunctionComp(2833) or
      PhpFunctionComp(3034) or
      PhpFunctionComp(3110) or
      PhpFunctionComp(3163) or
      PhpFunctionComp(3445) or
      PhpFunctionComp(3528) or
      PhpFunctionComp(3587) or
      PhpFunctionComp(4026) or
      PhpFunctionComp(4107) or
      PhpFunctionComp(4338) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc196: TSynWebTokenKind;
begin
  if  PhpFunctionComp(466) or
      PhpFunctionComp(486) or
      PhpFunctionComp(716) or
      PhpFunctionComp(770) or
      PhpFunctionComp(1091) or
      PhpFunctionComp(1179) or
      PhpFunctionComp(1292) or
      PhpFunctionComp(1890) or
      PhpFunctionComp(2297) or
      PhpFunctionComp(2504) or
      PhpFunctionComp(2750) or
      PhpFunctionComp(2795) or
      PhpFunctionComp(2826) or
      PhpFunctionComp(3029) or
      PhpFunctionComp(3068) or
      PhpFunctionComp(3160) or
      PhpFunctionComp(3286) or
      PhpFunctionComp(3960) or
      PhpFunctionComp(3977) or
      PhpFunctionComp(4104) or
      PhpFunctionComp(4116) or
      PhpFunctionComp(4363) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc197: TSynWebTokenKind;
begin
  if  PhpFunctionComp(153) or
      PhpFunctionComp(170) or
      PhpFunctionComp(431) or
      PhpFunctionComp(785) or
      PhpFunctionComp(1053) or
      PhpFunctionComp(1235) or
      PhpFunctionComp(1299) or
      PhpFunctionComp(1412) or
      PhpFunctionComp(1506) or
      PhpFunctionComp(1760) or
      PhpFunctionComp(1842) or
      PhpFunctionComp(2240) or
      PhpFunctionComp(2250) or
      PhpFunctionComp(2448) or
      PhpFunctionComp(2677) or
      PhpFunctionComp(2969) or
      PhpFunctionComp(3114) or
      PhpFunctionComp(3265) or
      PhpFunctionComp(3272) or
      PhpFunctionComp(3326) or
      PhpFunctionComp(3389) or
      PhpFunctionComp(3533) or
      PhpFunctionComp(3544) or
      PhpFunctionComp(3730) or
      PhpFunctionComp(3979) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc198: TSynWebTokenKind;
begin
  if  PhpFunctionComp(285) or
      PhpFunctionComp(372) or
      PhpFunctionComp(504) or
      PhpFunctionComp(520) or
      PhpFunctionComp(715) or
      PhpFunctionComp(818) or
      PhpFunctionComp(1812) or
      PhpFunctionComp(1846) or
      PhpFunctionComp(2053) or
      PhpFunctionComp(2098) or
      PhpFunctionComp(2107) or
      PhpFunctionComp(2229) or
      PhpFunctionComp(2428) or
      PhpFunctionComp(2477) or
      PhpFunctionComp(2556) or
      PhpFunctionComp(2563) or
      PhpFunctionComp(2744) or
      PhpFunctionComp(2824) or
      PhpFunctionComp(2994) or
      PhpFunctionComp(3007) or
      PhpFunctionComp(3287) or
      PhpFunctionComp(3357) or
      PhpFunctionComp(3795) or
      PhpFunctionComp(4047) or
      PhpFunctionComp(4212) or
      PhpFunctionComp(4233) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc199: TSynWebTokenKind;
begin
  if  PhpFunctionComp(356) or
      PhpFunctionComp(786) or
      PhpFunctionComp(1275) or
      PhpFunctionComp(1461) or
      PhpFunctionComp(1535) or
      PhpFunctionComp(1638) or
      PhpFunctionComp(1777) or
      PhpFunctionComp(1867) or
      PhpFunctionComp(2244) or
      PhpFunctionComp(2267) or
      PhpFunctionComp(2498) or
      PhpFunctionComp(2500) or
      PhpFunctionComp(2712) or
      PhpFunctionComp(2745) or
      PhpFunctionComp(3153) or
      PhpFunctionComp(3170) or
      PhpFunctionComp(3199) or
      PhpFunctionComp(3369) or
      PhpFunctionComp(3984) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc200: TSynWebTokenKind;
begin
  if  PhpFunctionComp(182) or
      PhpFunctionComp(375) or
      PhpFunctionComp(517) or
      PhpFunctionComp(740) or
      PhpFunctionComp(808) or
      PhpFunctionComp(1081) or
      PhpFunctionComp(1165) or
      PhpFunctionComp(1443) or
      PhpFunctionComp(1540) or
      PhpFunctionComp(1585) or
      PhpFunctionComp(1659) or
      PhpFunctionComp(2170) or
      PhpFunctionComp(2196) or
      PhpFunctionComp(2642) or
      PhpFunctionComp(2743) or
      PhpFunctionComp(2832) or
      PhpFunctionComp(2850) or
      PhpFunctionComp(3210) or
      PhpFunctionComp(3285) or
      PhpFunctionComp(3588) or
      PhpFunctionComp(3595) or
      PhpFunctionComp(3980) or
      PhpFunctionComp(4015) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc201: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1073) or
      PhpFunctionComp(2150) or
      PhpFunctionComp(2181) or
      PhpFunctionComp(2838) or
      PhpFunctionComp(3805) or
      PhpFunctionComp(3821) or
      PhpFunctionComp(3965) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc202: TSynWebTokenKind;
begin
  if  PhpKeywordComp(0) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(351) or
        PhpFunctionComp(445) or
        PhpFunctionComp(451) or
        PhpFunctionComp(586) or
        PhpFunctionComp(1819) or
        PhpFunctionComp(2093) or
        PhpFunctionComp(2115) or
        PhpFunctionComp(2119) or
        PhpFunctionComp(2161) or
        PhpFunctionComp(2322) or
        PhpFunctionComp(2419) or
        PhpFunctionComp(2566) or
        PhpFunctionComp(2948) or
        PhpFunctionComp(3159) or
        PhpFunctionComp(3371) or
        PhpFunctionComp(4113) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc203: TSynWebTokenKind;
begin
  if  PhpFunctionComp(133) or
      PhpFunctionComp(697) or
      PhpFunctionComp(815) or
      PhpFunctionComp(1079) or
      PhpFunctionComp(1149) or
      PhpFunctionComp(1240) or
      PhpFunctionComp(1291) or
      PhpFunctionComp(1503) or
      PhpFunctionComp(1556) or
      PhpFunctionComp(1581) or
      PhpFunctionComp(1623) or
      PhpFunctionComp(1898) or
      PhpFunctionComp(2220) or
      PhpFunctionComp(2445) or
      PhpFunctionComp(2476) or
      PhpFunctionComp(2492) or
      PhpFunctionComp(2751) or
      PhpFunctionComp(2823) or
      PhpFunctionComp(2835) or
      PhpFunctionComp(3132) or
      PhpFunctionComp(3152) or
      PhpFunctionComp(3283) or
      PhpFunctionComp(4049) or
      PhpFunctionComp(4239) or
      PhpFunctionComp(4352) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc204: TSynWebTokenKind;
begin
  if  PhpFunctionComp(628) or
      PhpFunctionComp(1488) or
      PhpFunctionComp(1526) or
      PhpFunctionComp(1554) or
      PhpFunctionComp(1736) or
      PhpFunctionComp(1827) or
      PhpFunctionComp(2018) or
      PhpFunctionComp(2162) or
      PhpFunctionComp(2264) or
      PhpFunctionComp(2427) or
      PhpFunctionComp(2762) or
      PhpFunctionComp(3032) or
      PhpFunctionComp(3245) or
      PhpFunctionComp(3343) or
      PhpFunctionComp(3399) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc205: TSynWebTokenKind;
begin
  if  PhpFunctionComp(666) or
      PhpFunctionComp(844) or
      PhpFunctionComp(1161) or
      PhpFunctionComp(1164) or
      PhpFunctionComp(1350) or
      PhpFunctionComp(1442) or
      PhpFunctionComp(1652) or
      PhpFunctionComp(1957) or
      PhpFunctionComp(1992) or
      PhpFunctionComp(2187) or
      PhpFunctionComp(2309) or
      PhpFunctionComp(2495) or
      PhpFunctionComp(2503) or
      PhpFunctionComp(2698) or
      PhpFunctionComp(2817) or
      PhpFunctionComp(3005) or
      PhpFunctionComp(3076) or
      PhpFunctionComp(3100) or
      PhpFunctionComp(3198) or
      PhpFunctionComp(3266) or
      PhpFunctionComp(3708) or
      PhpFunctionComp(3758) or
      PhpFunctionComp(3874) or
      PhpFunctionComp(4213) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc206: TSynWebTokenKind;
begin
  if  PhpFunctionComp(467) or
      PhpFunctionComp(630) or
      PhpFunctionComp(745) or
      PhpFunctionComp(787) or
      PhpFunctionComp(788) or
      PhpFunctionComp(814) or
      PhpFunctionComp(1495) or
      PhpFunctionComp(1763) or
      PhpFunctionComp(1965) or
      PhpFunctionComp(1968) or
      PhpFunctionComp(2310) or
      PhpFunctionComp(2323) or
      PhpFunctionComp(2367) or
      PhpFunctionComp(2452) or
      PhpFunctionComp(2657) or
      PhpFunctionComp(2700) or
      PhpFunctionComp(2742) or
      PhpFunctionComp(3985) or
      PhpFunctionComp(4001) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc207: TSynWebTokenKind;
begin
  if  PhpFunctionComp(443) or
      PhpFunctionComp(468) or
      PhpFunctionComp(558) or
      PhpFunctionComp(559) or
      PhpFunctionComp(919) or
      PhpFunctionComp(1228) or
      PhpFunctionComp(1273) or
      PhpFunctionComp(1325) or
      PhpFunctionComp(1580) or
      PhpFunctionComp(2219) or
      PhpFunctionComp(2507) or
      PhpFunctionComp(2565) or
      PhpFunctionComp(2567) or
      PhpFunctionComp(2987) or
      PhpFunctionComp(3345) or
      PhpFunctionComp(3446) or
      PhpFunctionComp(3450) or
      PhpFunctionComp(3589) or
      PhpFunctionComp(3737) or
      PhpFunctionComp(3815) or
      PhpFunctionComp(3958) or
      PhpFunctionComp(4003) or
      PhpFunctionComp(4339) or
      PhpFunctionComp(4349) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc208: TSynWebTokenKind;
begin
  if  PhpFunctionComp(313) or
      PhpFunctionComp(465) or
      PhpFunctionComp(568) or
      PhpFunctionComp(780) or
      PhpFunctionComp(800) or
      PhpFunctionComp(959) or
      PhpFunctionComp(1082) or
      PhpFunctionComp(1187) or
      PhpFunctionComp(1229) or
      PhpFunctionComp(1307) or
      PhpFunctionComp(1513) or
      PhpFunctionComp(1567) or
      PhpFunctionComp(1591) or
      PhpFunctionComp(1823) or
      PhpFunctionComp(2281) or
      PhpFunctionComp(2424) or
      PhpFunctionComp(2628) or
      PhpFunctionComp(2920) or
      PhpFunctionComp(2930) or
      PhpFunctionComp(3049) or
      PhpFunctionComp(3147) or
      PhpFunctionComp(3631) or
      PhpFunctionComp(4214) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc209: TSynWebTokenKind;
begin
  if  PhpFunctionComp(237) or
      PhpFunctionComp(315) or
      PhpFunctionComp(432) or
      PhpFunctionComp(475) or
      PhpFunctionComp(573) or
      PhpFunctionComp(1121) or
      PhpFunctionComp(1195) or
      PhpFunctionComp(1227) or
      PhpFunctionComp(1610) or
      PhpFunctionComp(2290) or
      PhpFunctionComp(2514) or
      PhpFunctionComp(2678) or
      PhpFunctionComp(2998) or
      PhpFunctionComp(3268) or
      PhpFunctionComp(3270) or
      PhpFunctionComp(3444) or
      PhpFunctionComp(3868) or
      PhpFunctionComp(3959) or
      PhpFunctionComp(4018) or
      PhpFunctionComp(4082) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc210: TSynWebTokenKind;
begin
  if  PhpFunctionComp(566) or
      PhpFunctionComp(577) or
      PhpFunctionComp(733) or
      PhpFunctionComp(1315) or
      PhpFunctionComp(1453) or
      PhpFunctionComp(1475) or
      PhpFunctionComp(1568) or
      PhpFunctionComp(1657) or
      PhpFunctionComp(1820) or
      PhpFunctionComp(1834) or
      PhpFunctionComp(2127) or
      PhpFunctionComp(2459) or
      PhpFunctionComp(2478) or
      PhpFunctionComp(2806) or
      PhpFunctionComp(3088) or
      PhpFunctionComp(3134) or
      PhpFunctionComp(3604) or
      PhpFunctionComp(3699) or
      PhpFunctionComp(4069) or
      PhpFunctionComp(4185) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc211: TSynWebTokenKind;
begin
  if  PhpFunctionComp(180) or
      PhpFunctionComp(474) or
      PhpFunctionComp(492) or
      PhpFunctionComp(569) or
      PhpFunctionComp(579) or
      PhpFunctionComp(643) or
      PhpFunctionComp(734) or
      PhpFunctionComp(784) or
      PhpFunctionComp(860) or
      PhpFunctionComp(963) or
      PhpFunctionComp(1086) or
      PhpFunctionComp(1258) or
      PhpFunctionComp(1297) or
      PhpFunctionComp(1314) or
      PhpFunctionComp(1870) or
      PhpFunctionComp(2042) or
      PhpFunctionComp(2136) or
      PhpFunctionComp(2163) or
      PhpFunctionComp(2164) or
      PhpFunctionComp(2361) or
      PhpFunctionComp(2632) or
      PhpFunctionComp(2988) or
      PhpFunctionComp(3111) or
      PhpFunctionComp(4031) or
      PhpFunctionComp(4139) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc212: TSynWebTokenKind;
begin
  if  PhpFunctionComp(305) or
      PhpFunctionComp(480) or
      PhpFunctionComp(565) or
      PhpFunctionComp(732) or
      PhpFunctionComp(1130) or
      PhpFunctionComp(1256) or
      PhpFunctionComp(1362) or
      PhpFunctionComp(1574) or
      PhpFunctionComp(1712) or
      PhpFunctionComp(1933) or
      PhpFunctionComp(2023) or
      PhpFunctionComp(2221) or
      PhpFunctionComp(2697) or
      PhpFunctionComp(2709) or
      PhpFunctionComp(3059) or
      PhpFunctionComp(3335) or
      PhpFunctionComp(3648) or
      PhpFunctionComp(3721) or
      PhpFunctionComp(3992) or
      PhpFunctionComp(4023) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc213: TSynWebTokenKind;
begin
  if  PhpKeywordComp(4) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(140) or
        PhpFunctionComp(363) or
        PhpFunctionComp(767) or
        PhpFunctionComp(892) or
        PhpFunctionComp(903) or
        PhpFunctionComp(981) or
        PhpFunctionComp(987) or
        PhpFunctionComp(1139) or
        PhpFunctionComp(1192) or
        PhpFunctionComp(1238) or
        PhpFunctionComp(1255) or
        PhpFunctionComp(1268) or
        PhpFunctionComp(1708) or
        PhpFunctionComp(1963) or
        PhpFunctionComp(2017) or
        PhpFunctionComp(2157) or
        PhpFunctionComp(2177) or
        PhpFunctionComp(2288) or
        PhpFunctionComp(2417) or
        PhpFunctionComp(2444) or
        PhpFunctionComp(2461) or
        PhpFunctionComp(2491) or
        PhpFunctionComp(2776) or
        PhpFunctionComp(2780) or
        PhpFunctionComp(3750) or
        PhpFunctionComp(4027) or
        PhpFunctionComp(4385) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc214: TSynWebTokenKind;
begin
  if  PhpFunctionComp(255) or
      PhpFunctionComp(300) or
      PhpFunctionComp(328) or
      PhpFunctionComp(373) or
      PhpFunctionComp(464) or
      PhpFunctionComp(768) or
      PhpFunctionComp(813) or
      PhpFunctionComp(1382) or
      PhpFunctionComp(1451) or
      PhpFunctionComp(1509) or
      PhpFunctionComp(1647) or
      PhpFunctionComp(1845) or
      PhpFunctionComp(1961) or
      PhpFunctionComp(2138) or
      PhpFunctionComp(2451) or
      PhpFunctionComp(2493) or
      PhpFunctionComp(2549) or
      PhpFunctionComp(2569) or
      PhpFunctionComp(2993) or
      PhpFunctionComp(3023) or
      PhpFunctionComp(3122) or
      PhpFunctionComp(3124) or
      PhpFunctionComp(3195) or
      PhpFunctionComp(3278) or
      PhpFunctionComp(3392) or
      PhpFunctionComp(3515) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc215: TSynWebTokenKind;
begin
  if  PhpFunctionComp(478) or
      PhpFunctionComp(563) or
      PhpFunctionComp(636) or
      PhpFunctionComp(794) or
      PhpFunctionComp(840) or
      PhpFunctionComp(1631) or
      PhpFunctionComp(1892) or
      PhpFunctionComp(1894) or
      PhpFunctionComp(2325) or
      PhpFunctionComp(2517) or
      PhpFunctionComp(2921) or
      PhpFunctionComp(3045) or
      PhpFunctionComp(3121) or
      PhpFunctionComp(3187) or
      PhpFunctionComp(3192) or
      PhpFunctionComp(3434) or
      PhpFunctionComp(3624) or
      PhpFunctionComp(3830) or
      PhpFunctionComp(4050) or
      PhpFunctionComp(4202) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc216: TSynWebTokenKind;
begin
  if  PhpFunctionComp(453) or
      PhpFunctionComp(743) or
      PhpFunctionComp(1019) or
      PhpFunctionComp(1308) or
      PhpFunctionComp(1716) or
      PhpFunctionComp(1895) or
      PhpFunctionComp(1908) or
      PhpFunctionComp(1969) or
      PhpFunctionComp(2160) or
      PhpFunctionComp(2418) or
      PhpFunctionComp(2474) or
      PhpFunctionComp(2726) or
      PhpFunctionComp(2804) or
      PhpFunctionComp(2991) or
      PhpFunctionComp(3095) or
      PhpFunctionComp(3402) or
      PhpFunctionComp(3626) or
      PhpFunctionComp(3806) or
      PhpFunctionComp(3988) or
      PhpFunctionComp(4118) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc217: TSynWebTokenKind;
begin
  if  PhpFunctionComp(271) or
      PhpFunctionComp(379) or
      PhpFunctionComp(380) or
      PhpFunctionComp(1262) or
      PhpFunctionComp(1840) or
      PhpFunctionComp(1889) or
      PhpFunctionComp(1967) or
      PhpFunctionComp(2009) or
      PhpFunctionComp(2049) or
      PhpFunctionComp(2178) or
      PhpFunctionComp(2458) or
      PhpFunctionComp(2479) or
      PhpFunctionComp(2541) or
      PhpFunctionComp(2759) or
      PhpFunctionComp(3044) or
      PhpFunctionComp(3048) or
      PhpFunctionComp(3968) or
      PhpFunctionComp(3995) or
      PhpFunctionComp(4002) or
      PhpFunctionComp(4073) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc218: TSynWebTokenKind;
begin
  if  PhpFunctionComp(653) or
      PhpFunctionComp(886) or
      PhpFunctionComp(1181) or
      PhpFunctionComp(2241) or
      PhpFunctionComp(2292) or
      PhpFunctionComp(2362) or
      PhpFunctionComp(2704) or
      PhpFunctionComp(2846) or
      PhpFunctionComp(3037) or
      PhpFunctionComp(3167) or
      PhpFunctionComp(3180) or
      PhpFunctionComp(3230) or
      PhpFunctionComp(3290) or
      PhpFunctionComp(3473) or
      PhpFunctionComp(3733) or
      PhpFunctionComp(4005) or
      PhpFunctionComp(4025) or
      PhpFunctionComp(4070) or
      PhpFunctionComp(4083) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc219: TSynWebTokenKind;
begin
  if  PhpFunctionComp(132) or
      PhpFunctionComp(515) or
      PhpFunctionComp(632) or
      PhpFunctionComp(991) or
      PhpFunctionComp(1288) or
      PhpFunctionComp(1541) or
      PhpFunctionComp(1564) or
      PhpFunctionComp(1710) or
      PhpFunctionComp(1772) or
      PhpFunctionComp(1871) or
      PhpFunctionComp(1994) or
      PhpFunctionComp(2247) or
      PhpFunctionComp(2494) or
      PhpFunctionComp(3273) or
      PhpFunctionComp(3323) or
      PhpFunctionComp(3458) or
      PhpFunctionComp(3693) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc220: TSynWebTokenKind;
begin
  if  PhpFunctionComp(635) or
      PhpFunctionComp(761) or
      PhpFunctionComp(885) or
      PhpFunctionComp(887) or
      PhpFunctionComp(980) or
      PhpFunctionComp(1173) or
      PhpFunctionComp(1257) or
      PhpFunctionComp(1926) or
      PhpFunctionComp(2010) or
      PhpFunctionComp(2024) or
      PhpFunctionComp(2173) or
      PhpFunctionComp(2194) or
      PhpFunctionComp(2673) or
      PhpFunctionComp(3211) or
      PhpFunctionComp(3400) or
      PhpFunctionComp(4340) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc221: TSynWebTokenKind;
begin
  if  PhpFunctionComp(441) or
      PhpFunctionComp(763) or
      PhpFunctionComp(997) or
      PhpFunctionComp(1454) or
      PhpFunctionComp(1833) or
      PhpFunctionComp(1914) or
      PhpFunctionComp(2026) or
      PhpFunctionComp(2182) or
      PhpFunctionComp(2548) or
      PhpFunctionComp(2562) or
      PhpFunctionComp(2574) or
      PhpFunctionComp(2839) or
      PhpFunctionComp(2842) or
      PhpFunctionComp(2856) or
      PhpFunctionComp(2949) or
      PhpFunctionComp(3060) or
      PhpFunctionComp(3137) or
      PhpFunctionComp(3559) or
      PhpFunctionComp(4038) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc222: TSynWebTokenKind;
begin
  if  PhpFunctionComp(273) or
      PhpFunctionComp(306) or
      PhpFunctionComp(576) or
      PhpFunctionComp(773) or
      PhpFunctionComp(833) or
      PhpFunctionComp(1059) or
      PhpFunctionComp(1137) or
      PhpFunctionComp(1634) or
      PhpFunctionComp(2421) or
      PhpFunctionComp(2446) or
      PhpFunctionComp(2462) or
      PhpFunctionComp(2908) or
      PhpFunctionComp(2950) or
      PhpFunctionComp(2967) or
      PhpFunctionComp(3136) or
      PhpFunctionComp(3191) or
      PhpFunctionComp(3229) or
      PhpFunctionComp(3539) or
      PhpFunctionComp(3903) or
      PhpFunctionComp(3987) or
      PhpFunctionComp(4264) or
      PhpFunctionComp(4332) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc223: TSynWebTokenKind;
begin
  if  PhpFunctionComp(546) or
      PhpFunctionComp(557) or
      PhpFunctionComp(705) or
      PhpFunctionComp(760) or
      PhpFunctionComp(824) or
      PhpFunctionComp(970) or
      PhpFunctionComp(1270) or
      PhpFunctionComp(1283) or
      PhpFunctionComp(1477) or
      PhpFunctionComp(1505) or
      PhpFunctionComp(1549) or
      PhpFunctionComp(1850) or
      PhpFunctionComp(1888) or
      PhpFunctionComp(2058) or
      PhpFunctionComp(2118) or
      PhpFunctionComp(2204) or
      PhpFunctionComp(2724) or
      PhpFunctionComp(2849) or
      PhpFunctionComp(2851) or
      PhpFunctionComp(3186) or
      PhpFunctionComp(3344) or
      PhpFunctionComp(3408) or
      PhpFunctionComp(3410) or
      PhpFunctionComp(3438) or
      PhpFunctionComp(3467) or
      PhpFunctionComp(3694) or
      PhpFunctionComp(3738) or
      PhpFunctionComp(3817) or
      PhpFunctionComp(3986) or
      PhpFunctionComp(3999) or
      PhpFunctionComp(4035) or
      PhpFunctionComp(4084) or
      PhpFunctionComp(4119) or
      PhpFunctionComp(4203) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc224: TSynWebTokenKind;
begin
  if  PhpFunctionComp(135) or
      PhpFunctionComp(286) or
      PhpFunctionComp(835) or
      PhpFunctionComp(842) or
      PhpFunctionComp(1222) or
      PhpFunctionComp(1354) or
      PhpFunctionComp(2117) or
      PhpFunctionComp(2223) or
      PhpFunctionComp(2366) or
      PhpFunctionComp(2422) or
      PhpFunctionComp(2501) or
      PhpFunctionComp(2763) or
      PhpFunctionComp(3028) or
      PhpFunctionComp(3085) or
      PhpFunctionComp(3182) or
      PhpFunctionComp(3365) or
      PhpFunctionComp(3407) or
      PhpFunctionComp(4019) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc225: TSynWebTokenKind;
begin
  if  PhpFunctionComp(427) or
      PhpFunctionComp(1274) or
      PhpFunctionComp(2015) or
      PhpFunctionComp(2268) or
      PhpFunctionComp(2471) or
      PhpFunctionComp(2545) or
      PhpFunctionComp(2558) or
      PhpFunctionComp(2685) or
      PhpFunctionComp(3231) or
      PhpFunctionComp(3274) or
      PhpFunctionComp(3299) or
      PhpFunctionComp(3495) or
      PhpFunctionComp(3744) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc226: TSynWebTokenKind;
begin
  if  PhpFunctionComp(292) or
      PhpFunctionComp(386) or
      PhpFunctionComp(649) or
      PhpFunctionComp(1197) or
      PhpFunctionComp(1219) or
      PhpFunctionComp(1239) or
      PhpFunctionComp(1378) or
      PhpFunctionComp(1586) or
      PhpFunctionComp(2137) or
      PhpFunctionComp(2142) or
      PhpFunctionComp(2243) or
      PhpFunctionComp(2286) or
      PhpFunctionComp(2600) or
      PhpFunctionComp(2770) or
      PhpFunctionComp(3073) or
      PhpFunctionComp(3178) or
      PhpFunctionComp(3324) or
      PhpFunctionComp(3364) or
      PhpFunctionComp(4207) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc227: TSynWebTokenKind;
begin
  if  PhpFunctionComp(184) or
      PhpFunctionComp(349) or
      PhpFunctionComp(358) or
      PhpFunctionComp(727) or
      PhpFunctionComp(782) or
      PhpFunctionComp(828) or
      PhpFunctionComp(839) or
      PhpFunctionComp(883) or
      PhpFunctionComp(1166) or
      PhpFunctionComp(1246) or
      PhpFunctionComp(1259) or
      PhpFunctionComp(1501) or
      PhpFunctionComp(1896) or
      PhpFunctionComp(2044) or
      PhpFunctionComp(2151) or
      PhpFunctionComp(2172) or
      PhpFunctionComp(2259) or
      PhpFunctionComp(2416) or
      PhpFunctionComp(2732) or
      PhpFunctionComp(2834) or
      PhpFunctionComp(2858) or
      PhpFunctionComp(2964) or
      PhpFunctionComp(3050) or
      PhpFunctionComp(3126) or
      PhpFunctionComp(3600) or
      PhpFunctionComp(3801) or
      PhpFunctionComp(4343) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc228: TSynWebTokenKind;
begin
  if  PhpFunctionComp(259) or
      PhpFunctionComp(523) or
      PhpFunctionComp(595) or
      PhpFunctionComp(783) or
      PhpFunctionComp(793) or
      PhpFunctionComp(1481) or
      PhpFunctionComp(1489) or
      PhpFunctionComp(1491) or
      PhpFunctionComp(1771) or
      PhpFunctionComp(1920) or
      PhpFunctionComp(1930) or
      PhpFunctionComp(2515) or
      PhpFunctionComp(2992) or
      PhpFunctionComp(3071) or
      PhpFunctionComp(3413) or
      PhpFunctionComp(3440) or
      PhpFunctionComp(3637) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc229: TSynWebTokenKind;
begin
  if  PhpFunctionComp(95) or
      PhpFunctionComp(458) or
      PhpFunctionComp(624) or
      PhpFunctionComp(724) or
      PhpFunctionComp(744) or
      PhpFunctionComp(779) or
      PhpFunctionComp(992) or
      PhpFunctionComp(1253) or
      PhpFunctionComp(1320) or
      PhpFunctionComp(1353) or
      PhpFunctionComp(1471) or
      PhpFunctionComp(1499) or
      PhpFunctionComp(1551) or
      PhpFunctionComp(1770) or
      PhpFunctionComp(2130) or
      PhpFunctionComp(2260) or
      PhpFunctionComp(2298) or
      PhpFunctionComp(2753) or
      PhpFunctionComp(3011) or
      PhpFunctionComp(3063) or
      PhpFunctionComp(3593) or
      PhpFunctionComp(3783) or
      PhpFunctionComp(3852) or
      PhpFunctionComp(4077) or
      PhpFunctionComp(4193) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc230: TSynWebTokenKind;
begin
  if  PhpFunctionComp(239) or
      PhpFunctionComp(326) or
      PhpFunctionComp(544) or
      PhpFunctionComp(548) or
      PhpFunctionComp(704) or
      PhpFunctionComp(751) or
      PhpFunctionComp(1232) or
      PhpFunctionComp(1611) or
      PhpFunctionComp(1670) or
      PhpFunctionComp(2199) or
      PhpFunctionComp(2205) or
      PhpFunctionComp(2293) or
      PhpFunctionComp(2555) or
      PhpFunctionComp(2990) or
      PhpFunctionComp(3054) or
      PhpFunctionComp(3480) or
      PhpFunctionComp(3594) or
      PhpFunctionComp(3822) or
      PhpFunctionComp(3961) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc231: TSynWebTokenKind;
begin
  if  PhpFunctionComp(403) or
      PhpFunctionComp(622) or
      PhpFunctionComp(762) or
      PhpFunctionComp(1185) or
      PhpFunctionComp(1538) or
      PhpFunctionComp(1600) or
      PhpFunctionComp(1852) or
      PhpFunctionComp(2513) or
      PhpFunctionComp(2953) or
      PhpFunctionComp(3010) or
      PhpFunctionComp(3138) or
      PhpFunctionComp(3456) or
      PhpFunctionComp(3632) or
      PhpFunctionComp(4086) or
      PhpFunctionComp(4218) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc232: TSynWebTokenKind;
begin
  if  PhpFunctionComp(330) or
      PhpFunctionComp(481) or
      PhpFunctionComp(678) or
      PhpFunctionComp(757) or
      PhpFunctionComp(789) or
      PhpFunctionComp(1088) or
      PhpFunctionComp(1214) or
      PhpFunctionComp(1249) or
      PhpFunctionComp(1360) or
      PhpFunctionComp(1492) or
      PhpFunctionComp(1841) or
      PhpFunctionComp(1944) or
      PhpFunctionComp(2158) or
      PhpFunctionComp(2200) or
      PhpFunctionComp(2702) or
      PhpFunctionComp(2728) or
      PhpFunctionComp(3003) or
      PhpFunctionComp(3084) or
      PhpFunctionComp(3226) or
      PhpFunctionComp(3312) or
      PhpFunctionComp(4016) or
      PhpFunctionComp(4078) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc233: TSynWebTokenKind;
begin
  if  PhpFunctionComp(201) or
      PhpFunctionComp(680) or
      PhpFunctionComp(737) or
      PhpFunctionComp(798) or
      PhpFunctionComp(941) or
      PhpFunctionComp(1984) or
      PhpFunctionComp(2070) or
      PhpFunctionComp(2159) or
      PhpFunctionComp(2296) or
      PhpFunctionComp(2475) or
      PhpFunctionComp(2496) or
      PhpFunctionComp(2720) or
      PhpFunctionComp(2755) or
      PhpFunctionComp(3103) or
      PhpFunctionComp(3154) or
      PhpFunctionComp(3275) or
      PhpFunctionComp(3308) or
      PhpFunctionComp(3650) or
      PhpFunctionComp(4017) or
      PhpFunctionComp(4089) or
      PhpFunctionComp(4238) or
      PhpFunctionComp(4331) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc234: TSynWebTokenKind;
begin
  if  PhpFunctionComp(166) or
      PhpFunctionComp(850) or
      PhpFunctionComp(998) or
      PhpFunctionComp(1159) or
      PhpFunctionComp(1374) or
      PhpFunctionComp(1469) or
      PhpFunctionComp(1579) or
      PhpFunctionComp(1602) or
      PhpFunctionComp(1883) or
      PhpFunctionComp(2604) or
      PhpFunctionComp(2701) or
      PhpFunctionComp(3107) or
      PhpFunctionComp(3162) or
      PhpFunctionComp(3239) or
      PhpFunctionComp(3452) or
      PhpFunctionComp(3474) or
      PhpFunctionComp(3574) or
      PhpFunctionComp(3597) or
      PhpFunctionComp(3703) or
      PhpFunctionComp(3709) or
      PhpFunctionComp(4004) or
      PhpFunctionComp(4065) or
      PhpFunctionComp(4255) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc235: TSynWebTokenKind;
begin
  if  PhpFunctionComp(312) or
      PhpFunctionComp(719) or
      PhpFunctionComp(754) or
      PhpFunctionComp(778) or
      PhpFunctionComp(964) or
      PhpFunctionComp(1206) or
      PhpFunctionComp(1318) or
      PhpFunctionComp(1582) or
      PhpFunctionComp(1832) or
      PhpFunctionComp(2020) or
      PhpFunctionComp(2313) or
      PhpFunctionComp(2473) or
      PhpFunctionComp(2687) or
      PhpFunctionComp(2866) or
      PhpFunctionComp(2947) or
      PhpFunctionComp(2989) or
      PhpFunctionComp(3113) or
      PhpFunctionComp(3374) or
      PhpFunctionComp(3745) or
      PhpFunctionComp(3782) or
      PhpFunctionComp(4241) or
      PhpFunctionComp(4394) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc236: TSynWebTokenKind;
begin
  if  PhpFunctionComp(137) or
      PhpFunctionComp(634) or
      PhpFunctionComp(700) or
      PhpFunctionComp(774) or
      PhpFunctionComp(854) or
      PhpFunctionComp(971) or
      PhpFunctionComp(983) or
      PhpFunctionComp(1287) or
      PhpFunctionComp(1309) or
      PhpFunctionComp(1313) or
      PhpFunctionComp(1524) or
      PhpFunctionComp(1537) or
      PhpFunctionComp(1767) or
      PhpFunctionComp(1791) or
      PhpFunctionComp(1817) or
      PhpFunctionComp(2261) or
      PhpFunctionComp(2262) or
      PhpFunctionComp(2434) or
      PhpFunctionComp(2706) or
      PhpFunctionComp(3367) or
      PhpFunctionComp(3591) or
      PhpFunctionComp(3963) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc237: TSynWebTokenKind;
begin
  if  PhpFunctionComp(369) or
      PhpFunctionComp(633) or
      PhpFunctionComp(937) or
      PhpFunctionComp(1001) or
      PhpFunctionComp(1828) or
      PhpFunctionComp(2165) or
      PhpFunctionComp(2490) or
      PhpFunctionComp(2760) or
      PhpFunctionComp(3478) or
      PhpFunctionComp(4081) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc238: TSynWebTokenKind;
begin
  if  PhpFunctionComp(374) or
      PhpFunctionComp(477) or
      PhpFunctionComp(711) or
      PhpFunctionComp(1237) or
      PhpFunctionComp(1286) or
      PhpFunctionComp(1478) or
      PhpFunctionComp(1576) or
      PhpFunctionComp(2179) or
      PhpFunctionComp(2254) or
      PhpFunctionComp(2282) or
      PhpFunctionComp(2409) or
      PhpFunctionComp(2571) or
      PhpFunctionComp(2665) or
      PhpFunctionComp(3025) or
      PhpFunctionComp(3043) or
      PhpFunctionComp(3235) or
      PhpFunctionComp(3353) or
      PhpFunctionComp(3370) or
      PhpFunctionComp(3620) or
      PhpFunctionComp(4011) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc239: TSynWebTokenKind;
begin
  if  PhpFunctionComp(123) or
      PhpFunctionComp(1233) or
      PhpFunctionComp(1572) or
      PhpFunctionComp(1619) or
      PhpFunctionComp(1656) or
      PhpFunctionComp(1679) or
      PhpFunctionComp(1988) or
      PhpFunctionComp(2116) or
      PhpFunctionComp(2371) or
      PhpFunctionComp(2423) or
      PhpFunctionComp(2546) or
      PhpFunctionComp(2865) or
      PhpFunctionComp(3719) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc240: TSynWebTokenKind;
begin
  if  PhpFunctionComp(134) or
      PhpFunctionComp(164) or
      PhpFunctionComp(293) or
      PhpFunctionComp(411) or
      PhpFunctionComp(489) or
      PhpFunctionComp(585) or
      PhpFunctionComp(667) or
      PhpFunctionComp(958) or
      PhpFunctionComp(1134) or
      PhpFunctionComp(1267) or
      PhpFunctionComp(1447) or
      PhpFunctionComp(1612) or
      PhpFunctionComp(1788) or
      PhpFunctionComp(1922) or
      PhpFunctionComp(2021) or
      PhpFunctionComp(2156) or
      PhpFunctionComp(2358) or
      PhpFunctionComp(2572) or
      PhpFunctionComp(3352) or
      PhpFunctionComp(3491) or
      PhpFunctionComp(4115) or
      PhpFunctionComp(4392) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc241: TSynWebTokenKind;
begin
  if  PhpFunctionComp(742) or
      PhpFunctionComp(1247) or
      PhpFunctionComp(1321) or
      PhpFunctionComp(1479) or
      PhpFunctionComp(1536) or
      PhpFunctionComp(1858) or
      PhpFunctionComp(1915) or
      PhpFunctionComp(2258) or
      PhpFunctionComp(2433) or
      PhpFunctionComp(2454) or
      PhpFunctionComp(2457) or
      PhpFunctionComp(2618) or
      PhpFunctionComp(2671) or
      PhpFunctionComp(2737) or
      PhpFunctionComp(3098) or
      PhpFunctionComp(3562) or
      PhpFunctionComp(3710) or
      PhpFunctionComp(3800) or
      PhpFunctionComp(4194) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc242: TSynWebTokenKind;
begin
  if  PhpFunctionComp(96) or
      PhpFunctionComp(274) or
      PhpFunctionComp(490) or
      PhpFunctionComp(656) or
      PhpFunctionComp(738) or
      PhpFunctionComp(1177) or
      PhpFunctionComp(1191) or
      PhpFunctionComp(1302) or
      PhpFunctionComp(1946) or
      PhpFunctionComp(2143) or
      PhpFunctionComp(2283) or
      PhpFunctionComp(2441) or
      PhpFunctionComp(2463) or
      PhpFunctionComp(2830) or
      PhpFunctionComp(2951) or
      PhpFunctionComp(3468) or
      PhpFunctionComp(4036) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc243: TSynWebTokenKind;
begin
  if  PhpFunctionComp(80) or
      PhpFunctionComp(449) or
      PhpFunctionComp(476) or
      PhpFunctionComp(1071) or
      PhpFunctionComp(1628) or
      PhpFunctionComp(1869) or
      PhpFunctionComp(2965) or
      PhpFunctionComp(3443) or
      PhpFunctionComp(3606) or
      PhpFunctionComp(3689) or
      PhpFunctionComp(4037) or
      PhpFunctionComp(4134) or
      PhpFunctionComp(4190) or
      PhpFunctionComp(4377) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc244: TSynWebTokenKind;
begin
  if  PhpFunctionComp(575) or
      PhpFunctionComp(752) or
      PhpFunctionComp(979) or
      PhpFunctionComp(1248) or
      PhpFunctionComp(1364) or
      PhpFunctionComp(1629) or
      PhpFunctionComp(1938) or
      PhpFunctionComp(2131) or
      PhpFunctionComp(3056) or
      PhpFunctionComp(3401) or
      PhpFunctionComp(3460) or
      PhpFunctionComp(3751) or
      PhpFunctionComp(4022) or
      PhpFunctionComp(4034) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc245: TSynWebTokenKind;
begin
  if  PhpFunctionComp(795) or
      PhpFunctionComp(1236) or
      PhpFunctionComp(1782) or
      PhpFunctionComp(1893) or
      PhpFunctionComp(2125) or
      PhpFunctionComp(2277) or
      PhpFunctionComp(2336) or
      PhpFunctionComp(2381) or
      PhpFunctionComp(2559) or
      PhpFunctionComp(2748) or
      PhpFunctionComp(3082) or
      PhpFunctionComp(3424) or
      PhpFunctionComp(3746) or
      PhpFunctionComp(3823) or
      PhpFunctionComp(4292) or
      PhpFunctionComp(4360) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc246: TSynWebTokenKind;
begin
  if  PhpFunctionComp(98) or
      PhpFunctionComp(580) or
      PhpFunctionComp(1265) or
      PhpFunctionComp(1835) or
      PhpFunctionComp(1929) or
      PhpFunctionComp(2052) or
      PhpFunctionComp(2287) or
      PhpFunctionComp(3294) or
      PhpFunctionComp(3469) or
      PhpFunctionComp(3482) or
      PhpFunctionComp(3519) or
      PhpFunctionComp(4099) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc247: TSynWebTokenKind;
begin
  if  PhpKeywordComp(60) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(150) or
        PhpFunctionComp(753) or
        PhpFunctionComp(888) or
        PhpFunctionComp(1136) or
        PhpFunctionComp(1851) or
        PhpFunctionComp(1899) or
        PhpFunctionComp(2303) or
        PhpFunctionComp(2329) or
        PhpFunctionComp(2464) or
        PhpFunctionComp(2472) or
        PhpFunctionComp(2560) or
        PhpFunctionComp(2855) or
        PhpFunctionComp(3243) or
        PhpFunctionComp(3770) or
        PhpFunctionComp(3962) or
        PhpFunctionComp(4090) or
        PhpFunctionComp(4121) or
        PhpFunctionComp(4361) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc248: TSynWebTokenKind;
begin
  if  PhpFunctionComp(741) or
      PhpFunctionComp(873) or
      PhpFunctionComp(898) or
      PhpFunctionComp(1083) or
      PhpFunctionComp(1186) or
      PhpFunctionComp(1260) or
      PhpFunctionComp(1278) or
      PhpFunctionComp(1527) or
      PhpFunctionComp(1630) or
      PhpFunctionComp(1635) or
      PhpFunctionComp(2045) or
      PhpFunctionComp(2096) or
      PhpFunctionComp(2488) or
      PhpFunctionComp(2521) or
      PhpFunctionComp(2522) or
      PhpFunctionComp(2727) or
      PhpFunctionComp(3267) or
      PhpFunctionComp(3776) or
      PhpFunctionComp(3833) or
      PhpFunctionComp(4045) or
      PhpFunctionComp(4273) or
      PhpFunctionComp(4311) or
      PhpFunctionComp(4344) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc249: TSynWebTokenKind;
begin
  if  PhpFunctionComp(91) or
      PhpFunctionComp(94) or
      PhpFunctionComp(301) or
      PhpFunctionComp(796) or
      PhpFunctionComp(955) or
      PhpFunctionComp(1176) or
      PhpFunctionComp(1636) or
      PhpFunctionComp(1781) or
      PhpFunctionComp(2103) or
      PhpFunctionComp(2577) or
      PhpFunctionComp(2887) or
      PhpFunctionComp(3017) or
      PhpFunctionComp(3971) or
      PhpFunctionComp(4024) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc250: TSynWebTokenKind;
begin
  if  PhpKeywordComp(2) then
    Result := stkPhpKeyword
  else
    if  PhpFunctionComp(428) or
        PhpFunctionComp(1076) or
        PhpFunctionComp(1322) or
        PhpFunctionComp(2110) or
        PhpFunctionComp(2174) or
        PhpFunctionComp(2542) or
        PhpFunctionComp(2871) or
        PhpFunctionComp(3319) or
        PhpFunctionComp(3390) or
        PhpFunctionComp(3430) or
        PhpFunctionComp(3814) or
        PhpFunctionComp(4033) or
        PhpFunctionComp(4192) then
      Result := stkPhpFunction
    else
      Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc251: TSynWebTokenKind;
begin
  if  PhpFunctionComp(109) or
      PhpFunctionComp(343) or
      PhpFunctionComp(1282) or
      PhpFunctionComp(1319) or
      PhpFunctionComp(1627) or
      PhpFunctionComp(2043) or
      PhpFunctionComp(2128) or
      PhpFunctionComp(2201) or
      PhpFunctionComp(2489) or
      PhpFunctionComp(2688) or
      PhpFunctionComp(2757) or
      PhpFunctionComp(2758) or
      PhpFunctionComp(3051) or
      PhpFunctionComp(3222) or
      PhpFunctionComp(3288) or
      PhpFunctionComp(3315) or
      PhpFunctionComp(3966) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc252: TSynWebTokenKind;
begin
  if  PhpFunctionComp(302) or
      PhpFunctionComp(1080) or
      PhpFunctionComp(1271) or
      PhpFunctionComp(1780) or
      PhpFunctionComp(2057) or
      PhpFunctionComp(2202) or
      PhpFunctionComp(2245) or
      PhpFunctionComp(2270) or
      PhpFunctionComp(2754) or
      PhpFunctionComp(2956) or
      PhpFunctionComp(3009) or
      PhpFunctionComp(4196) or
      PhpFunctionComp(4253) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc253: TSynWebTokenKind;
begin
  if  PhpFunctionComp(472) or
      PhpFunctionComp(799) or
      PhpFunctionComp(1072) or
      PhpFunctionComp(1122) or
      PhpFunctionComp(1298) or
      PhpFunctionComp(1317) or
      PhpFunctionComp(1986) or
      PhpFunctionComp(2073) or
      PhpFunctionComp(2135) or
      PhpFunctionComp(2198) or
      PhpFunctionComp(2483) or
      PhpFunctionComp(2699) or
      PhpFunctionComp(2705) or
      PhpFunctionComp(3741) or
      PhpFunctionComp(3964) or
      PhpFunctionComp(4088) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc254: TSynWebTokenKind;
begin
  if  PhpFunctionComp(345) or
      PhpFunctionComp(594) or
      PhpFunctionComp(999) or
      PhpFunctionComp(1677) or
      PhpFunctionComp(2054) or
      PhpFunctionComp(2175) or
      PhpFunctionComp(2337) or
      PhpFunctionComp(2533) or
      PhpFunctionComp(2765) or
      PhpFunctionComp(2957) or
      PhpFunctionComp(3079) or
      PhpFunctionComp(3561) or
      PhpFunctionComp(3629) or
      PhpFunctionComp(3885) or
      PhpFunctionComp(4095) or
      PhpFunctionComp(4235) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc255: TSynWebTokenKind;
begin
  if  PhpFunctionComp(414) or
      PhpFunctionComp(450) or
      PhpFunctionComp(493) or
      PhpFunctionComp(759) or
      PhpFunctionComp(1316) or
      PhpFunctionComp(1738) or
      PhpFunctionComp(2456) or
      PhpFunctionComp(2583) or
      PhpFunctionComp(2961) or
      PhpFunctionComp(3455) or
      PhpFunctionComp(4021) or
      PhpFunctionComp(4064) or
      PhpFunctionComp(4199) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc256: TSynWebTokenKind;
begin
  if  PhpFunctionComp(807) or
      PhpFunctionComp(1131) or
      PhpFunctionComp(2120) or
      PhpFunctionComp(2121) or
      PhpFunctionComp(2203) or
      PhpFunctionComp(2206) or
      PhpFunctionComp(2410) or
      PhpFunctionComp(2837) or
      PhpFunctionComp(2884) or
      PhpFunctionComp(3118) or
      PhpFunctionComp(3584) or
      PhpFunctionComp(3818) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc257: TSynWebTokenKind;
begin
  if  PhpFunctionComp(410) or
      PhpFunctionComp(781) or
      PhpFunctionComp(1087) or
      PhpFunctionComp(1931) or
      PhpFunctionComp(1950) or
      PhpFunctionComp(1962) or
      PhpFunctionComp(2134) or
      PhpFunctionComp(2217) or
      PhpFunctionComp(2256) or
      PhpFunctionComp(2440) or
      PhpFunctionComp(2506) or
      PhpFunctionComp(2526) or
      PhpFunctionComp(2601) or
      PhpFunctionComp(3164) or
      PhpFunctionComp(4170) or
      PhpFunctionComp(4393) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc258: TSynWebTokenKind;
begin
  if  PhpFunctionComp(984) or
      PhpFunctionComp(1766) or
      PhpFunctionComp(1958) or
      PhpFunctionComp(2180) or
      PhpFunctionComp(2257) or
      PhpFunctionComp(2276) or
      PhpFunctionComp(3338) or
      PhpFunctionComp(3454) or
      PhpFunctionComp(4244) or
      PhpFunctionComp(4272) or
      PhpFunctionComp(4368) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc259: TSynWebTokenKind;
begin
  if  PhpFunctionComp(516) or
      PhpFunctionComp(790) or
      PhpFunctionComp(837) or
      PhpFunctionComp(1154) or
      PhpFunctionComp(1448) or
      PhpFunctionComp(1460) or
      PhpFunctionComp(1855) or
      PhpFunctionComp(2197) or
      PhpFunctionComp(2253) or
      PhpFunctionComp(2539) or
      PhpFunctionComp(2553) or
      PhpFunctionComp(2602) or
      PhpFunctionComp(3065) or
      PhpFunctionComp(3414) or
      PhpFunctionComp(3426) or
      PhpFunctionComp(3753) or
      PhpFunctionComp(3837) or
      PhpFunctionComp(3853) or
      PhpFunctionComp(4066) or
      PhpFunctionComp(4130) or
      PhpFunctionComp(4371) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc260: TSynWebTokenKind;
begin
  if  PhpFunctionComp(659) or
      PhpFunctionComp(1941) or
      PhpFunctionComp(2140) or
      PhpFunctionComp(2145) or
      PhpFunctionComp(2497) or
      PhpFunctionComp(3055) or
      PhpFunctionComp(3314) or
      PhpFunctionComp(3318) or
      PhpFunctionComp(3420) or
      PhpFunctionComp(3596) or
      PhpFunctionComp(3684) or
      PhpFunctionComp(3807) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc261: TSynWebTokenKind;
begin
  if  PhpFunctionComp(165) or
      PhpFunctionComp(560) or
      PhpFunctionComp(1145) or
      PhpFunctionComp(1324) or
      PhpFunctionComp(1632) or
      PhpFunctionComp(1765) or
      PhpFunctionComp(1783) or
      PhpFunctionComp(1844) or
      PhpFunctionComp(2014) or
      PhpFunctionComp(2102) or
      PhpFunctionComp(2237) or
      PhpFunctionComp(2746) or
      PhpFunctionComp(2812) or
      PhpFunctionComp(3310) or
      PhpFunctionComp(3661) or
      PhpFunctionComp(3739) or
      PhpFunctionComp(4388) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc262: TSynWebTokenKind;
begin
  if  PhpFunctionComp(106) or
      PhpFunctionComp(1340) or
      PhpFunctionComp(1525) or
      PhpFunctionComp(1876) or
      PhpFunctionComp(2263) or
      PhpFunctionComp(2302) or
      PhpFunctionComp(2487) or
      PhpFunctionComp(2561) or
      PhpFunctionComp(2608) or
      PhpFunctionComp(2875) or
      PhpFunctionComp(3447) or
      PhpFunctionComp(3481) or
      PhpFunctionComp(3778) or
      PhpFunctionComp(3813) or
      PhpFunctionComp(3967) or
      PhpFunctionComp(4201) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc263: TSynWebTokenKind;
begin
  if  PhpFunctionComp(972) or
      PhpFunctionComp(1562) or
      PhpFunctionComp(1626) or
      PhpFunctionComp(2284) or
      PhpFunctionComp(2382) or
      PhpFunctionComp(2499) or
      PhpFunctionComp(2843) or
      PhpFunctionComp(2885) or
      PhpFunctionComp(3379) or
      PhpFunctionComp(4215) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc264: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1055) or
      PhpFunctionComp(1942) or
      PhpFunctionComp(1979) or
      PhpFunctionComp(1991) or
      PhpFunctionComp(2171) or
      PhpFunctionComp(2379) or
      PhpFunctionComp(2981) or
      PhpFunctionComp(3171) or
      PhpFunctionComp(3704) or
      PhpFunctionComp(3742) or
      PhpFunctionComp(3858) or
      PhpFunctionComp(3877) or
      PhpFunctionComp(4079) or
      PhpFunctionComp(4291) or
      PhpFunctionComp(4341) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc265: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1671) or
      PhpFunctionComp(1739) or
      PhpFunctionComp(1978) or
      PhpFunctionComp(2252) or
      PhpFunctionComp(2524) or
      PhpFunctionComp(2703) or
      PhpFunctionComp(2897) or
      PhpFunctionComp(3027) or
      PhpFunctionComp(3404) or
      PhpFunctionComp(3505) or
      PhpFunctionComp(3786) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc266: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1862) or
      PhpFunctionComp(1877) or
      PhpFunctionComp(1985) or
      PhpFunctionComp(2331) or
      PhpFunctionComp(2333) or
      PhpFunctionComp(2343) or
      PhpFunctionComp(2509) or
      PhpFunctionComp(3224) or
      PhpFunctionComp(3342) or
      PhpFunctionComp(3621) or
      PhpFunctionComp(3789) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc267: TSynWebTokenKind;
begin
  if  PhpFunctionComp(355) or
      PhpFunctionComp(416) or
      PhpFunctionComp(479) or
      PhpFunctionComp(1583) or
      PhpFunctionComp(1977) or
      PhpFunctionComp(2334) or
      PhpFunctionComp(2350) or
      PhpFunctionComp(2523) or
      PhpFunctionComp(2535) or
      PhpFunctionComp(3775) or
      PhpFunctionComp(3802) or
      PhpFunctionComp(3832) or
      PhpFunctionComp(3913) or
      PhpFunctionComp(3920) or
      PhpFunctionComp(4286) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc268: TSynWebTokenKind;
begin
  if  PhpFunctionComp(459) or
      PhpFunctionComp(982) or
      PhpFunctionComp(1168) or
      PhpFunctionComp(1280) or
      PhpFunctionComp(1339) or
      PhpFunctionComp(2328) or
      PhpFunctionComp(3316) or
      PhpFunctionComp(3592) or
      PhpFunctionComp(3690) or
      PhpFunctionComp(3826) or
      PhpFunctionComp(3883) or
      PhpFunctionComp(4012) or
      PhpFunctionComp(4046) or
      PhpFunctionComp(4283) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc269: TSynWebTokenKind;
begin
  if  PhpFunctionComp(233) or
      PhpFunctionComp(461) or
      PhpFunctionComp(484) or
      PhpFunctionComp(1476) or
      PhpFunctionComp(1637) or
      PhpFunctionComp(1949) or
      PhpFunctionComp(2469) or
      PhpFunctionComp(2958) or
      PhpFunctionComp(3067) or
      PhpFunctionComp(4182) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc270: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1338) or
      PhpFunctionComp(1528) or
      PhpFunctionComp(1757) or
      PhpFunctionComp(2305) or
      PhpFunctionComp(2544) or
      PhpFunctionComp(2761) or
      PhpFunctionComp(2869) or
      PhpFunctionComp(3022) or
      PhpFunctionComp(3791) or
      PhpFunctionComp(4028) or
      PhpFunctionComp(4281) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc271: TSynWebTokenKind;
begin
  if  PhpFunctionComp(491) or
      PhpFunctionComp(495) or
      PhpFunctionComp(1661) or
      PhpFunctionComp(1796) or
      PhpFunctionComp(1866) or
      PhpFunctionComp(2105) or
      PhpFunctionComp(2108) or
      PhpFunctionComp(2234) or
      PhpFunctionComp(2369) or
      PhpFunctionComp(2662) or
      PhpFunctionComp(2867) or
      PhpFunctionComp(3602) or
      PhpFunctionComp(3902) or
      PhpFunctionComp(3916) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc272: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1135) or
      PhpFunctionComp(1490) or
      PhpFunctionComp(2356) or
      PhpFunctionComp(2547) or
      PhpFunctionComp(2686) or
      PhpFunctionComp(2873) or
      PhpFunctionComp(3541) or
      PhpFunctionComp(3601) or
      PhpFunctionComp(3790) or
      PhpFunctionComp(3816) or
      PhpFunctionComp(4131) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc273: TSynWebTokenKind;
begin
  if  PhpFunctionComp(100) or
      PhpFunctionComp(322) or
      PhpFunctionComp(654) or
      PhpFunctionComp(672) or
      PhpFunctionComp(874) or
      PhpFunctionComp(1943) or
      PhpFunctionComp(2031) or
      PhpFunctionComp(2573) or
      PhpFunctionComp(2689) or
      PhpFunctionComp(2859) or
      PhpFunctionComp(2901) or
      PhpFunctionComp(3115) or
      PhpFunctionComp(3331) or
      PhpFunctionComp(3625) or
      PhpFunctionComp(3695) or
      PhpFunctionComp(3811) or
      PhpFunctionComp(3849) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc274: TSynWebTokenKind;
begin
  if  PhpFunctionComp(145) or
      PhpFunctionComp(207) or
      PhpFunctionComp(335) or
      PhpFunctionComp(986) or
      PhpFunctionComp(1151) or
      PhpFunctionComp(1559) or
      PhpFunctionComp(1768) or
      PhpFunctionComp(1813) or
      PhpFunctionComp(2327) or
      PhpFunctionComp(2529) or
      PhpFunctionComp(2660) or
      PhpFunctionComp(3333) or
      PhpFunctionComp(4013) or
      PhpFunctionComp(4039) or
      PhpFunctionComp(4075) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc275: TSynWebTokenKind;
begin
  if  PhpFunctionComp(337) or
      PhpFunctionComp(1964) or
      PhpFunctionComp(2111) or
      PhpFunctionComp(2278) or
      PhpFunctionComp(2339) or
      PhpFunctionComp(3024) or
      PhpFunctionComp(3093) or
      PhpFunctionComp(4112) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc276: TSynWebTokenKind;
begin
  if  PhpFunctionComp(376) or
      PhpFunctionComp(1000) or
      PhpFunctionComp(1323) or
      PhpFunctionComp(1332) or
      PhpFunctionComp(1337) or
      PhpFunctionComp(1429) or
      PhpFunctionComp(1913) or
      PhpFunctionComp(2046) or
      PhpFunctionComp(2485) or
      PhpFunctionComp(2550) or
      PhpFunctionComp(2644) or
      PhpFunctionComp(2982) or
      PhpFunctionComp(3035) or
      PhpFunctionComp(3143) or
      PhpFunctionComp(3144) or
      PhpFunctionComp(3423) or
      PhpFunctionComp(3896) or
      PhpFunctionComp(4129) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc277: TSynWebTokenKind;
begin
  if  PhpFunctionComp(810) or
      PhpFunctionComp(820) or
      PhpFunctionComp(1482) or
      PhpFunctionComp(1959) or
      PhpFunctionComp(2218) or
      PhpFunctionComp(3030) or
      PhpFunctionComp(3549) or
      PhpFunctionComp(3569) or
      PhpFunctionComp(3611) or
      PhpFunctionComp(3705) or
      PhpFunctionComp(4076) or
      PhpFunctionComp(4327) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc278: TSynWebTokenKind;
begin
  if  PhpFunctionComp(101) or
      PhpFunctionComp(985) or
      PhpFunctionComp(1078) or
      PhpFunctionComp(1717) or
      PhpFunctionComp(1795) or
      PhpFunctionComp(1990) or
      PhpFunctionComp(2335) or
      PhpFunctionComp(2437) or
      PhpFunctionComp(2510) or
      PhpFunctionComp(2534) or
      PhpFunctionComp(2972) or
      PhpFunctionComp(3475) or
      PhpFunctionComp(3554) or
      PhpFunctionComp(3688) or
      PhpFunctionComp(4085) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc279: TSynWebTokenKind;
begin
  if  PhpFunctionComp(102) or
      PhpFunctionComp(708) or
      PhpFunctionComp(1912) or
      PhpFunctionComp(2190) or
      PhpFunctionComp(2222) or
      PhpFunctionComp(2280) or
      PhpFunctionComp(2363) or
      PhpFunctionComp(2374) or
      PhpFunctionComp(3360) or
      PhpFunctionComp(3453) or
      PhpFunctionComp(3691) or
      PhpFunctionComp(3731) or
      PhpFunctionComp(3754) or
      PhpFunctionComp(3831) or
      PhpFunctionComp(4068) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc280: TSynWebTokenKind;
begin
  if  PhpFunctionComp(202) or
      PhpFunctionComp(1910) or
      PhpFunctionComp(2436) or
      PhpFunctionComp(2674) or
      PhpFunctionComp(2872) or
      PhpFunctionComp(3313) or
      PhpFunctionComp(3603) or
      PhpFunctionComp(3706) or
      PhpFunctionComp(4014) or
      PhpFunctionComp(4133) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc281: TSynWebTokenKind;
begin
  if  PhpFunctionComp(127) or
      PhpFunctionComp(650) or
      PhpFunctionComp(2518) or
      PhpFunctionComp(3309) or
      PhpFunctionComp(3334) or
      PhpFunctionComp(3834) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc282: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1843) or
      PhpFunctionComp(2022) or
      PhpFunctionComp(2074) or
      PhpFunctionComp(2124) or
      PhpFunctionComp(2210) or
      PhpFunctionComp(2540) or
      PhpFunctionComp(2631) or
      PhpFunctionComp(2669) or
      PhpFunctionComp(2752) or
      PhpFunctionComp(3036) or
      PhpFunctionComp(3133) or
      PhpFunctionComp(3508) or
      PhpFunctionComp(3551) or
      PhpFunctionComp(3748) or
      PhpFunctionComp(3785) or
      PhpFunctionComp(3970) or
      PhpFunctionComp(4127) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc283: TSynWebTokenKind;
begin
  if  PhpFunctionComp(211) or
      PhpFunctionComp(348) or
      PhpFunctionComp(1911) or
      PhpFunctionComp(2207) or
      PhpFunctionComp(2285) or
      PhpFunctionComp(2394) or
      PhpFunctionComp(2460) or
      PhpFunctionComp(2690) or
      PhpFunctionComp(2868) or
      PhpFunctionComp(2955) or
      PhpFunctionComp(2986) or
      PhpFunctionComp(3108) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc284: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1735) or
      PhpFunctionComp(1740) or
      PhpFunctionComp(2667) or
      PhpFunctionComp(2771) or
      PhpFunctionComp(3387) or
      PhpFunctionComp(3514) or
      PhpFunctionComp(3787) or
      PhpFunctionComp(3904) or
      PhpFunctionComp(4100) or
      PhpFunctionComp(4246) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc285: TSynWebTokenKind;
begin
  if  PhpFunctionComp(421) or
      PhpFunctionComp(852) or
      PhpFunctionComp(1734) or
      PhpFunctionComp(2080) or
      PhpFunctionComp(2236) or
      PhpFunctionComp(2954) or
      PhpFunctionComp(3619) or
      PhpFunctionComp(3743) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc286: TSynWebTokenKind;
begin
  if  PhpFunctionComp(370) or
      PhpFunctionComp(418) or
      PhpFunctionComp(973) or
      PhpFunctionComp(1779) or
      PhpFunctionComp(2528) or
      PhpFunctionComp(3317) or
      PhpFunctionComp(3917) or
      PhpFunctionComp(4087) or
      PhpFunctionComp(4237) or
      PhpFunctionComp(4326) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc287: TSynWebTokenKind;
begin
  if  PhpFunctionComp(895) or
      PhpFunctionComp(1565) or
      PhpFunctionComp(1773) or
      PhpFunctionComp(2255) or
      PhpFunctionComp(2376) or
      PhpFunctionComp(2659) or
      PhpFunctionComp(2959) or
      PhpFunctionComp(2974) or
      PhpFunctionComp(3020) or
      PhpFunctionComp(3532) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc288: TSynWebTokenKind;
begin
  if  PhpFunctionComp(797) or
      PhpFunctionComp(2468) or
      PhpFunctionComp(2876) or
      PhpFunctionComp(2962) or
      PhpFunctionComp(3566) or
      PhpFunctionComp(3839) or
      PhpFunctionComp(4243) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc289: TSynWebTokenKind;
begin
  if  PhpFunctionComp(278) or
      PhpFunctionComp(288) or
      PhpFunctionComp(811) or
      PhpFunctionComp(2088) or
      PhpFunctionComp(2269) or
      PhpFunctionComp(3322) or
      PhpFunctionComp(3464) or
      PhpFunctionComp(3824) or
      PhpFunctionComp(4135) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc290: TSynWebTokenKind;
begin
  if  PhpFunctionComp(130) or
      PhpFunctionComp(321) or
      PhpFunctionComp(1633) or
      PhpFunctionComp(1865) or
      PhpFunctionComp(1955) or
      PhpFunctionComp(2624) or
      PhpFunctionComp(2769) or
      PhpFunctionComp(2860) or
      PhpFunctionComp(3483) or
      PhpFunctionComp(3513) or
      PhpFunctionComp(3886) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc291: TSynWebTokenKind;
begin
  if  PhpFunctionComp(142) or
      PhpFunctionComp(974) or
      PhpFunctionComp(993) or
      PhpFunctionComp(1152) or
      PhpFunctionComp(2072) or
      PhpFunctionComp(2359) or
      PhpFunctionComp(2365) or
      PhpFunctionComp(2633) or
      PhpFunctionComp(2874) or
      PhpFunctionComp(3061) or
      PhpFunctionComp(3563) or
      PhpFunctionComp(3630) or
      PhpFunctionComp(3788) or
      PhpFunctionComp(3793) or
      PhpFunctionComp(4054) or
      PhpFunctionComp(4092) or
      PhpFunctionComp(4198) or
      PhpFunctionComp(4333) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc292: TSynWebTokenKind;
begin
  if  PhpFunctionComp(275) or
      PhpFunctionComp(294) or
      PhpFunctionComp(1074) or
      PhpFunctionComp(1789) or
      PhpFunctionComp(1882) or
      PhpFunctionComp(1891) or
      PhpFunctionComp(2357) or
      PhpFunctionComp(3227) or
      PhpFunctionComp(3735) or
      PhpFunctionComp(3901) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc293: TSynWebTokenKind;
begin
  if  PhpFunctionComp(409) or
      PhpFunctionComp(1902) or
      PhpFunctionComp(1940) or
      PhpFunctionComp(2081) or
      PhpFunctionComp(2304) or
      PhpFunctionComp(2398) or
      PhpFunctionComp(3311) or
      PhpFunctionComp(3330) or
      PhpFunctionComp(3419) or
      PhpFunctionComp(3489) or
      PhpFunctionComp(4217) or
      PhpFunctionComp(4250) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc294: TSynWebTokenKind;
begin
  if  PhpFunctionComp(122) or
      PhpFunctionComp(494) or
      PhpFunctionComp(988) or
      PhpFunctionComp(1900) or
      PhpFunctionComp(1993) or
      PhpFunctionComp(2101) or
      PhpFunctionComp(2133) or
      PhpFunctionComp(2238) or
      PhpFunctionComp(2301) or
      PhpFunctionComp(2537) or
      PhpFunctionComp(2616) or
      PhpFunctionComp(3215) or
      PhpFunctionComp(3244) or
      PhpFunctionComp(3307) or
      PhpFunctionComp(3707) or
      PhpFunctionComp(4216) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc295: TSynWebTokenKind;
begin
  if  PhpFunctionComp(422) or
      PhpFunctionComp(809) or
      PhpFunctionComp(1171) or
      PhpFunctionComp(1279) or
      PhpFunctionComp(1306) or
      PhpFunctionComp(1327) or
      PhpFunctionComp(1764) or
      PhpFunctionComp(2027) or
      PhpFunctionComp(2389) or
      PhpFunctionComp(3064) or
      PhpFunctionComp(3325) or
      PhpFunctionComp(3509) or
      PhpFunctionComp(4330) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc296: TSynWebTokenKind;
begin
  if  PhpFunctionComp(204) or
      PhpFunctionComp(709) or
      PhpFunctionComp(1976) or
      PhpFunctionComp(2251) or
      PhpFunctionComp(2332) or
      PhpFunctionComp(2636) or
      PhpFunctionComp(3359) or
      PhpFunctionComp(3431) or
      PhpFunctionComp(3819) or
      PhpFunctionComp(3842) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc297: TSynWebTokenKind;
begin
  if  PhpFunctionComp(347) or
      PhpFunctionComp(1975) or
      PhpFunctionComp(2373) or
      PhpFunctionComp(3914) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc298: TSynWebTokenKind;
begin
  if  PhpFunctionComp(772) or
      PhpFunctionComp(2338) or
      PhpFunctionComp(2578) or
      PhpFunctionComp(2710) or
      PhpFunctionComp(3158) or
      PhpFunctionComp(3564) or
      PhpFunctionComp(3897) or
      PhpFunctionComp(3899) or
      PhpFunctionComp(3906) or
      PhpFunctionComp(4391) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc299: TSynWebTokenKind;
begin
  if  PhpFunctionComp(220) or
      PhpFunctionComp(276) or
      PhpFunctionComp(994) or
      PhpFunctionComp(1733) or
      PhpFunctionComp(1885) or
      PhpFunctionComp(2597) or
      PhpFunctionComp(4074) or
      PhpFunctionComp(4277) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc300: TSynWebTokenKind;
begin
  if  PhpFunctionComp(3099) or
      PhpFunctionComp(3457) or
      PhpFunctionComp(3922) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc301: TSynWebTokenKind;
begin
  if  PhpFunctionComp(426) or
      PhpFunctionComp(1966) or
      PhpFunctionComp(2512) or
      PhpFunctionComp(2530) or
      PhpFunctionComp(2661) or
      PhpFunctionComp(2857) or
      PhpFunctionComp(3571) or
      PhpFunctionComp(3803) or
      PhpFunctionComp(4269) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc302: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1075) or
      PhpFunctionComp(2629) or
      PhpFunctionComp(3421) or
      PhpFunctionComp(4114) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc303: TSynWebTokenKind;
begin
  if  PhpFunctionComp(360) or
      PhpFunctionComp(602) or
      PhpFunctionComp(670) or
      PhpFunctionComp(1655) or
      PhpFunctionComp(1925) or
      PhpFunctionComp(1953) or
      PhpFunctionComp(2307) or
      PhpFunctionComp(2531) or
      PhpFunctionComp(2564) or
      PhpFunctionComp(2675) or
      PhpFunctionComp(3062) or
      PhpFunctionComp(3472) or
      PhpFunctionComp(3490) or
      PhpFunctionComp(3627) or
      PhpFunctionComp(3888) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc304: TSynWebTokenKind;
begin
  if  PhpFunctionComp(173) or
      PhpFunctionComp(304) or
      PhpFunctionComp(362) or
      PhpFunctionComp(2029) or
      PhpFunctionComp(2711) or
      PhpFunctionComp(3409) or
      PhpFunctionComp(4208) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc305: TSynWebTokenKind;
begin
  if  PhpFunctionComp(149) or
      PhpFunctionComp(1742) or
      PhpFunctionComp(1936) or
      PhpFunctionComp(2208) or
      PhpFunctionComp(2324) or
      PhpFunctionComp(2966) or
      PhpFunctionComp(3247) or
      PhpFunctionComp(3320) or
      PhpFunctionComp(3726) or
      PhpFunctionComp(3779) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc306: TSynWebTokenKind;
begin
  if  PhpFunctionComp(702) or
      PhpFunctionComp(2347) or
      PhpFunctionComp(2429) or
      PhpFunctionComp(2481) or
      PhpFunctionComp(2684) or
      PhpFunctionComp(2893) or
      PhpFunctionComp(3092) or
      PhpFunctionComp(3329) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc307: TSynWebTokenKind;
begin
  if  PhpFunctionComp(141) or
      PhpFunctionComp(1335) or
      PhpFunctionComp(2551) or
      PhpFunctionComp(3332) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc308: TSynWebTokenKind;
begin
  if  PhpFunctionComp(812) or
      PhpFunctionComp(2375) or
      PhpFunctionComp(2403) or
      PhpFunctionComp(2508) or
      PhpFunctionComp(2570) or
      PhpFunctionComp(2963) or
      PhpFunctionComp(3425) or
      PhpFunctionComp(3550) or
      PhpFunctionComp(3761) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc309: TSynWebTokenKind;
begin
  if  PhpFunctionComp(238) or
      PhpFunctionComp(357) or
      PhpFunctionComp(455) or
      PhpFunctionComp(1231) or
      PhpFunctionComp(1872) or
      PhpFunctionComp(1980) or
      PhpFunctionComp(2411) or
      PhpFunctionComp(2511) or
      PhpFunctionComp(3145) or
      PhpFunctionComp(3391) or
      PhpFunctionComp(3459) or
      PhpFunctionComp(4191) or
      PhpFunctionComp(4240) or
      PhpFunctionComp(4380) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc310: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1169) or
      PhpFunctionComp(1269) or
      PhpFunctionComp(2482) or
      PhpFunctionComp(2889) or
      PhpFunctionComp(3530) or
      PhpFunctionComp(3565) or
      PhpFunctionComp(3732) or
      PhpFunctionComp(3923) or
      PhpFunctionComp(4397) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc311: TSynWebTokenKind;
begin
  if  PhpFunctionComp(277) or
      PhpFunctionComp(485) or
      PhpFunctionComp(570) or
      PhpFunctionComp(1970) or
      PhpFunctionComp(2391) or
      PhpFunctionComp(2595) or
      PhpFunctionComp(3080) or
      PhpFunctionComp(3717) or
      PhpFunctionComp(3850) or
      PhpFunctionComp(4220) or
      PhpFunctionComp(4271) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc312: TSynWebTokenKind;
begin
  if  PhpFunctionComp(144) or
      PhpFunctionComp(350) or
      PhpFunctionComp(413) or
      PhpFunctionComp(736) or
      PhpFunctionComp(1881) or
      PhpFunctionComp(2216) or
      PhpFunctionComp(2880) or
      PhpFunctionComp(3233) or
      PhpFunctionComp(3422) or
      PhpFunctionComp(3610) or
      PhpFunctionComp(3616) or
      PhpFunctionComp(4219) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc313: TSynWebTokenKind;
begin
  if  PhpFunctionComp(365) or
      PhpFunctionComp(1193) or
      PhpFunctionComp(2311) or
      PhpFunctionComp(2525) or
      PhpFunctionComp(3780) or
      PhpFunctionComp(3792) or
      PhpFunctionComp(4290) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc314: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2380) or
      PhpFunctionComp(2543) or
      PhpFunctionComp(2960) or
      PhpFunctionComp(3771) or
      PhpFunctionComp(4197) or
      PhpFunctionComp(4295) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc315: TSynWebTokenKind;
begin
  if  PhpFunctionComp(657) or
      PhpFunctionComp(703) or
      PhpFunctionComp(1903) or
      PhpFunctionComp(2392) or
      PhpFunctionComp(2538) or
      PhpFunctionComp(3386) or
      PhpFunctionComp(3634) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc316: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2039) or
      PhpFunctionComp(3512) or
      PhpFunctionComp(3662) or
      PhpFunctionComp(4322) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc317: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2312) or
      PhpFunctionComp(3734) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc318: TSynWebTokenKind;
begin
  if  PhpFunctionComp(668) or
      PhpFunctionComp(1904) or
      PhpFunctionComp(2095) or
      PhpFunctionComp(2438) or
      PhpFunctionComp(2439) or
      PhpFunctionComp(2532) or
      PhpFunctionComp(2641) or
      PhpFunctionComp(2663) or
      PhpFunctionComp(3969) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc319: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1250) or
      PhpFunctionComp(4310) or
      PhpFunctionComp(4316) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc320: TSynWebTokenKind;
begin
  if  PhpFunctionComp(631) or
      PhpFunctionComp(2402) or
      PhpFunctionComp(3526) or
      PhpFunctionComp(3660) or
      PhpFunctionComp(3863) or
      PhpFunctionComp(4314) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc321: TSynWebTokenKind;
begin
  if  PhpFunctionComp(208) or
      PhpFunctionComp(2915) or
      PhpFunctionComp(3432) or
      PhpFunctionComp(3898) or
      PhpFunctionComp(4200) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc322: TSynWebTokenKind;
begin
  if  PhpFunctionComp(755) or
      PhpFunctionComp(2012) or
      PhpFunctionComp(2372) or
      PhpFunctionComp(3116) or
      PhpFunctionComp(3633) or
      PhpFunctionComp(4188) or
      PhpFunctionComp(4254) or
      PhpFunctionComp(4284) or
      PhpFunctionComp(4304) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc323: TSynWebTokenKind;
begin
  if  PhpFunctionComp(124) or
      PhpFunctionComp(2666) or
      PhpFunctionComp(3862) or
      PhpFunctionComp(3921) or
      PhpFunctionComp(4301) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc324: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2393) or
      PhpFunctionComp(2870) or
      PhpFunctionComp(3094) or
      PhpFunctionComp(4120) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc325: TSynWebTokenKind;
begin
  if  PhpFunctionComp(354) or
      PhpFunctionComp(377) or
      PhpFunctionComp(652) or
      PhpFunctionComp(3558) or
      PhpFunctionComp(3810) or
      PhpFunctionComp(3919) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc326: TSynWebTokenKind;
begin
  if  PhpFunctionComp(412) or
      PhpFunctionComp(1331) or
      PhpFunctionComp(1519) or
      PhpFunctionComp(2620) or
      PhpFunctionComp(2683) or
      PhpFunctionComp(3727) or
      PhpFunctionComp(3848) or
      PhpFunctionComp(4098) or
      PhpFunctionComp(4297) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc327: TSynWebTokenKind;
begin
  if  PhpFunctionComp(425) or
      PhpFunctionComp(469) or
      PhpFunctionComp(1921) or
      PhpFunctionComp(2355) or
      PhpFunctionComp(2435) or
      PhpFunctionComp(2731) or
      PhpFunctionComp(2913) or
      PhpFunctionComp(4325) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc328: TSynWebTokenKind;
begin
  if  PhpFunctionComp(117) or
      PhpFunctionComp(143) or
      PhpFunctionComp(167) or
      PhpFunctionComp(1203) or
      PhpFunctionComp(2038) or
      PhpFunctionComp(2077) or
      PhpFunctionComp(2412) or
      PhpFunctionComp(2621) or
      PhpFunctionComp(2625) or
      PhpFunctionComp(2904) or
      PhpFunctionComp(3555) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc329: TSynWebTokenKind;
begin
  if  PhpFunctionComp(121) or
      PhpFunctionComp(2430) or
      PhpFunctionComp(2568) or
      PhpFunctionComp(2895) or
      PhpFunctionComp(3762) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc330: TSynWebTokenKind;
begin
  if  PhpFunctionComp(240) or
      PhpFunctionComp(2076) or
      PhpFunctionComp(2354) or
      PhpFunctionComp(3232) or
      PhpFunctionComp(3820) or
      PhpFunctionComp(4229) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc331: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1326) or
      PhpFunctionComp(1859) or
      PhpFunctionComp(2025) or
      PhpFunctionComp(2352) or
      PhpFunctionComp(3237) or
      PhpFunctionComp(3516) or
      PhpFunctionComp(3716) or
      PhpFunctionComp(3781) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc332: TSynWebTokenKind;
begin
  if  PhpFunctionComp(640) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc333: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2442) or
      PhpFunctionComp(2581) or
      PhpFunctionComp(2623) or
      PhpFunctionComp(2627) or
      PhpFunctionComp(2863) or
      PhpFunctionComp(2973) or
      PhpFunctionComp(3388) or
      PhpFunctionComp(3777) or
      PhpFunctionComp(3855) or
      PhpFunctionComp(4052) or
      PhpFunctionComp(4071) or
      PhpFunctionComp(4323) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc334: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2069) or
      PhpFunctionComp(2353) or
      PhpFunctionComp(2622) or
      PhpFunctionComp(2680) or
      PhpFunctionComp(4195) or
      PhpFunctionComp(4285) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc335: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1150) or
      PhpFunctionComp(1153) or
      PhpFunctionComp(1815) or
      PhpFunctionComp(1863) or
      PhpFunctionComp(2272) or
      PhpFunctionComp(2886) or
      PhpFunctionComp(3416) or
      PhpFunctionComp(3417) or
      PhpFunctionComp(3477) or
      PhpFunctionComp(3556) or
      PhpFunctionComp(4040) or
      PhpFunctionComp(4259) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc336: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2271) or
      PhpFunctionComp(2864) or
      PhpFunctionComp(4345) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc337: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1170) or
      PhpFunctionComp(1995) or
      PhpFunctionComp(2580) or
      PhpFunctionComp(2861) or
      PhpFunctionComp(3097) or
      PhpFunctionComp(3840) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc338: TSynWebTokenKind;
begin
  if  PhpFunctionComp(353) or
      PhpFunctionComp(359) or
      PhpFunctionComp(621) or
      PhpFunctionComp(1333) or
      PhpFunctionComp(2078) or
      PhpFunctionComp(2658) or
      PhpFunctionComp(2888) or
      PhpFunctionComp(2905) or
      PhpFunctionComp(3321) or
      PhpFunctionComp(4227) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc339: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2279) or
      PhpFunctionComp(3225) or
      PhpFunctionComp(3552) or
      PhpFunctionComp(3669) or
      PhpFunctionComp(3763) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc340: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1204) or
      PhpFunctionComp(1719) or
      PhpFunctionComp(2075) or
      PhpFunctionComp(4260) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc341: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1797) or
      PhpFunctionComp(2408) or
      PhpFunctionComp(4242) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc342: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2225) or
      PhpFunctionComp(2598) or
      PhpFunctionComp(2894) or
      PhpFunctionComp(3827) or
      PhpFunctionComp(3905) or
      PhpFunctionComp(4223) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc343: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1334) or
      PhpFunctionComp(2317) or
      PhpFunctionComp(2330) or
      PhpFunctionComp(3428) or
      PhpFunctionComp(3433) or
      PhpFunctionComp(3668) or
      PhpFunctionComp(3857) or
      PhpFunctionComp(3864) or
      PhpFunctionComp(4151) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc344: TSynWebTokenKind;
begin
  if  PhpFunctionComp(209) or
      PhpFunctionComp(2028) or
      PhpFunctionComp(2209) or
      PhpFunctionComp(2342) or
      PhpFunctionComp(2390) or
      PhpFunctionComp(2610) or
      PhpFunctionComp(2654) or
      PhpFunctionComp(2862) or
      PhpFunctionComp(3764) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc345: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2340) or
      PhpFunctionComp(3327) or
      PhpFunctionComp(3484) or
      PhpFunctionComp(3618) or
      PhpFunctionComp(4347) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc346: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1522) or
      PhpFunctionComp(3718) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc347: TSynWebTokenKind;
begin
  if  PhpFunctionComp(361) or
      PhpFunctionComp(1276) or
      PhpFunctionComp(1718) or
      PhpFunctionComp(3531) or
      PhpFunctionComp(3557) or
      PhpFunctionComp(3671) or
      PhpFunctionComp(3798) or
      PhpFunctionComp(3924) or
      PhpFunctionComp(3928) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc348: TSynWebTokenKind;
begin
  if  PhpFunctionComp(205) or
      PhpFunctionComp(1330) or
      PhpFunctionComp(1520) or
      PhpFunctionComp(2299) or
      PhpFunctionComp(2607) or
      PhpFunctionComp(2891) or
      PhpFunctionComp(3570) or
      PhpFunctionComp(3772) or
      PhpFunctionComp(3909) or
      PhpFunctionComp(3927) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc349: TSynWebTokenKind;
begin
  if  PhpFunctionComp(168) or
      PhpFunctionComp(438) or
      PhpFunctionComp(1948) or
      PhpFunctionComp(2582) or
      PhpFunctionComp(2613) or
      PhpFunctionComp(3572) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc350: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1947) or
      PhpFunctionComp(2321) or
      PhpFunctionComp(3615) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc351: TSynWebTokenKind;
begin
  if  PhpFunctionComp(658) or
      PhpFunctionComp(1937) or
      PhpFunctionComp(2079) or
      PhpFunctionComp(2664) or
      PhpFunctionComp(3553) or
      PhpFunctionComp(3675) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc352: TSynWebTokenKind;
begin
  if  PhpFunctionComp(847) or
      PhpFunctionComp(1901) or
      PhpFunctionComp(1935) or
      PhpFunctionComp(2914) or
      PhpFunctionComp(3260) or
      PhpFunctionComp(3479) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc353: TSynWebTokenKind;
begin
  if  PhpFunctionComp(89) or
      PhpFunctionComp(1927) or
      PhpFunctionComp(4278) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc354: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2368) or
      PhpFunctionComp(2406) or
      PhpFunctionComp(3715) or
      PhpFunctionComp(3835) or
      PhpFunctionComp(3856) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc355: TSynWebTokenKind;
begin
  if  PhpFunctionComp(3674) or
      PhpFunctionComp(3838) or
      PhpFunctionComp(4144) or
      PhpFunctionComp(4282) or
      PhpFunctionComp(4294) or
      PhpFunctionComp(4346) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc356: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1945) or
      PhpFunctionComp(2387) or
      PhpFunctionComp(2605) or
      PhpFunctionComp(2617) or
      PhpFunctionComp(2902) or
      PhpFunctionComp(4211) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc357: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2273) or
      PhpFunctionComp(3893) or
      PhpFunctionComp(4051) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc358: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2318) or
      PhpFunctionComp(2892) or
      PhpFunctionComp(3844) or
      PhpFunctionComp(4256) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc359: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1615) or
      PhpFunctionComp(3427) or
      PhpFunctionComp(4097) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc360: TSynWebTokenKind;
begin
  if  PhpFunctionComp(660) or
      PhpFunctionComp(1336) or
      PhpFunctionComp(2274) or
      PhpFunctionComp(2306) or
      PhpFunctionComp(2676) or
      PhpFunctionComp(4209) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc361: TSynWebTokenKind;
begin
  if  PhpFunctionComp(439) or
      PhpFunctionComp(3486) or
      PhpFunctionComp(3769) or
      PhpFunctionComp(3808) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc362: TSynWebTokenKind;
begin
  if  PhpFunctionComp(415) or
      PhpFunctionComp(3128) or
      PhpFunctionComp(3129) or
      PhpFunctionComp(3617) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc363: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1654) or
      PhpFunctionComp(2316) or
      PhpFunctionComp(2883) or
      PhpFunctionComp(2900) or
      PhpFunctionComp(3019) or
      PhpFunctionComp(4224) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc364: TSynWebTokenKind;
begin
  if  PhpFunctionComp(352) or
      PhpFunctionComp(2536) or
      PhpFunctionComp(3507) or
      PhpFunctionComp(3623) or
      PhpFunctionComp(3915) or
      PhpFunctionComp(4245) or
      PhpFunctionComp(4348) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc365: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2619) or
      PhpFunctionComp(3613) or
      PhpFunctionComp(4320) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc366: TSynWebTokenKind;
begin
  if  PhpFunctionComp(320) or
      PhpFunctionComp(2224) or
      PhpFunctionComp(2344) or
      PhpFunctionComp(2903) or
      PhpFunctionComp(3510) or
      PhpFunctionComp(4342) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc367: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2590) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc368: TSynWebTokenKind;
begin
  if  PhpFunctionComp(90) or
      PhpFunctionComp(637) or
      PhpFunctionComp(2614) or
      PhpFunctionComp(4308) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc369: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2291) or
      PhpFunctionComp(2345) or
      PhpFunctionComp(2385) or
      PhpFunctionComp(2609) or
      PhpFunctionComp(3608) or
      PhpFunctionComp(3843) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc370: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2519) or
      PhpFunctionComp(2520) or
      PhpFunctionComp(2898) or
      PhpFunctionComp(3860) or
      PhpFunctionComp(4257) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc371: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4102) or
      PhpFunctionComp(4328) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc372: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1341) or
      PhpFunctionComp(2944) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc373: TSynWebTokenKind;
begin
  if  PhpFunctionComp(995) or
      PhpFunctionComp(2068) or
      PhpFunctionComp(2630) or
      PhpFunctionComp(2634) or
      PhpFunctionComp(3506) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc374: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2615) or
      PhpFunctionComp(3829) or
      PhpFunctionComp(3884) or
      PhpFunctionComp(4315) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc376: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1329) or
      PhpFunctionComp(1905) or
      PhpFunctionComp(2399) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc377: TSynWebTokenKind;
begin
  if  PhpFunctionComp(655) or
      PhpFunctionComp(3485) or
      PhpFunctionComp(4166) or
      PhpFunctionComp(4276) or
      PhpFunctionComp(4302) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc378: TSynWebTokenKind;
begin
  if  PhpFunctionComp(791) or
      PhpFunctionComp(2364) or
      PhpFunctionComp(4096) or
      PhpFunctionComp(4252) or
      PhpFunctionComp(4288) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc379: TSynWebTokenKind;
begin
  if  PhpFunctionComp(663) or
      PhpFunctionComp(990) or
      PhpFunctionComp(1277) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc380: TSynWebTokenKind;
begin
  if  PhpFunctionComp(364) or
      PhpFunctionComp(1952) or
      PhpFunctionComp(3859) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc381: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2386) or
      PhpFunctionComp(3622) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc382: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2030) or
      PhpFunctionComp(2089) or
      PhpFunctionComp(2637) or
      PhpFunctionComp(2656) or
      PhpFunctionComp(4222) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc383: TSynWebTokenKind;
begin
  if  PhpFunctionComp(3929) or
      PhpFunctionComp(4389) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc384: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2681) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc385: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1521) or
      PhpFunctionComp(2584) or
      PhpFunctionComp(2651) or
      PhpFunctionComp(3635) or
      PhpFunctionComp(4210) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc386: TSynWebTokenKind;
begin
  if  PhpFunctionComp(518) or
      PhpFunctionComp(661) or
      PhpFunctionComp(2064) or
      PhpFunctionComp(3861) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc387: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1951) or
      PhpFunctionComp(2062) or
      PhpFunctionComp(2395) or
      PhpFunctionComp(2635) or
      PhpFunctionComp(3234) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc388: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2554) or
      PhpFunctionComp(3614) or
      PhpFunctionComp(3836) or
      PhpFunctionComp(4189) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc389: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1594) or
      PhpFunctionComp(3889) or
      PhpFunctionComp(4303) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc390: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1342) or
      PhpFunctionComp(1856) or
      PhpFunctionComp(3825) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc391: TSynWebTokenKind;
begin
  if  PhpFunctionComp(119) or
      PhpFunctionComp(2899) or
      PhpFunctionComp(2911) or
      PhpFunctionComp(3575) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc392: TSynWebTokenKind;
begin
  if  PhpFunctionComp(206) or
      PhpFunctionComp(1939) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc393: TSynWebTokenKind;
begin
  if  PhpFunctionComp(664) or
      PhpFunctionComp(665) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc394: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1860) or
      PhpFunctionComp(2650) or
      PhpFunctionComp(4165) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc396: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2682) or
      PhpFunctionComp(3910) or
      PhpFunctionComp(3918) or
      PhpFunctionComp(4032) or
      PhpFunctionComp(4204) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc397: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2063) or
      PhpFunctionComp(4289) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc398: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1751) or
      PhpFunctionComp(1792) or
      PhpFunctionComp(3740) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc399: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1665) or
      PhpFunctionComp(1741) or
      PhpFunctionComp(1954) or
      PhpFunctionComp(2061) or
      PhpFunctionComp(3749) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc400: TSynWebTokenKind;
begin
  if  PhpFunctionComp(669) or
      PhpFunctionComp(2035) or
      PhpFunctionComp(2401) or
      PhpFunctionComp(2655) or
      PhpFunctionComp(3892) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc401: TSynWebTokenKind;
begin
  if  PhpFunctionComp(671) or
      PhpFunctionComp(2400) or
      PhpFunctionComp(3525) or
      PhpFunctionComp(4293) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc402: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2388) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc403: TSynWebTokenKind;
begin
  if  PhpFunctionComp(967) or
      PhpFunctionComp(2032) or
      PhpFunctionComp(2341) or
      PhpFunctionComp(2384) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc404: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2370) or
      PhpFunctionComp(4041) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc405: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2195) or
      PhpFunctionComp(2647) or
      PhpFunctionComp(3487) or
      PhpFunctionComp(4287) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc406: TSynWebTokenKind;
begin
  if  PhpFunctionComp(851) or
      PhpFunctionComp(1884) or
      PhpFunctionComp(2552) or
      PhpFunctionComp(3488) or
      PhpFunctionComp(4258) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc407: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1989) or
      PhpFunctionComp(2396) or
      PhpFunctionComp(2646) or
      PhpFunctionComp(4312) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc408: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2599) or
      PhpFunctionComp(2648) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc409: TSynWebTokenKind;
begin
  if  PhpFunctionComp(969) or
      PhpFunctionComp(2585) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc410: TSynWebTokenKind;
begin
  if  PhpFunctionComp(92) or
      PhpFunctionComp(1676) or
      PhpFunctionComp(3567) or
      PhpFunctionComp(4043) or
      PhpFunctionComp(4299) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc412: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1593) or
      PhpFunctionComp(2643) or
      PhpFunctionComp(3846) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc413: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2212) or
      PhpFunctionComp(2319) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc414: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1328) or
      PhpFunctionComp(1799) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc415: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1595) or
      PhpFunctionComp(2397) or
      PhpFunctionComp(2645) or
      PhpFunctionComp(4042) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc417: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2652) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc418: TSynWebTokenKind;
begin
  if  PhpFunctionComp(3851) or
      PhpFunctionComp(4296) or
      PhpFunctionComp(4390) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc419: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1880) or
      PhpFunctionComp(2214) or
      PhpFunctionComp(3573) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc420: TSynWebTokenKind;
begin
  if  PhpFunctionComp(3809) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc421: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1861) or
      PhpFunctionComp(2087) or
      PhpFunctionComp(3891) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc423: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1798) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc424: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2213) or
      PhpFunctionComp(2882) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc425: TSynWebTokenKind;
begin
  if  PhpFunctionComp(93) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc426: TSynWebTokenKind;
begin
  if  PhpFunctionComp(3847) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc427: TSynWebTokenKind;
begin
  if  PhpFunctionComp(638) or
      PhpFunctionComp(2346) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc428: TSynWebTokenKind;
begin
  if  PhpFunctionComp(3890) or
      PhpFunctionComp(4044) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc430: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4318) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc431: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2405) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc433: TSynWebTokenKind;
begin
  if  PhpFunctionComp(125) or
      PhpFunctionComp(968) or
      PhpFunctionComp(2036) or
      PhpFunctionComp(2910) or
      PhpFunctionComp(4306) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc434: TSynWebTokenKind;
begin
  if  PhpFunctionComp(3828) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc435: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4263) or
      PhpFunctionComp(4321) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc436: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4247) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc437: TSynWebTokenKind;
begin
  if  PhpFunctionComp(639) or
      PhpFunctionComp(2215) or
      PhpFunctionComp(2594) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc438: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2037) or
      PhpFunctionComp(2404) or
      PhpFunctionComp(4309) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc439: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2066) or
      PhpFunctionComp(2420) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc440: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2638) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc441: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2649) or
      PhpFunctionComp(4226) or
      PhpFunctionComp(4249) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc442: TSynWebTokenKind;
begin
  if  PhpFunctionComp(3672) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc447: TSynWebTokenKind;
begin
  if  PhpFunctionComp(329) or
      PhpFunctionComp(848) or
      PhpFunctionComp(2378) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc449: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2945) or
      PhpFunctionComp(4319) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc450: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2407) or
      PhpFunctionComp(4280) or
      PhpFunctionComp(4298) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc452: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2060) or
      PhpFunctionComp(4307) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc453: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2881) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc454: TSynWebTokenKind;
begin
  if  PhpFunctionComp(118) or
      PhpFunctionComp(2377) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc455: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2592) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc457: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2320) or
      PhpFunctionComp(3841) or
      PhpFunctionComp(4317) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc458: TSynWebTokenKind;
begin
  if  PhpFunctionComp(3568) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc459: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1857) or
      PhpFunctionComp(2679) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc460: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2041) or
      PhpFunctionComp(2586) or
      PhpFunctionComp(4305) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc463: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2589) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc464: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4261) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc468: TSynWebTokenKind;
begin
  if  PhpFunctionComp(3673) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc470: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2315) or
      PhpFunctionComp(2896) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc472: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2591) or
      PhpFunctionComp(4274) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc474: TSynWebTokenKind;
begin
  if  PhpFunctionComp(662) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc477: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4313) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc478: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1864) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc479: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4248) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc480: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4300) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc483: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4225) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc487: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2085) or
      PhpFunctionComp(3845) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc503: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4221) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc505: TSynWebTokenKind;
begin
  if  PhpFunctionComp(1854) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc513: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2067) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc515: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2626) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc517: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2083) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc519: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2082) or
      PhpFunctionComp(4266) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc521: TSynWebTokenKind;
begin
  if  PhpFunctionComp(210) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc529: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2909) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc532: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2912) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc533: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4275) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc539: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2033) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc541: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2587) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc549: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2034) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc553: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2593) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc555: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4267) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc559: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2653) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc561: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2086) or
      PhpFunctionComp(4262) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc568: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4228) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc575: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2588) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc587: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2065) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc590: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4265) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc635: TSynWebTokenKind;
begin
  if  PhpFunctionComp(2084) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;

function TSynWebEngine.PhpKeywordFunc644: TSynWebTokenKind;
begin
  if  PhpFunctionComp(4279) then
    Result := stkPhpFunction
  else
    Result := stkPhpIdentifier;
end;
