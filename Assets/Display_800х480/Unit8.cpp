//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit7.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
  : TForm(Owner)
{
}
//---------------------------------------------------------------------------
//Êíîïêà "Íàçàä"
void __fastcall TForm8::Button5Click(TObject *Sender)
{
  Form7->Show();
  Form8->Close();
}
//---------------------------------------------------------------------------
//Êíîïêà "ÀÂÀÐ"
void __fastcall TForm8::Button1Click(TObject *Sender)
{
  Form9->Show();
  Form8->Close();
}
//---------------------------------------------------------------------------
