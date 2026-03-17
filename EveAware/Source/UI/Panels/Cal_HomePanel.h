#pragma once

#include <wx/wx.h>
#include "../GladeGen/Cal_HomePanel_Base.h"






class Cal_HomePanel : public Cal_HomePanel_Base{
  
public:
	Cal_HomePanel(wxWindow* parent, wxWindowID id);
	
	
	  
	  
	wxBoxSizer* GetSizerSlot() { return HomePanelSizer; }



	 

	void SwitchMenu(wxPanel* MenuPanel);

	void SwitchContent(wxPanel* ContentPanel);

	
	
};
	  
	  
	  
	








