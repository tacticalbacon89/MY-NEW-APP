#pragma once


#include <wx/wx.h>



class IntroPanel : public wxPanel
{


public:
	IntroPanel(wxWindow* parent);
 


private:

 //================================================================================================================//
	//                                           Private Varables                                                   //
	wxStaticText* m_WelcomeText;
	wxButton* m_StartButton;
	

	//================================================================================================================//
	//                                             Private Functions                                                   //

	void OnStartButtonClicked(wxCommandEvent& event);



};