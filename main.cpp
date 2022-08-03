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

MyFrame::MyFrame() : wxFrame(nullptr, wxID_ANY, "Usitha's wxWidgets Hello World :)")
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

