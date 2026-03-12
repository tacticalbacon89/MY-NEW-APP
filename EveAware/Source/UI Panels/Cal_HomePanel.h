#pragma once

#include <wx/wx.h>
#include "../GladeGen/Cal_HomePanel_Base.h"






class Cal_HomePanel : public Cal_HomePanel_Base{
  
public:
	 Cal_HomePanel(wxWindow* parent, wxWindowID id = wxID_ANY);

	void SwitchMenu(wxPanel* MenuPanel);

	void SwitchContent(wxPanel* ContentPanel);

	

};
	  
	  
	  
	








