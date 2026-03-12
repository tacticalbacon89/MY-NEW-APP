#pragma once
#include <wx/wx.h>
#include <memory>
#include "Managers\PanelManager.h"

class MainFrame : public wxFrame
{



public:
	MainFrame(const wxString& title, PanelManager* m_PanelManager);
	
	
	std::unique_ptr<PanelManager> m_PanelManager;
	
	
	
	



	void OnClose(wxCloseEvent& event);




};

