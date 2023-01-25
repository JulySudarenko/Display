//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit10.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
int znachenie = 0;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
  : TForm(Owner)
{
}
//---------------------------------------------------------------------------
//Клавишва "Очистить"
void __fastcall TForm10::Button2Click(TObject *Sender)
{
  Form10->Edit1->Text = " ";
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Button14Click(TObject *Sender)
{
  Form4->Show();
  Form10->Close();  
}
//---------------------------------------------------------------------------
