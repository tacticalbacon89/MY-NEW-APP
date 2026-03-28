#pragma once

//Core
#include <wx/wx.h>
#include <memory>

//Helpers

#include "../Helpers/Enums/Enum_CorePanel.h"


//Panels
#include "../UI/Panels/IntroPanel.h"
#include "../UI/Panels/Cal_CombatPanel.h"
#include "../UI/Panels/HomePanel.h"





class PanelManager{

private:
//Constructor Variables	
 wxWindow* m_Parent = nullptr;
 wxSizer* m_MainSizer = nullptr;
 //Private Variables
 PanelID m_CurrentID = PanelID::None;
 wxPanel* m_ActiveCorePanel = nullptr;


public:
	PanelManager(wxWindow* parent, wxSizer* sizer) : m_Parent(parent), m_MainSizer(sizer) {}

	void SwitchToCorePanel(PanelID id) {
	
		if (m_CurrentID == id) return;

		if (m_ActiveCorePanel) {
			m_MainSizer->Detach(m_ActiveCorePanel);
			m_ActiveCorePanel->Destroy();
			m_ActiveCorePanel=nullptr;
		}

		switch (id) {
		
	    case PanelID::None:
			break;
		case PanelID::Intro: m_ActiveCorePanel = new IntroPanel(m_Parent);
			break;
		case PanelID::Cal_Combat: m_ActiveCorePanel = new Cal_CombatPanel(m_Parent);
			break;
		case PanelID::Home: m_ActiveCorePanel = new HomePanel(m_Parent);
			break;
			default:
		    break;
			
		
		
	
	    }
	
	 m_CurrentID = id;

        if (m_ActiveCorePanel) {
			m_MainSizer->Add(m_ActiveCorePanel, 1, wxEXPAND);
	        m_Parent->Layout();
	       


        }
	
	
	
	}
	

	
	
};