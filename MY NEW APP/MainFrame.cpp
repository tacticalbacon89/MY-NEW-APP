#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
	this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnClose, this);



    m_IntroPanel = new IntroPanel(this);

    // The Frame organizes its own "Room"
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
    sizer->Add(m_IntroPanel, 1, wxEXPAND);
    SetSizer(sizer);
}





