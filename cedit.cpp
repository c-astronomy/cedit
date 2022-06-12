#include <iostream>
#include <wx/wxprec.h>
#include <CCfits>
#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

#include "cedit.h"


	IMPLEMENT_APP(Cedit)


bool Cedit::OnInit(){
	wxFrame *frame = new wxFrame((wxFrame*) NULL, -1, _T("Cedit"));
	frame->CreateStatusBar();
	frame->SetStatusText(_T("Hello World"));
	frame->Show(true);
	SetTopWindow(frame);

	return true;
};

	Cedit &app = ::wxGetApp();
