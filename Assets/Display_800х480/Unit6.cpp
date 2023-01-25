//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
int switch_1_PRM;
int switch_2_16_PRM;
double KO_1_PRM;
double KO_2_16_PRM;
double KO_transmit;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
  : TForm(Owner)
{
}
//---------------------------------------------------------------------------
//������ "�����"
void __fastcall TForm6::Button5Click(TObject *Sender)
{
  Form3->Show();
  Form6->Close(); 
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button3Click(TObject *Sender)
{
//������ "-1" ��� 1 ���
  switch_1_PRM = StrToFloat(Form6->Edit1->Text);
  if(switch_1_PRM>0)
     switch_1_PRM--;
  Form6->Edit1->Text = IntToStr(switch_1_PRM);
}
//---------------------------------------------------------------------------
//������ "+1" ��� 1 ���
void __fastcall TForm6::Button2Click(TObject *Sender)
{
  switch_1_PRM = StrToFloat(Form6->Edit1->Text);
  if(switch_1_PRM<4)
     switch_1_PRM++;
  Form6->Edit1->Text = IntToStr(switch_1_PRM);
}
//---------------------------------------------------------------------------
//������ "-1" ��� 2-16 ���
void __fastcall TForm6::Button4Click(TObject *Sender)
{
  switch_2_16_PRM = StrToFloat(Form6->Edit2->Text);
  if(switch_2_16_PRM>0)
     switch_2_16_PRM--;
  Form6->Edit2->Text = IntToStr(switch_2_16_PRM);
}
//---------------------------------------------------------------------------
//������ "-1" ��� 2-16 ���
void __fastcall TForm6::Button6Click(TObject *Sender)
{
  switch_2_16_PRM = StrToFloat(Form6->Edit2->Text);
  if(switch_2_16_PRM<1)
     switch_2_16_PRM++;
  Form6->Edit2->Text = IntToStr(switch_2_16_PRM);
}
//---------------------------------------------------------------------------
//������ "-0,5" �� 1 ���
void __fastcall TForm6::Button7Click(TObject *Sender)
{
  KO_1_PRM = StrToFloat(Form6->Edit3->Text);
  if(KO_1_PRM>0)
     KO_1_PRM= KO_1_PRM-0.5;
  Form6->Edit3->Text = FloatToStrF(KO_1_PRM,ffFixed,3,1);
}
//---------------------------------------------------------------------------
//������ "+0,5" �� 1 ���
void __fastcall TForm6::Button8Click(TObject *Sender)
{
  KO_1_PRM = StrToFloat(Form6->Edit3->Text);
  if(KO_1_PRM<31.5)
     KO_1_PRM= KO_1_PRM+0.5;
  Form6->Edit3->Text = FloatToStrF(KO_1_PRM,ffFixed,3,1);
}
//---------------------------------------------------------------------------
//������ "-0,5" �� 2-16 ���
void __fastcall TForm6::Button9Click(TObject *Sender)
{
  KO_2_16_PRM = StrToFloat(Form6->Edit4->Text);
  if(KO_2_16_PRM>0)
     KO_2_16_PRM= KO_2_16_PRM-0.5;
  Form6->Edit4->Text = FloatToStrF(KO_2_16_PRM,ffFixed,3,1);
}
//---------------------------------------------------------------------------
//������ "+0,5" �� 2-16 ���
void __fastcall TForm6::Button10Click(TObject *Sender)
{
  KO_2_16_PRM = StrToFloat(Form6->Edit4->Text);
  if(KO_2_16_PRM<31.5)
     KO_2_16_PRM= KO_2_16_PRM+0.5;
  Form6->Edit4->Text = FloatToStrF(KO_2_16_PRM,ffFixed,3,1);
}
//---------------------------------------------------------------------------
//������ "-0,5" �� �����������
void __fastcall TForm6::Button11Click(TObject *Sender)
{
  KO_transmit = StrToFloat(Form6->Edit5->Text);
  if(KO_transmit>0)
     KO_transmit= KO_transmit-0.5;
  Form6->Edit5->Text = FloatToStrF(KO_transmit,ffFixed,3,1);
}
//---------------------------------------------------------------------------
//������ "+0,5" �� �����������
void __fastcall TForm6::Button12Click(TObject *Sender)
{
  KO_transmit = StrToFloat(Form6->Edit5->Text);
  if(KO_transmit<31.5)
     KO_transmit= KO_transmit+0.5;
  Form6->Edit5->Text = FloatToStrF(KO_transmit,ffFixed,3,1);
}
//---------------------------------------------------------------------------

