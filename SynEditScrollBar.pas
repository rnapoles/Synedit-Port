unit SynEditScrollBar;


interface
  Uses
	Classes,StdCtrls;
type

  TSynEditScrollBar = class(TScrollBar)
  public
    constructor Create(AOwner: TComponent); override;
  end;
      
implementation

constructor TSynEditScrollBar.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
//  ControlStyle := ControlStyle + [csNoFocus];
  TabStop := False;
  Visible := False;
end;
  
  
initialization

finalization

end.
