#include "Cal_CorePanel.h"
#include "../Frame/MainFrame.h"

Cal_CorePanel::Cal_CorePanel(wxWindow* parent) : Cal_CorePanel_Base(parent) {





}

void Cal_CorePanel::OnCal_BackButton(wxCommandEvent& event) {

	MainFrame* frame = (MainFrame*)wxTheApp->GetTopWindow();

	if (frame) {
		PanelManager* m_PanelManager = frame->GetPanelManager();

		m_PanelManager->SwitchToCorePanel(PanelID::Home);

	}

} //a