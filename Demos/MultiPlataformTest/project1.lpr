program project1;

{$mode objfpc}{$H+}

uses
  {$IFDEF UNIX}{$IFDEF UseCThreads}
  cthreads,
  {$ENDIF}{$ENDIF}
  Interfaces, // this includes the LCL widgetset
  Forms, Unit1, SynHighlighterWeb, SynHighlighterWebData, SynHighlighterWebMisc,
  SynTokenMatch, LResources
  { you can add units after this };

{$IFDEF WINDOWS}{.$R project1.rc}{$ENDIF}

begin
  {.$I project1.lrs}
  Application.Title:='';
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.

