#include "MainFrame.h"
#include <wx/wx.h>
#include <iostream>
#include <fstream>
#include "Helpers\ConfigGlobals.h"
#include "Managers\FileManager.h"
#include "Managers\PanelManager.h"


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
	auto* sizer = new wxBoxSizer(wxVERTICAL);

	m_PanelManager = std::make_unique<PanelManager>(this, sizer);
	
   SetSizer(sizer);
	
   m_PanelManager->SwitchToCorePanel(PanelID::Intro);

	this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnClose, this);

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





