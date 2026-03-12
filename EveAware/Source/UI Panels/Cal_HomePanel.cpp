
#include "Cal_HomePanel.h"



Cal_HomePanel::Cal_HomePanel(wxWindow* parent, wxWindowID id) : Cal_HomePanel_Base(parent, id) {}





void Cal_HomePanel::SwitchMenu(wxPanel* MenuPanel) {

	wxSizer* TargetSizer = m_TopMenuPanel->GetSizer();
	
	
	
	if (TargetSizer) {

		TargetSizer->Clear(true);

		TargetSizer->Add(MenuPanel, 1, wxEXPAND);
	
	
	   m_TopMenuPanel->Layout();
	   this->Layout();
	}
	
}
	




void Cal_HomePanel::SwitchContent(wxPanel* ContentPanel) {


	wxSizer* TargetSizer = m_ContentPanel->GetSizer();


	if (TargetSizer) {

		TargetSizer->Clear(true);

		TargetSizer->Add(ContentPanel, 1, wxEXPAND);
		
		
		m_ContentPanel->Layout();
		this->Layout();
	}
}