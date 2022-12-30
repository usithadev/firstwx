/**
 * @file main.cpp
 * @author Usitha Indeewara (https://github.com/usithadev)
 * @brief The forward declarations of classes, member functions in main.h
 * @version 0.1
 * @date 2022-08-03
 * 
 * @copyright Copyright (c) 2022 Usitha Indeewara.
 * 
 */

#include "main.h"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
	MyFrame *frm = new MyFrame();
	frm->Show();
	return true;
}

MyFrame::MyFrame() : wxFrame(nullptr, wxID_ANY, "wxWidgets Hello World GUI")
{
#if WIN32
	SetIcon(wxICON(appicon));
#endif // WIN32

	wxMenu *fileMenu = new wxMenu;
	fileMenu->Append(ID_Hello, "&Hello", "Say hello to the world!");
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
	wxLogMessage("Hello World!!!");
}

void MyFrame::OnAbout(wxCommandEvent& evt)
{	
	wxMessageBox("This is a simple C++ GUI app made using wxWidgets. \nNote that using this software, you agree to use this software under the terms of GPL-3.0 License.\
	Visit https://github.com/usithadev for more like this or to get the source code.");
}

void MyFrame::OnExit(wxCommandEvent& evt)
{
	Close(true);
}

