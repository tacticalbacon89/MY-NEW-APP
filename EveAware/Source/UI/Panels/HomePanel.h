#pragma once

#include "../BasePanels/HomePanel_Base.h"



class HomePanel : public HomePanel_Base
{
public:
	HomePanel(wxWindow* parent);

	void OnCombatClick(wxCommandEvent& event) override;

};

