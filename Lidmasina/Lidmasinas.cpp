//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Lidmasinas.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForma *Forma;
//---------------------------------------------------------------------------
__fastcall TForma::TForma(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForma::Exit1Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------




