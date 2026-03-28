#pragma once
#include "../BasePanels/Cal_CombatPanel_Base.h"






class Cal_CombatPanel : public Cal_CombatPanel_Base {


public:
	Cal_CombatPanel(wxWindow* parent);


  void OnCal_BackButton(wxCommandEvent& event) override;

 

};