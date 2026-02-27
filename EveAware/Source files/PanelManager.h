#pragma once

#include <wx/wx.h>
#include <memory>
#include "PanelDef.h"


//Panels
#include "IntroPanel.h"//test
#include "HomePanel.h"//test





class PanelManager{

private:
 wxWindow* m_Parent;
 wxSizer* m_Sizer;
 PanelID m_Current = PanelID::None;
 std::unique_ptr<wxPanel> m_ActivePanel;


public:
	PanelManager(wxWindow* parent, wxSizer* sizer) : m_Parent(parent), m_Sizer(sizer) {}

	void Switchto(PanelID id) {
	
		if (m_Current == id) return;

		m_ActivePanel.reset();
		m_Sizer->Clear();

		switch (id) {
		
	    case PanelID::None:
			break;
		case PanelID::Intro:
			m_ActivePanel = std::make_unique<IntroPanel>(m_Parent);
			break;
			default:
		    break;
		
		
	
	    }
	
	 m_Current = id;

        if (m_ActivePanel) {
			m_Sizer->Add(m_ActivePanel.get(), 1, wxEXPAND);
	        m_ActivePanel->Show();
	        m_Parent->Layout();


        }
	
	
	
	}
	
	
	
	
 

};