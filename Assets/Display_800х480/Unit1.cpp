//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include <SysUtils.hpp>


//******************* Rx Data Var **************************

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//Êíîïêà "ÌÖÎ"
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  Form2->Show();
}
//---------------------------------------------------------------------------
//Êíîïêà "ßÓ"
void __fastcall TForm1::Button2Click(TObject *Sender)
{
  Form3->Show();
}
//---------------------------------------------------------------------------


