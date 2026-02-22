#pragma once
#include <wx/wx.h>
#include "IntroPanel.h"

class MainFrame : public wxFrame
{

private:
//================================================================================================================================//
//                                                         Private Varables                                                   //
	IntroPanel* m_IntroPanel;




public:
	MainFrame(const wxString& title);



	void OnClose(wxCloseEvent& event);




};

