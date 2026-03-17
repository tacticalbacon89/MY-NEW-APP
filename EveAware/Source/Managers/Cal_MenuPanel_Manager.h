#pragma once


//Core
#include <wx/wx.h>
#include <memory>

//Helpers
#include "../Helpers/Enums/Enum_Cal_TopMenu.h"


//Panels
#include "UI/Panels/Cal_HomePanel.h"


class Cal_MenuPanel_Manager {

private:
	wxWindow* m_parent;
	wxSizer* m_targetSizer = nullptr;
	wxPanel* m_currentPanel = nullptr;
	



public:
	Cal_MenuPanel_Manager(wxWindow* parent, wxSizer* Menusizer): m_parent(parent), m_targetSizer(Menusizer) {
	
	};


	void SwitchMenuPanel( CalTopMenu newID) {
         
		wxSizerItem* item = m_targetSizer->GetItem(1);

		if (item && item->IsWindow()) {
			
			
		
		
		    wxPanel* newPanel = nullptr;

		    switch (newID){
		    
			case CalTopMenu::ModeSelect:newPanel = new Cal_HomePanel(m_parent);
			 break;
		     default:
			 break;
		
		     }
		     
			
			wxWindow* Oldwindow = item->GetWindow();
		
		
		
		
		
		}

		



	}





};