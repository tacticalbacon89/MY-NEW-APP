#pragma once
#include "../BasePanels/Cal_CorePanel_Base.h"






class Cal_CorePanel : public Cal_CorePanel_Base {


public:
	Cal_CorePanel(wxWindow* parent);


  void OnCal_BackButton(wxCommandEvent& event) override;

 

};