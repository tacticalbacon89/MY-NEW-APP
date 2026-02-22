#include "IntroPanel.h"
#include <wx/wx.h>




IntroPanel::IntroPanel(wxWindow* parent) : wxPanel(parent, wxID_ANY)
{
    // Build the Welcome Text (The "Sign")
    m_WelcomeText = new wxStaticText(this, wxID_ANY, "Welcome to my App?");

    // Build the Start Button (The "Switch")
    m_StartButton = new wxButton(this, wxID_ANY, "Get Started");

    // WIRE THEM UP (The "Solder")
    m_StartButton->Bind(wxEVT_BUTTON, &IntroPanel::OnStartButtonClicked, this);

    // ORGANIZE THEM (The "Stage Manager")
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
    
    sizer->AddStretchSpacer(1);
    sizer->Add(m_WelcomeText, 0, wxALL | wxALIGN_CENTER, 20);
    sizer->Add(m_StartButton, 0, wxALL | wxALIGN_CENTER, 10);
    sizer->AddStretchSpacer(1);
    
    
    this->SetSizer(sizer);
}


void IntroPanel::OnStartButtonClicked(wxCommandEvent& event) {



	wxLogMessage("Start Button Clicked");

}

