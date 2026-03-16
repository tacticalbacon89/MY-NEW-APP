#pragma once
#include <wx/wx.h>
#include <memory>
#include "Managers\CorePanelManager.h"

class MainFrame : public wxFrame
{



public:
	
	PanelManager* GetPanelManager() { return m_PanelManager.get(); }
	
	MainFrame(const wxString& title);
	

    void OnClose(wxCloseEvent& event);


private:
	
	std::unique_ptr<PanelManager> m_PanelManager;
	
	
	
	



	




};

