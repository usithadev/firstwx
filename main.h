/**
 * @file main.h
 * @author Usitha Indeewara (https://github.com/usithadev)
 * @brief Declared classes and enums
 * @version 0.1
 * @date 2022-08-03
 * 
 * @copyright Copyright (c) 2022 Usitha Indeewara.
 * 
 */

#ifndef MAIN_H
#define MAIN_H

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

/**
 * @brief The wxWidgets App class. Inherted from wxApp class
 */
class MyApp : public wxApp
{
public:
    /**
     * @brief The wxWidgets application entry function.
     * 
     * @return true 
     */
	virtual bool OnInit();
};


wxDECLARE_APP(MyApp);

/**
 * @brief The main window frame class. Inherted from wxFrame
 * 
 */
class MyFrame : public wxFrame
{
public:
    
	/**
	 * @brief Construct a new My Frame object
	 */
	MyFrame();
private:
    
	/**
	 * @brief This method opens a new dialog(wxMessageBox) to say hello.
	 * 
	 * @param evt This will be assigned by wxWidgets
	 */
	void OnHello(wxCommandEvent& evt);

	/**
	 * @brief Exit from the app. Uses wxID_EXIT standerd ID.
	 * 
	 * @param evt This will be assigned by wxWidgets
	 */
	void OnExit(wxCommandEvent& evt);

	/**
	 * @brief Shows about dialog
	 * 
	 * @param evt This will be assigned by wxWidgets
	 */
	void OnAbout(wxCommandEvent& evt);
};

/**
 * @brief Stores custom event IDs

 */
enum U_EVENT_ID
{
	ID_Hello = 1,
};

#endif // MAIN_H

/**
 * @mainpage FirstWX
 * This is a simple C++ Hello World GUI application that uses wxWidgets. This is the reference documentation of that.
 * See https://github.com/usithadev/firstwx and see README.md for build instructions. Star the repo if you like. Thank you. :)
 * @author Usitha Indeewara
 */