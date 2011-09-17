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

{$IFNDEF QSYNTOKENMATCH}
unit SynTokenMatch;
{$ENDIF}

{$I SynWeb.inc}

interface

uses
{$IFDEF SYN_CLX}
  QSynEdit,    
{$IFDEF UNISYNEDIT}  
  QSynUnicode,
{$ENDIF}
  QSynEditTextBuffer,
  QSynEditTypes,
  QSynEditHighlighter;
{$ELSE}
  SynEdit,
{$IFDEF UNISYNEDIT} 
  SynUnicode,
{$ENDIF}
  SynEditTextBuffer,
  SynEditTypes,
  SynEditHighlighter;
{$ENDIF}

type
  PSynTokenMatch = ^TSynTokenMatch;
  TSynTokenMatch = record
{$IFDEF UNISYNEDIT}
    OpenToken: UnicodeString;
    CloseToken: UnicodeString;
{$ELSE}
    OpenToken: String;
    CloseToken: String;
{$ENDIF}
    TokenKind: Integer;
  end;

  TSynTokenMatched = record
{$IFDEF UNISYNEDIT}
    OpenToken: UnicodeString;
    CloseToken: UnicodeString;
{$ELSE}
    OpenToken: String;
    CloseToken: String;
{$ENDIF}
    OpenTokenPos: TBufferCoord;
    CloseTokenPos: TBufferCoord;
    TokenKind: Integer;
    TokenAttri: TSynHighlighterAttributes;
  end;

{
  SynEditGetMatchingToken(Ex) returns:
  -2 : Close and open token found
  -1 : Close token found
   0 : Kind not found
  +1 : Open token found
  +2 : Open and close token found
}

function SynEditGetMatchingToken(ASynEdit: TCustomSynEdit; APoint: TBufferCoord;
  const ATokens: array of TSynTokenMatch; var AMatch: TSynTokenMatched): Integer;

function SynEditGetMatchingTokenEx(ASynEdit: TCustomSynEdit; APoint: TBufferCoord;
  const ATokens: array of TSynTokenMatch; var AMatch: TSynTokenMatched): Integer;

implementation

uses
  SysUtils;

type
  TSynTokenBuf = record
    Pos: TBufferCoord;
{$IFDEF UNISYNEDIT}
    Token: UnicodeString;
{$ELSE}
    Token: String;
{$ENDIF}
  end;

var
  FMatchStack: array of TSynTokenBuf;
  FMatchOpenDup, FMatchCloseDup: array of Integer;

function SynEditGetMatchingToken(ASynEdit: TCustomSynEdit; APoint: TBufferCoord;
  const ATokens: array of TSynTokenMatch; var AMatch: TSynTokenMatched): Integer;
var
  TokenMatch: PSynTokenMatch;
{$IFDEF UNISYNEDIT}
  Token: UnicodeString;
{$ELSE}
  Token: String;
{$ENDIF}
  TokenKind: Integer;
  Level, DeltaLevel, I, J, FMatchStackID, OpenDupLen, CloseDupLen: Integer;

  function IsOpenToken: Boolean;
  var
    X: Integer;
  begin
    for X := 0 to OpenDupLen - 1 do
      if Token = ATokens[FMatchOpenDup[X]].OpenToken then
      begin
        Result := True;
        Exit;
      end;
    Result := False
  end;

  function IsCloseToken: Boolean;
  var
    X: Integer;
  begin
    for X := 0 to CloseDupLen - 1 do
      if Token = ATokens[FMatchCloseDup[X]].CloseToken then
      begin
        Result := True;
        Exit;
      end;
    Result := False
  end;

  function CheckToken: Boolean;
  begin
    with ASynEdit.Highlighter do
    begin
      if GetTokenKind = TokenMatch^.TokenKind then
      begin
        Token := LowerCase(GetToken);
        if IsCloseToken then
          Dec(Level)
        else
          if IsOpenToken then
            Inc(Level);
      end;
      if Level = 0 then
      begin
        SynEditGetMatchingToken := 2;
        AMatch.CloseToken := GetToken;
        AMatch.CloseTokenPos.Line := APoint.Line + 1;
        AMatch.CloseTokenPos.Char := GetTokenPos + 1;
        Result := True;
      end else
      begin
        Next;
        Result := False;
      end;
    end;
  end;

  procedure CheckTokenBack;
  begin
    with ASynEdit.Highlighter do
    begin
      if GetTokenKind = TokenMatch^.TokenKind then
      begin
        Token := LowerCase(GetToken);
        if IsCloseToken then
        begin
          Dec(Level);
          if FMatchStackID >= 0 then
            Dec(FMatchStackID);
        end else
          if IsOpenToken then
          begin
            Inc(Level);
            Inc(FMatchStackID);
            if FMatchStackID >= Length(FMatchStack) then
              SetLength(FMatchStack, Length(FMatchStack) + 32);
            FMatchStack[FMatchStackID].Token := GetToken;
            FMatchStack[FMatchStackID].Pos.Line := APoint.Line + 1;
            FMatchStack[FMatchStackID].Pos.Char := GetTokenPos + 1;
          end;
      end;
      Next;
    end;
  end;

