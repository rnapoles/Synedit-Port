{-------------------------------------------------------------------------------
SynWeb
Copyright (C) 2005-2009  Krystian Bigaj

*** MPL
The contents of this file are subject to the Mozilla Public License
Version 1.1 (the "License"); you may not use this file except in compliance
with the License. You may obtain a copy of the License at
http://www.mozilla.org/MPL/

Software distributed under the License is distributed on an "AS IS" basis,
WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License for
the specific language governing rights and limitations under the License.

The Original Code is Krystian Bigaj.

Alternatively, the contents of this file may be used under the terms
of the GNU Lesser General Public license (the  "LGPL License"),
in which case the provisions of LGPL License are applicable instead of those
above. If you wish to allow use of your version of this file only
under the terms of the LGPL License and not to allow others to use
your version of this file under the MPL, indicate your decision by
deleting the provisions above and replace them with the notice and
other provisions required by the LGPL License. If you do not delete
the provisions above, a recipient may use your version of this file
under either the MPL or the LGPL License.

*** LGPL
This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
***

You may retrieve the latest version of this file at the SynWeb home page,
located at http://sourceforge.net/projects/synweb

Contact: krystian.bigaj@gmail.com
Homepage: http://flatdev.ovh.org
-------------------------------------------------------------------------------}

{$IFNDEF QSYNHIGHLIGHTERWEBDATA}
unit SynHighlighterWebData;
{$ENDIF}

{$I SynWeb.inc}

interface

uses
  Classes,
{$IFDEF SYN_CLX}
  QSynEditHighlighter
{$IFDEF UNISYNEDIT}
  ,QSynUnicode
{$ENDIF}
  ;
{$ELSE}
  SynEditHighlighter
{$IFDEF UNISYNEDIT}
  ,SynUnicode
{$ENDIF}
  ;
{$ENDIF}

// Global ----------------------------------------------------------------------
type
{$IFDEF UNISYNEDIT}
  TSynWebString = UnicodeString;
  TSynWebStrings = TUnicodeStrings;
  TSynWebStringList = TUnicodeStringList;
{$ELSE}
  TSynWebString = String;
  TSynWebStrings = TStrings;
  TSynWebStringList = TStringList;
{$ENDIF}

  PSynWebHashTable = ^TSynWebHashTable;
  TSynWebHashTable = array[AnsiChar] of Longword;

  TSynWebHighlighterType = (
    shtML, shtCss, shtEs, shtPhpInML, shtPhpInCss, shtPhpInEs
    );

  TSynWebHighlighterTypes = set of TSynWebHighlighterType;

  TSynWebHighlighterMode = (
    shmML, shmCss, shmEs, shmPhpCli
    );

  TSynWebTokenKind = (
    // ML
    stkMLSpace, stkMLText, stkMLEscape, stkMLComment, stkMLSymbol,
    stkMLTag, stkMLTagName, stkMLTagNameUndef, stkMLTagKey,
    stkMLTagKeyUndef, stkMLTagKeyValue, stkMLTagKeyValueQuoted, stkMLError,
    // Css
    stkCssSpace, stkCssSelector, stkCssSelectorUndef, stkCssSelectorClass,
    stkCssSelectorId, stkCssSpecial, stkCssComment, stkCssProp, stkCssPropUndef,
    stkCssVal, stkCssValUndef, stkCssValString, stkCssValNumber, stkCssSymbol,
    stkCssError,
    // ECMAScript
    stkEsSpace, stkEsIdentifier, stkEsKeyword, stkEsString, stkEsComment, stkEsSymbol,
    stkEsNumber, stkEsError,
    // Php
    stkPhpSpace, stkPhpInlineText, stkPhpIdentifier, stkPhpKeyword, stkPhpFunction,
    stkPhpVariable, stkPhpConst, stkPhpString, stkPhpStringSpecial, stkPhpComment,
    stkPhpMethod, stkPhpDocComment, stkPhpDocCommentTag, stkPhpSymbol, stkPhpNumber,
    stkPhpError,
    // Other
    stkNull);

  TSynWebTokenKinds = set of TSynWebTokenKind;

  TSynWebProcTableProc = procedure of object;

  PSynWebIdentFuncTableFunc = ^TSynWebIdentFuncTableFunc;
  TSynWebIdentFuncTableFunc = function: TSynWebTokenKind of object;

  PSynWebIdent2FuncTableFunc = ^TSynWebIdent2FuncTableFunc;
  TSynWebIdent2FuncTableFunc = function: Boolean of object;

  PSynWebTokenAttributeTable = ^TSynWebTokenAttributeTable;
  TSynWebTokenAttributeTable = array[Low(TSynWebTokenKind)..High(TSynWebTokenKind)] of
    TSynHighlighterAttributes;

