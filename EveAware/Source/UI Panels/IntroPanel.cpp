
//Core
#include <wx/wx.h>

//Panels
#include "IntroPanel.h"
#include "../Managers/PanelManager.h"
#include "../Helpers/PanelDef.h"
#include "../UI Frame/MainFrame.h"



IntroPanel::IntroPanel(wxWindow* parent, wxWindowID id)
	: IntroPanel_Base(parent, id)
{
	// Any extra setup goes here
}

void IntroPanel::GetStartedClick(wxCommandEvent& event) {

	MainFrame* frame = (MainFrame*)wxTheApp->GetTopWindow();

	if (frame) {
		PanelManager* m_PanelManager = frame->GetPanelManager();

		m_PanelManager->Switchto(PanelID::Home);

	}
}


	void IntroPanel:: TutorialClick(wxCommandEvent& event) {
	
		wxLogMessage("Tutorial Clicked");
	

	}
