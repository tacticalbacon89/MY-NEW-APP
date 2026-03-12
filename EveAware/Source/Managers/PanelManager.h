#pragma once

#include <wx/wx.h>
#include <memory>
#include "Helpers\PanelDef.h"


//Panels
#include "UI/Panels\IntroPanel.h"
#include "UI/Panels\Cal_HomePanel.h"





class PanelManager{

private:
 wxWindow* m_Parent;
 wxSizer* m_Sizer;
 PanelID m_Current = PanelID::None;
 wxPanel* m_ActivePanel = nullptr;


public:
	PanelManager(wxWindow* parent, wxSizer* sizer) : m_Parent(parent), m_Sizer(sizer) {}

	void Switchto(PanelID id) {
	
		if (m_Current == id) return;

		if (m_ActivePanel) {
			m_Sizer->Detach(m_ActivePanel);
			m_ActivePanel->Destroy();
			m_ActivePanel=nullptr;
		}

		switch (id) {
		
	    case PanelID::None:
			break;
		case PanelID::Intro:
			m_ActivePanel = new IntroPanel(m_Parent);
			break;
		case PanelID::Home:
			m_ActivePanel = new Cal_HomePanel(m_Parent);
			break;
			default:
		    break;
		
		
	
	    }
	
	 m_Current = id;

        if (m_ActivePanel) {
			m_Sizer->Add(m_ActivePanel, 1, wxEXPAND);
	        m_Parent->Layout();
	       


        }
	
	
	
	}
	
	
	
	
 

};