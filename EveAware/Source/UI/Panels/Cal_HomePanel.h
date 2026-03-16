#pragma once

#include <wx/wx.h>
#include "../GladeGen/Cal_HomePanel_Base.h"






class Cal_HomePanel : public Cal_HomePanel_Base{
  
public:
	
	wxBoxSizer* GetSizerSlot() { return HomePanelSizer; }
	
	  
	  
	  Cal_HomePanel(wxWindow* parent, wxWindowID id);

	 

	void SwitchMenu(wxPanel* MenuPanel);

	void SwitchContent(wxPanel* ContentPanel);

	
	
};
	  
	  
	  
	








