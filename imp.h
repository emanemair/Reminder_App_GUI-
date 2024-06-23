//---------------------------------------------------------------------------

#ifndef impH
#define impH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.DateTimeCtrls.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TTimeEdit *reminderTime;
	TDateEdit *reminderDate;
	TEdit *reminderMessage;
	TButton *reminderButton;
	TTimer *reminderTimer;
	void __fastcall reminderButtonClick(TObject *Sender);
	void __fastcall reminderTimerTimer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
