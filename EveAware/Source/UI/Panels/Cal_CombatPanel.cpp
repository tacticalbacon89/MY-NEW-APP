#include "Cal_CombatPanel.h"
#include "../Frame/MainFrame.h"

Cal_CombatPanel::Cal_CombatPanel(wxWindow* parent) : Cal_CombatPanel_Base(parent) {





}

void Cal_CombatPanel::OnCal_BackButton(wxCommandEvent& event) {

	MainFrame* frame = (MainFrame*)wxTheApp->GetTopWindow();

	if (frame) {
		PanelManager* m_PanelManager = frame->GetPanelManager();

		m_PanelManager->SwitchToCorePanel(PanelID::Home);

	}

}