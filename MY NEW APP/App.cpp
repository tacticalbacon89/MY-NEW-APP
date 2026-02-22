#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>
#include <iostream>
#include <fstream>
#include "ConfigGlobals.h"
#include "FileManager.h"
#include <wx/display.h>


using namespace std;


//Defining what happens when the stages of my app are called 


wxIMPLEMENT_APP(App);




//test
// testing changes

//On Initlize make window and set defualt configs or User data from txt
bool App::OnInit() 
{
	
 //================================================================================
 //                                INITIALIZATION                                //
	
 FileManager::UploadWindowConfig("App_Config.txt", G_WindowConfig);
	
 MainAppFrame = new MainFrame("My App");
	
 MainAppFrame->SetClientSize(G_WindowConfig.WindowLength, G_WindowConfig.WindowWidth);
	
	// 1. Create the point from our saved data
 wxPoint savedPos(G_WindowConfig.WindowX, G_WindowConfig.WindowY);

	// ****************************************************************************//
	 //                 Checking if the saved position is valid                  //
	if (wxDisplay::GetFromPoint(savedPos) == wxNOT_FOUND) {
			
     MainAppFrame->Center();
	
	}
	   else {
		
		MainAppFrame->SetPosition(savedPos);


	    }
	
	if (G_WindowConfig.isMaximized) {
		
		MainAppFrame->Maximize();
	
	}
	
 MainAppFrame->Show();
	
 //================================================================================
 //                                    LAUNCHED                                    //
	                                
	

	
		
 return true;
}
	

	
	
	
 

//================================================================================
//                            USER REQUESTED CLOSING                            //
	void MainFrame::OnClose(wxCloseEvent & event) {

	 //********************************************************************************//
	 //                                Saving                                        //

	 FileManager::updateWindowConfig(this, G_WindowConfig);

	 FileManager::saveWindowConfig("App_Config.txt");


	 event.Skip();
	}

//===============================================================================
//                                   APP EXIT                                    //
int App::OnExit()
{
	

	
 return 0;
}
  
