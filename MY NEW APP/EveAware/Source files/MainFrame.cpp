#include "MainFrame.h"
#include <wx/wx.h>
#include <iostream>
#include <fstream>
#include "ConfigGlobals.h"
#include "FileManager.h"


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
	this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnClose, this);



    m_IntroPanel = new IntroPanel(this);

    // The Frame organizes its own "Room"
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
    sizer->Add(m_IntroPanel, 1, wxEXPAND);
    SetSizer(sizer);
}

//================================================================================
//                            USER REQUESTED CLOSING                            //
void MainFrame::OnClose(wxCloseEvent& event) {

	//********************************************************************************//
	//                                Saving                                        //

	FileManager::updateWindowConfig(this, G_WindowConfig);

	FileManager::saveWindowConfig("App_Config.txt");


	event.Skip();
}





