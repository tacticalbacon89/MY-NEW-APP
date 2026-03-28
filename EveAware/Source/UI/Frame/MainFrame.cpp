//Core
#include "MainFrame.h"
#include <wx/wx.h>
#include <iostream>
#include <fstream>

//Helpers
#include "../../Helpers/Enums/Enum_CorePanel.h"
#include "../../Helpers/Globals/ConfigGlobals.h"

//Managers
#include "../../Managers/FileManager.h"
#include "../../Managers/CorePanelManager.h"



MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
	auto* Mainsizer = new wxBoxSizer(wxVERTICAL);

	m_PanelManager = std::make_unique<PanelManager>(this, Mainsizer);
	
   SetSizer(Mainsizer);
	
   m_PanelManager->SwitchToCorePanel(PanelID::Home);

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