const
  CSYNWEB_RANGE_HTML = $00000000;
  CSYNWEB_RANGE_CSS = Longword(shtCss) shl 29;
  CSYNWEB_RANGE_ES = Longword(shtEs) shl 29;
  CSYNWEB_RANGE_PHPPLAIN = (Longword(shtPhpInML) shl 29) or (1 shl 23); // srsPhpDefault

// ML --------------------------------------------------------------------------
type
  TSynWebHtmlVersion = (shvHtml401Strict, shvHtml401Transitional, shvHtml401Frameset,
    shvHtml5,
    shvXHtml10Strict, shvXHtml10Transitional, shvXHtml10Frameset);

  TSynWebWmlVersion = (swvWml11, swvWml12, swvWml13);

  TSynWebXsltVersion = (swvXslt10, swvXslt20);

  TSynWebMLVersion = (smlhvHtml401Strict, smlhvHtml401Transitional, smlhvHtml401Frameset,
    smlhvHtml5,
    smlhvXHtml10Strict, smlhvXHtml10Transitional, smlhvXHtml10Frameset,
    smlwvWml11, smlwvWml12, smlwvWml13, smlwvXslt10, smlwvXslt20, smlwvXML);

  TSynWebMLRangeState = (srsMLText, srsMLComment, srsMLCommentClose, srsMLTag,
    srsMLTagClose, srsMLTagDOCTYPE, srsMLTagCDATA, srsMLTagKey,
    srsMLTagKeyEq, srsMLTagKeyValue, srsMLTagKeyValueQuoted1,
    srsMLTagKeyValueQuoted2);

const
  TSynWebHtmlVersionStr: array[Low(TSynWebHtmlVersion)..High(TSynWebHtmlVersion)] of String = (
    'HTML 4.01 Strict',
    'HTML 4.01 Transitional',
    'HTML 4.01 Frameset',
    'HTML 5',
    'XHTML 1.0 Strict',
    'XHTML 1.0 Transitional',
    'XHTML 1.0 Frameset'
    );

  TSynWebWMLVersionStr: array[Low(TSynWebWMLVersion)..High(TSynWebWMLVersion)] of String = (
    'WML 1.1',
    'WML 1.2',
    'WML 1.3'
    );

  TSynWebXSLTVersionStr: array[Low(TSynWebXsltVersion)..High(TSynWebXsltVersion)] of String = (
    'XSLT 1.0',
    'XSLT 2.0'
    );

// Css -------------------------------------------------------------------------
type
  TSynWebCssVersion = (
    scvCss1, scvCss21
    );

  TSynWebCssRangeState = (srsCssRuleset, srsCssSelectorAttrib, srsCssSelectorPseudo,
    srsCssAtKeyword, srsCssProp, srsCssPropVal, srsCssPropValStr, srsCssPropValRgb,
    srsCssPropValFunc, srsCssPropValSpecial, srsCssPropValImportant,
    srsCssPropValUrl, srsCssPropValRect,
    srsCssComment);

const
  TSynWebCssRangeStateRulesetBegin = srsCssProp;
  TSynWebCssRangeStateRulesetEnd = srsCssPropValRect;

  TSynWebCssVersionStr: array[Low(TSynWebCssVersion)..High(TSynWebCssVersion)] of String = (
    'Css 1',
    'Css 2.1'
    );

  TSynWebCssString39 = 4;
  TSynWebCssString34 = 5;

// ECMAScript ------------------------------------------------------------------
type
  TSynWebEsRangeState = (srsEsDefault, srsEsComment, srsEsCommentMulti, srsEsString34,
    srsEsString39, srsEsRegExp);

// Php -------------------------------------------------------------------------
type
  TSynWebPhpVersion = (
    spvPhp4, spvPhp5
    );

  TSynWebPhpRangeState = (
    srsPhpSubProc, srsPhpDefault, srsPhpComment, srsPhpDocComment,
    srsPhpString34, srsPhpString39, srsPhpStringShell, srsPhpHeredoc
    );

  TSynWebPhpOpenTag = (spotPhp, spotPhpShort, spotML, spotASP);
  TSynWebPhpOpenTags = set of TSynWebPhpOpenTag;

const
  TSynWebPhpVersionStr: array[Low(TSynWebPhpVersion)..High(TSynWebPhpVersion)] of String = (
{$I SynHighlighterWeb_PhpVersion.inc}
    );

// ML --------------------------------------------------------------------------
const
  {$I SynHighlighterWeb_Tags.inc}

  {$I SynHighlighterWeb_Attrs.inc}

  {$I SynHighlighterWeb_Special.inc}
