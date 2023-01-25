//---------------------------------------------------------------------------

#ifndef Unit10H
#define Unit10H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm10 : public TForm
{
__published:	// IDE-managed Components
  TEdit *Edit1;
  TButton *Button1;
  TButton *Button2;
  TButton *Button3;
  TButton *Button4;
  TButton *Button5;
  TButton *Button6;
  TButton *Button7;
  TButton *Button8;
  TButton *Button9;
  TButton *Button10;
  TButton *Button11;
  TButton *Button12;
  TButton *Button13;
  TButton *Button14;
  void __fastcall Button2Click(TObject *Sender);
  void __fastcall Button14Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
  __fastcall TForm10(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm10 *Form10;
//---------------------------------------------------------------------------
#endif
