
#include "Cal_HomePanel.h"
#include "../../Managers/Cal_MenuPanel_Manager.h"



Cal_HomePanel::Cal_HomePanel(wxWindow* parent, wxWindowID id) : Cal_HomePanel_Base(parent, id) {

	m_Cal_MenuPanel_Manager = std::make_unique<Cal_MenuPanel_Manager>(this);
}