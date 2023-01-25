//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
  TLabel *Label1;
  TEdit *Edit1;
  TButton *Button1;
  TLabel *Label2;
  TEdit *Edit2;
  TButton *Button2;
  TButton *Button3;
  TButton *Button4;
  TCheckBox *CheckBox1;
  TCheckBox *CheckBox2;
  TButton *Button5;
  TButton *Button6;
  TButton *Button7;
  TButton *Button8;
  TButton *Button9;
  TLabel *Label3;
  void __fastcall Button5Click(TObject *Sender);
  void __fastcall Button7Click(TObject *Sender);
  void __fastcall Button6Click(TObject *Sender);
  void __fastcall Button9Click(TObject *Sender);
  void __fastcall Button8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
  __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
