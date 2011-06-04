// OCC_3dDoc.cpp: implementation of the OCC_3dDoc class.
//
//////////////////////////////////////////////////////////////////////

#include <stdafx.h>
#include "OCC_3dDoc.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

OCC_3dDoc::OCC_3dDoc()
{

	myCResultDialog.Create(CResultDialog::IDD,NULL);
	
	RECT dlgrect;
	myCResultDialog.GetWindowRect(&dlgrect);
	LONG width = dlgrect.right-dlgrect.left;
	LONG height = dlgrect.bottom-dlgrect.top;
	
	RECT MainWndRect;
	AfxGetApp()->m_pMainWnd->GetWindowRect(&MainWndRect);
	LONG left = MainWndRect.left+3;
	LONG top = MainWndRect.top + 112;
	
	myCResultDialog.MoveWindow(left,top,width,height);

}

OCC_3dDoc::~OCC_3dDoc()
{

}

void OCC_3dDoc::PocessTextInDialog(char* aTitle, TCollection_AsciiString& aMessage)
{
//    aMessage+= "-------------------------------- END ----------------------------------------\n";
	CString text(aMessage.ToCString());
    myCResultDialog.SetTitle(CString(aTitle));
    myCResultDialog.SetText(text);
    SetTitle(CString(aTitle));

}

void OCC_3dDoc::ClearDialog()
{
    myCResultDialog.Empty();
}

void OCC_3dDoc::AddTextInDialog(TCollection_AsciiString& aMessage)
{
	CString TextToAdd(aMessage.ToCString());
	CString CurrentText;
	myCResultDialog.GetText(CurrentText);

	CString Text;
	Text = TextToAdd + CurrentText;

    myCResultDialog.SetText(Text);

}

CString OCC_3dDoc::GetDialogText()
{
	CString CurrentText;
	myCResultDialog.GetText(CurrentText);

	return CurrentText;

}

void OCC_3dDoc::SetDialogTitle(TCollection_AsciiString theTitle)
{
    myCResultDialog.SetTitle(CString(theTitle.ToCString()));
}