// Css -------------------------------------------------------------------------
const
  {$I SynHighlighterWeb_CssProps.inc}

  {$I SynHighlighterWeb_CssVals.inc}

  {$I SynHighlighterWeb_CssSpecial.inc}

// ECAMScript ------------------------------------------------------------------
const
  EsSymbolID_RegExprInlineStart        = 0;          // /
  EsSymbolID_RegExprInlineEnd          = 1;          // /
  EsSymbolID_Div                       = 2;          // /
  EsSymbolID_DivAssign                 = 3;          // /=
  EsSymbolID_Lower                     = 4;          // <
  EsSymbolID_LowerEqual                = 5;          // <=
  EsSymbolID_ShiftLeft                 = 6;          // <<
  EsSymbolID_ShiftLeftAssign           = 7;          // <<=
  EsSymbolID_Assign                    = 8;          // =
  EsSymbolID_Equal                     = 9;          // ==
  EsSymbolID_Identical                 = 10;         // ===
  EsSymbolID_Greater                   = 11;         // >
  EsSymbolID_GreaterEqual              = 12;         // >=
  EsSymbolID_ShiftRight                = 13;         // >>
  EsSymbolID_ShiftRightAssign          = 14;         // >>=
  EsSymbolID_BitwiseAnd                = 15;         // &
  EsSymbolID_BitwiseAndAssign          = 16;         // &=
  EsSymbolID_LogicAnd                  = 17;         // &&
  EsSymbolID_Add                       = 18;         // +
  EsSymbolID_AddAssign                 = 19;         // +=
  EsSymbolID_Increment                 = 20;         // ++
  EsSymbolID_Dec                       = 21;         // -
  EsSymbolID_DecAssign                 = 22;         // -=
  EsSymbolID_Decrement                 = 23;         // --
  EsSymbolID_BitwiseOR                 = 24;         // |
  EsSymbolID_BitwiseOrAssign           = 25;         // |=
  EsSymbolID_LogicOr                   = 26;         // ||
  EsSymbolID_Mul                       = 27;         // *
  EsSymbolID_MulAssign                 = 28;         // *=
  EsSymbolID_Mod                       = 29;         // %
  EsSymbolID_ModAssign                 = 30;         // %=
  EsSymbolID_Xor                       = 31;         // ^
  EsSymbolID_XorAssign                 = 32;         // ^=
  EsSymbolID_BraceOpen                 = 33;         // {
  EsSymbolID_BraceClose                = 34;         // }
  EsSymbolID_BoxBracketOpen            = 35;         // [
  EsSymbolID_BoxBracketClose           = 36;         // ]
  EsSymbolID_ParentheseOpen            = 37;         // (
  EsSymbolID_ParentheseClose           = 38;         // )
  EsSymbolID_ObjAccess                 = 39;         // .
  EsSymbolID_SemiColon                 = 40;         // ;
  EsSymbolID_Comma                     = 41;         // ,
  EsSymbolID_Question                  = 42;         // ?
  EsSymbolID_Colon                     = 43;         // :
  EsSymbolID_Tilde                     = 44;         // ~
  EsSymbolID_BackSlash                 = 45;         // \    
  EsSymbolID_Not                       = 46;         // !
  EsSymbolID_NotEqual                  = 47;         // !=
  EsSymbolID_NotIdentical              = 48;         // !==

//  EsSymbolID_NotEqual2                 = 37;         // <>  ????

  {$I SynHighlighterWeb_ESKeywords.inc}

