#include <iostream>
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

class Cedit : public wxApp
{
	public:
		virtual bool OnInit();
};
	DECLARE_APP(Cedit)	
	//IMPLEMENT_APP(Cedit)

bool Cedit::OnInit(){
	wxFrame *frame = new wxFrame((wxFrame*) NULL, -1, _T("Hello wxWidgets World"));
	frame->CreateStatusBar();
	frame->SetStatusText(_T("Hello World"));
	frame->Show(true);
	SetTopWindow(frame);

	return true;
};

	
	IMPLEMENT_APP(Cedit)


/*
int main (){


	Cedit &app = ::wxGetApp();

	std::cout << "Test3" << '\n';
}
*/
