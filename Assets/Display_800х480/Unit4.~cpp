//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
int Freq_PRM;
int Freq_PRD;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
  : TForm(Owner)
{
}
//---------------------------------------------------------------------------
//Кнопка "Назад"
void __fastcall TForm4::Button5Click(TObject *Sender)
{
  Form2->Show();
  Form4->Close(); 
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button7Click(TObject *Sender)
{
  Freq_PRM = StrToFloat(Form4->Edit1->Text);
  Freq_PRM++;
  Form4->Edit1->Text = IntToStr(Freq_PRM);
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button6Click(TObject *Sender)
{
  Freq_PRM = StrToFloat(Form4->Edit1->Text);
  Freq_PRM--;
  Form4->Edit1->Text = IntToStr(Freq_PRM);
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button9Click(TObject *Sender)
{
  Freq_PRD = StrToFloat(Form4->Edit2->Text);
  Freq_PRD++;
  Form4->Edit2->Text = IntToStr(Freq_PRD);
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button8Click(TObject *Sender)
{
  Freq_PRD = StrToFloat(Form4->Edit2->Text);
  Freq_PRD--;
  Form4->Edit2->Text = IntToStr(Freq_PRD);
}
//---------------------------------------------------------------------------

