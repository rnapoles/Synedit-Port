  CssSpecialMaxKeyHash = 190;
  CssSpecialID_Import = 22;
  CssSpecialID_Media = 29;
  CssSpecialID_Page = 32;
  CssSpecialID_Charset = 6;
  CssSpecialID_Important = 23;
  CssSpecialID_Lang = 26;
  CssSpecialID_Url = 45;
  CssSpecialID_Auto = 3;

  TSynWeb_CssSpecial:array[0..46] of AnsiString=(
    'active', 'after', 'all', 'auto', 'before', 'braille', 'charset', 'cm', 'deg', 
    'em', 'embossed', 'ex', 'first', 'first-child', 'first-letter', 'first-line', 
    'focus', 'font-face', 'grad', 'handheld', 'hover', 'hz', 'import', 'important', 
    'in', 'khz', 'lang', 'left', 'link', 'media', 'mm', 'ms', 'page', 'pc', 
    'print', 'projection', 'pt', 'px', 'rad', 'right', 's', 'screen', 'speech', 
    'tty', 'tv', 'url', 'visited'
    );

  TSynWeb_CssSpecialData:array[0..46] of Longword=(
    $0000C000, $00004000, $00002000, $00000002, $00004000, $00002000, $00001000, 
    $18000000, $80000000, $18000000, $00002000, $18000000, $00000800, $00004000, 
    $0000C000, $0000C000, $00004000, $00001000, $80000000, $00002000, $00004000, 
    $40000000, $00001000, $00000000, $18000000, $40000000, $00004000, $00000800, 
    $0000C000, $00001000, $18000000, $20000000, $00001000, $18000000, $00002000, 
    $00002000, $18000000, $18000000, $80000000, $00000800, $20000000, $00002000, 
    $00002000, $00002000, $00002000, $00000002, $00004000
    );
