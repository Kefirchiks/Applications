//---------------------------------------------------------------------------

#ifndef DataModuleH
#define DataModuleH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Bde.DBTables.hpp>
#include <Data.DB.hpp>
//---------------------------------------------------------------------------
class TDataModule2 : public TDataModule
{
__published:	// IDE-managed Components
	TDataSource *LidmasinaDS;
	TTable *Lidmasina;
	TTable *LidojumuRegistrs;
	TTable *Pasazieris;
	TDataSource *LidojumuRegistrsDS;
	TDataSource *PasazierisDS;
	TAutoIncField *LidmasinaID;
	TStringField *LidmasinaLidmasinasNr;
	TStringField *LidmasinaTips;
	TFloatField *LidmasinaVietuSkaits;
private:	// User declarations
public:		// User declarations
	__fastcall TDataModule2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule2 *DataModule2;
//---------------------------------------------------------------------------
#endif
