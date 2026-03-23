#pragma once

#include "../BasePanels/Cal_HomePanel_Base.h"
#include ".././../Managers/Cal_MenuPanel_Manager.h"








class Cal_HomePanel : public Cal_HomePanel_Base
{
public:
	Cal_HomePanel(wxWindow* parent, wxWindowID id = wxID_ANY );
		
  std::unique_ptr <Cal_MenuPanel_Manager> m_Cal_MenuPanel_Manager;
};