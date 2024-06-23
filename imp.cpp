//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "imp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	reminderTimer->Enabled = false;
}

const int MillieSecPerDay = 86400000;

//---------------------------------------------------------------------------
void __fastcall TForm1::reminderButtonClick(TObject *Sender)
{
	TDate reminderDate = reminderDate.Date;

	TTime reminderTime = reminderTime.Time;

	TDateTime reminderDateTime = reminderDate + reminderTime;

	TDateTime remainingDateTime = reminderDateTime - Now();

	double remainingDateTimeInMillieSec =
		static_cast<double>(remainingDateTime) * MillieSecPerDay;

	reminderTimer->Interval =  remainingDateTimeInMillieSec;

	reminderTimer->Enabled = true;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::reminderTimerTimer(TObject *Sender)
{
		   reminderTimer->Enabled = false;
		   ShowMessage(reminderMessage->Text);
}
//---------------------------------------------------------------------------