// Php -------------------------------------------------------------------------
const
  PhpSymbolID_Question                  = 0;          // ?
  PhpSymbolID_BitwiseAnd                = 1;          // &
  PhpSymbolID_BitwiseAndAssign          = 2;          // &=
  PhpSymbolID_LogicAnd                  = 3;          // &&
  PhpSymbolID_BitwiseOR                 = 4;          // |
  PhpSymbolID_BitwiseOrAssign           = 5;          // |=
  PhpSymbolID_LogicOr                   = 6;          // ||
  PhpSymbolID_Assign                    = 7;          // =
  PhpSymbolID_Equal                     = 8;          // ==
  PhpSymbolID_Identical                 = 9;          // ==
  PhpSymbolID_Arrow                     = 10;         // =>
  PhpSymbolID_Greater                   = 11;         // >
  PhpSymbolID_GreaterEqual              = 12;         // >=
  PhpSymbolID_ShiftRight                = 13;         // >>
  PhpSymbolID_ShiftRightAssign          = 14;         // >>=
  PhpSymbolID_Lower                     = 15;         // <
  PhpSymbolID_LowerEqual                = 16;         // <=
  PhpSymbolID_ShiftLeft                 = 17;         // <<
  PhpSymbolID_ShiftLeftAssign           = 18;         // <<=
  PhpSymbolID_Heredoc                   = 19;         // <<<
  PhpSymbolID_Add                       = 20;         // +
  PhpSymbolID_AddAssign                 = 21;         // +=
  PhpSymbolID_Increment                 = 22;         // ++
  PhpSymbolID_Dec                       = 23;         // -
  PhpSymbolID_DecAssign                 = 24;         // -=
  PhpSymbolID_Decrement                 = 25;         // --
  PhpSymbolID_ObjectMethod              = 26;         // ->
  PhpSymbolID_Mul                       = 27;         // *
  PhpSymbolID_MulAssign                 = 28;         // *=
  PhpSymbolID_Div                       = 29;         // /
  PhpSymbolID_DivAssign                 = 30;         // /=
  PhpSymbolID_Mod                       = 31;         // %
  PhpSymbolID_ModAssign                 = 32;         // %=
  PhpSymbolID_Xor                       = 33;         // ^
  PhpSymbolID_XorAssign                 = 34;         // ^=
  PhpSymbolID_Not                       = 35;         // !
  PhpSymbolID_NotEqual                  = 36;         // !=
  PhpSymbolID_NotEqual2                 = 37;         // <>
  PhpSymbolID_NotIdentical              = 38;         // !==
  PhpSymbolID_Concat                    = 39;         // .
  PhpSymbolID_ConcatAssign              = 40;         // .=
  PhpSymbolID_Colon                     = 41;         // :
  PhpSymbolID_ClassMethod               = 42;         // ::
  PhpSymbolID_ParentheseOpen            = 43;         // (
  PhpSymbolID_ParentheseClose           = 44;         // )
  PhpSymbolID_BoxBracketOpen            = 45;         // [
  PhpSymbolID_BoxBracketClose           = 46;         // ]
  PhpSymbolID_BraceOpen                 = 47;         // {
  PhpSymbolID_BraceClose                = 48;         // }
  PhpSymbolID_Tilde                     = 49;         // ~
  PhpSymbolID_Comma                     = 50;         // ,
  PhpSymbolID_SemiColon                 = 51;         // ;

{$I SynHighlighterWeb_PhpKeywords.inc}

// Global ----------------------------------------------------------------------
const
{$I SynHighlighterWeb_Tables.inc}

  TCrc8Table: array[$00..$FF] of Byte = (
    $00, $07, $0e, $09, $1c, $1b, $12, $15,
    $38, $3f, $36, $31, $24, $23, $2a, $2d,
    $70, $77, $7e, $79, $6c, $6b, $62, $65,
    $48, $4f, $46, $41, $54, $53, $5a, $5d,
    $e0, $e7, $ee, $e9, $fc, $fb, $f2, $f5,
    $d8, $df, $d6, $d1, $c4, $c3, $ca, $cd,
    $90, $97, $9e, $99, $8c, $8b, $82, $85,
    $a8, $af, $a6, $a1, $b4, $b3, $ba, $bd,
    $c7, $c0, $c9, $ce, $db, $dc, $d5, $d2,
    $ff, $f8, $f1, $f6, $e3, $e4, $ed, $ea,
    $b7, $b0, $b9, $be, $ab, $ac, $a5, $a2,
    $8f, $88, $81, $86, $93, $94, $9d, $9a,
    $27, $20, $29, $2e, $3b, $3c, $35, $32,
    $1f, $18, $11, $16, $03, $04, $0d, $0a,
    $57, $50, $59, $5e, $4b, $4c, $45, $42,
    $6f, $68, $61, $66, $73, $74, $7d, $7a,
    $89, $8e, $87, $80, $95, $92, $9b, $9c,
    $b1, $b6, $bf, $b8, $ad, $aa, $a3, $a4,
    $f9, $fe, $f7, $f0, $e5, $e2, $eb, $ec,
    $c1, $c6, $cf, $c8, $dd, $da, $d3, $d4,
    $69, $6e, $67, $60, $75, $72, $7b, $7c,
    $51, $56, $5f, $58, $4d, $4a, $43, $44,
    $19, $1e, $17, $10, $05, $02, $0b, $0c,
    $21, $26, $2f, $28, $3d, $3a, $33, $34,
    $4e, $49, $40, $47, $52, $55, $5c, $5b,
    $76, $71, $78, $7f, $6a, $6d, $64, $63,
    $3e, $39, $30, $37, $22, $25, $2c, $2b,
    $06, $01, $08, $0f, $1a, $1d, $14, $13,
    $ae, $a9, $a0, $a7, $b2, $b5, $bc, $bb,
    $96, $91, $98, $9f, $8a, $8d, $84, $83,
    $de, $d9, $d0, $d7, $c2, $c5, $cc, $cb,
    $e6, $e1, $e8, $ef, $fa, $fd, $f4, $f3
    );

implementation

end.

