#pragma once
#include "../BasePanels/IntroPanel_Base.h"


class IntroPanel : public IntroPanel_Base{

public:

	IntroPanel(wxWindow* parent, wxWindowID id = wxID_ANY);

	void GetStartedClick(wxCommandEvent& event) override;


	void TutorialClick(wxCommandEvent& event) override;








};