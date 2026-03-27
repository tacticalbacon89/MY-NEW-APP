
#include "HomePanel.h"
#include "../Frame/MainFrame.h"



HomePanel::HomePanel(wxWindow* parent) : HomePanel_Base(parent) {



}



void HomePanel::OnCombatClick(wxCommandEvent& event) {

	MainFrame* frame = (MainFrame*)wxTheApp->GetTopWindow();

	if (frame) {
		PanelManager* m_PanelManager = frame->GetPanelManager();

		m_PanelManager->SwitchToCorePanel(PanelID::Cal_Combat);

	}
}