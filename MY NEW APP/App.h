#pragma once
#include <wx/wx.h>



class MainFrame;


class App : public wxApp

{
	//My App Will be able to Initilize, Exit, Run. 
	bool OnInit() override;
	int OnExit() override;
	
	void OnClose(wxCloseEvent& event);

private:
	MainFrame* MainAppFrame;
};