begin
  Result := 0;
  if ASynEdit.Highlighter = nil then
    Exit;
  Dec(APoint.Line);
  Dec(APoint.Char);
  with ASynEdit, ASynEdit.Highlighter do
  begin
    if APoint.Line = 0 then
      ResetRange
    else
      SetRange(TSynEditStringList(Lines).Ranges[APoint.Line - 1]);
    SetLine(Lines[APoint.Line], APoint.Line);
    while not GetEol and (APoint.Char >= GetTokenPos + Length(GetToken)) do
      Next;
    if GetEol then
      Exit;
    TokenKind := GetTokenKind;
    I := 0;
    J := Length(ATokens);
    while I < J do
    begin
      if TokenKind = ATokens[I].TokenKind then
      begin
        Token := LowerCase(GetToken);
        if Token = ATokens[I].OpenToken then
        begin
          Result := 1;
          AMatch.OpenToken := GetToken;
          AMatch.OpenTokenPos.Line := APoint.Line + 1;
          AMatch.OpenTokenPos.Char := GetTokenPos + 1;
          Break;
        end else
          if Token = ATokens[I].CloseToken then
          begin
            Result := -1;
            AMatch.CloseToken := GetToken;
            AMatch.CloseTokenPos.Line := APoint.Line + 1;
            AMatch.CloseTokenPos.Char := GetTokenPos + 1;
            Break;
          end;
      end;
      Inc(I);
    end;
    if Result = 0 then
      Exit;
    TokenMatch := @ATokens[I];
    AMatch.TokenKind := TokenKind;
    AMatch.TokenAttri := GetTokenAttribute;
    if J > Length(FMatchOpenDup) then
    begin
      SetLength(FMatchOpenDup, J);
      SetLength(FMatchCloseDup, J);
    end;
    OpenDupLen := 0;
    CloseDupLen := 0;
    for I:=0 to J -1 do
      if (TokenKind = ATokens[I].TokenKind) then
      begin
        if (TokenMatch^.OpenToken = ATokens[I].OpenToken) then
        begin
          FMatchCloseDup[CloseDupLen] := I;
          Inc(CloseDupLen);
        end;
        if (TokenMatch^.CloseToken = ATokens[I].CloseToken) then
        begin
          FMatchOpenDup[OpenDupLen] := I;
          Inc(OpenDupLen);
        end;
      end;
    if Result = 1 then
    begin
      Level := 1;
      Next;
      while True do
      begin
        while not GetEol do
          if CheckToken then
            Exit;
        Inc(APoint.Line);
        if APoint.Line >= ASynEdit.Lines.Count then
          Break;
        SetLine(Lines[APoint.Line], APoint.Line);
      end;
    end else
    begin
      if Length(FMatchStack) < 32 then
        SetLength(FMatchStack, 32);
      FMatchStackID := -1;
      Level := -1;
      if APoint.Line = 0 then
        ResetRange
      else
        SetRange(TSynEditStringList(Lines).Ranges[APoint.Line - 1]);
      SetLine(Lines[APoint.Line], APoint.Line);
      while not GetEol and (GetTokenPos < AMatch.CloseTokenPos.Char -1) do
        CheckTokenBack;
      if FMatchStackID > -1 then
      begin
        Result := -2;
        AMatch.OpenToken := FMatchStack[FMatchStackID].Token;
        AMatch.OpenTokenPos := FMatchStack[FMatchStackID].Pos;
      end else
        while APoint.Line > 0 do
        begin
          DeltaLevel := -Level - 1;
          Dec(APoint.Line);
          if APoint.Line = 0 then
            ResetRange
          else
            SetRange(TSynEditStringList(Lines).Ranges[APoint.Line - 1]);
          SetLine(Lines[APoint.Line], APoint.Line);
          FMatchStackID := -1;
          while not GetEol do
            CheckTokenBack;
          if (DeltaLevel <= FMatchStackID) then
          begin
            Result := -2;
            AMatch.OpenToken := FMatchStack[FMatchStackID - DeltaLevel].Token;
            AMatch.OpenTokenPos := FMatchStack[FMatchStackID - DeltaLevel].Pos;
            Exit;
          end;
        end;
    end;
  end;
end;

function SynEditGetMatchingTokenEx(ASynEdit: TCustomSynEdit; APoint: TBufferCoord;
  const ATokens: array of TSynTokenMatch; var AMatch: TSynTokenMatched): Integer;
begin
  Result := SynEditGetMatchingToken(ASynEdit, APoint, ATokens, AMatch);
  if (Result = 0) and (APoint.Char > 1) then
  begin
    Dec(APoint.Char);
    Result := SynEditGetMatchingToken(ASynEdit, APoint, ATokens, AMatch);
  end;
end;

initialization
  // None
finalization
  SetLength(FMatchStack, 0);
  SetLength(FMatchOpenDup, 0);
  SetLength(FMatchCloseDup, 0);
end.

