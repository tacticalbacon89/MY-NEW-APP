
#include "IntroPanel.h"



IntroPanel::IntroPanel(wxWindow* parent, wxWindowID id)
	: IntroPanel_Base(parent, id)
{
	// Any extra setup goes here
}

    void IntroPanel:: GetStartedClick(wxCommandEvent& event) {
	
	wxLogMessage("Get Started Clicked");
	
	}


	void IntroPanel:: TutorialClick(wxCommandEvent& event) {
	
		wxLogMessage("Tutorial Clicked");
	

	}
