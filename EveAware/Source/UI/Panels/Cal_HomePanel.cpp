
#include "Cal_HomePanel.h"



Cal_HomePanel::Cal_HomePanel(wxWindow* parent, wxWindowID id) : Cal_HomePanel_Base(parent, id) {}





void Cal_HomePanel::SwitchMenu(wxPanel* MenuPanel) {

	wxSizer* TargetSizer = Cal_MenuPanel->GetSizer();
	
	
	
	if (TargetSizer) {

		TargetSizer->Clear(true);

		TargetSizer->Add(MenuPanel, 1, wxEXPAND);
	
	
	   Cal_MenuPanel->Layout();
	   this->Layout();
	}
	
}
	




void Cal_HomePanel::SwitchContent(wxPanel* ContentPanel) {


	wxSizer* TargetSizer = Cal_ContentPanel->GetSizer();


	if (TargetSizer) {

		TargetSizer->Clear(true);

		TargetSizer->Add(ContentPanel, 1, wxEXPAND);
		
		
		Cal_ContentPanel->Layout();
		this->Layout();
	}
}