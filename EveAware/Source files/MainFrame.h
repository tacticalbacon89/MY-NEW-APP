#pragma once
#include <wx/wx.h>
#include <memory>
#include "PanelManager.h"

class MainFrame : public wxFrame
{

private:
//================================================================================================================================//
//                                                         Private Varables                                                   //
	std::unique_ptr<PanelManager> m_PanelManager;

	




public:
	MainFrame(const wxString& title);



	void OnClose(wxCloseEvent& event);




};

