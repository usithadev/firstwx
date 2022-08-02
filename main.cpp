#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class MyApp : public wxApp
{
public:
	virtual bool OnInit();
};

class MyFrame : public wxFrame
{
public:
	MyFrame();
private:
	void OnHello(wxCommandEvent& evt);
	void OnExit(wxCommandEvent& evt);
	void OnAbout(wxCommandEvent& evt);
};

wxIMPLEMENT_APP(MyApp);

enum U_EVENT_ID
{
	ID_Hello = 1,
};

bool MyApp::OnInit()
{
	MyFrame *frm = new MyFrame();
	frm->Show();
	return true;
}

MyFrame::MyFrame() : wxFrame(nullptr, wxID_ANY, "Usitha Indeewara")
{
	SetIcon(wxICON(appicon));

	wxMenu *fileMenu = new wxMenu;
	fileMenu->Append(ID_Hello, "&Hello", "Get hello by Usitha");
	fileMenu->Append(wxID_EXIT);

	wxMenu *aboutMenu = new wxMenu;
	aboutMenu->Append(wxID_ABOUT);

	wxMenuBar *menuBar = new wxMenuBar();
	menuBar->Append(fileMenu, "&File");
	menuBar->Append(aboutMenu, "&Help");

	SetMenuBar(menuBar);

	CreateStatusBar();
	SetStatusText("Hello! I am Usitha Indeewara");

	Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
	Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
	Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);

}

void MyFrame::OnHello(wxCommandEvent& evt)
{
	wxMessageBox("Hello! I am Usitha!", "HELLO");
}

void MyFrame::OnAbout(wxCommandEvent& evt)
{	
	wxMessageBox("Hello!\nI am Usitha visit https://github.com/usithadev or \nhttps://usithadev.herokuapp.com for more,");
}

void MyFrame::OnExit(wxCommandEvent& evt)
{
	Close(true);
}

