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





bool App::OnInit() 
{
	
 //================================================================================
 //                                INITIALIZATION                                //
	
 FileManager::UploadWindowConfig("App_Config.txt", G_WindowConfig);
	
 MainAppFrame = new MainFrame("My App");
	
 MainAppFrame->SetClientSize(G_WindowConfig.WindowLength, G_WindowConfig.WindowWidth);
	
	
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
	

	
	
	
 



//===============================================================================
//                                   APP EXIT                                    //
int App::OnExit()
{
	

	
 return 0;
}
  
