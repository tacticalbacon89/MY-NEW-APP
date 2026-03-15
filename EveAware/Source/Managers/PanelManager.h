#pragma once

//Core
#include <wx/wx.h>
#include <memory>

//Enums
#include "Helpers\Enum_CorePanel.h"


//Panels
#include "UI/Panels\IntroPanel.h"
#include "UI/Panels\Cal_HomePanel.h"





class PanelManager{

private:
//Constructor Variables	
 wxWindow* m_Parent = nullptr;
 wxSizer* m_Sizer = nullptr;
 //Private Variables
 PanelID m_CurrentID = PanelID::None;
 wxPanel* m_ActiveCorePanel = nullptr;


public:
	PanelManager(wxWindow* parent, wxSizer* sizer) : m_Parent(parent), m_Sizer(sizer) {}

	void SwitchToCorePanel(PanelID id) {
	
		if (m_CurrentID == id) return;

		if (m_ActiveCorePanel) {
			m_Sizer->Detach(m_ActiveCorePanel);
			m_ActiveCorePanel->Destroy();
			m_ActiveCorePanel=nullptr;
		}

		switch (id) {
		
	    case PanelID::None:
			break;
		case PanelID::Intro:
			m_ActiveCorePanel = new IntroPanel(m_Parent);
			break;
		case PanelID::Home:
			m_ActiveCorePanel = new Cal_HomePanel(m_Parent);
			break;
			default:
		    break;
		
		
	
	    }
	
	 m_CurrentID = id;

        if (m_ActiveCorePanel) {
			m_Sizer->Add(m_ActiveCorePanel, 1, wxEXPAND);
	        m_Parent->Layout();
	       


        }
	
	
	
	}
	
	
	
	
 

};