// **************************************************************************************
// *** User configuration section --------------------------------------------------- ***
// **************************************************************************************

{.$DEFINE UNISYNEDIT}     // Enable SynWeb Unicode version. Comment/delete this line
                         // to switch SynWeb into ANSI-Version

{$DEFINE SYNWEB_FIXNULL} // Fix lines containing #0 character (#0 goes into #32).
                         // Temporary workaround to fix parsing
                         // lines containing #0 character.

// **************************************************************************************
// *** SynWeb compiler directives. Do NOT change, unless you know what are you doing! ***
// **************************************************************************************

{$I ..\Synedit\SynEdit.inc}

{$IFDEF FPC}
  {$ASMMODE INTEL}
{$ENDIF}

// Debug
{.$DEFINE DEBUG}

{$IFNDEF DEBUG}
  // Turn off Overflow checking
  {$Q-}

  // Turn off Range checking
  {$R-}
{$ENDIF}

// Turn on Boolean short-circuit evaluation
{$B-}
