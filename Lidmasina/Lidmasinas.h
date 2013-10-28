//---------------------------------------------------------------------------

#ifndef LidmasinasH
#define LidmasinasH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForma : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *Menu;
	TMenuItem *File1;
	TMenuItem *Exit1;
	TDBNavigator *DBNavigator1;
	TDBGrid *DBGrid1;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	void __fastcall Exit1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForma(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForma *Forma;
//---------------------------------------------------------------------------
#endif
