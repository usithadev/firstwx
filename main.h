#ifndef MAIN_H
#define MAIN_H

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

class MyApp : public wxApp
{
public:
	virtual bool OnInit();
};


wxDECLARE_APP(MyApp)

class MyFrame : public wxFrame
{
public:
	MyFrame();
private:
	void OnHello(wxCommandEvent& evt);
	void OnExit(wxCommandEvent& evt);
	void OnAbout(wxCommandEvent& evt);
};

enum U_EVENT_ID
{
	ID_Hello = 1,
};

#endif // MAIN_H