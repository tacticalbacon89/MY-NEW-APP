#pragma once


#include <string>
#include <fstream>
#include <sstream>
#include <type_traits>
#include <wx/stdpaths.h>
#include <wx/filename.h>
#include "wx/wx.h"

using namespace std;

class FileManager
{
 public:                  
    template <typename T>
 
    
    //===============================================================================================================================================   
                                                        // Scout Fuction to spacific key data from .txt
     static void GetDataUsingKey(const string& KeyWord, T& out, const string& Filename){
        
         // Open the file for reading
        ifstream file(Filename, ios::in);

        // Check if the file was opened successfully
        if (file.is_open())
        {

            file.clear();
            file.seekg(0, ios::beg); 


            // Read the file line by line
            string line;
            while (getline(file, line))
            {
                // Check if the line contains the keyword
                if (line.find(KeyWord) != string::npos)
                {
                    // Extract the value after the keyword
                    size_t start = line.find(KeyWord) + KeyWord.length() + 1;
                    size_t end = line.find(';', start);
                    if (end == string::npos) end = line.length();
                    istringstream iss(line.substr(start, end - start));

                    //Checks if iss is a bool and if it is then use boolalpha.
                    if constexpr (is_same_v<T, bool>) {
                        iss >> boolalpha >> out;

                        
                    }
                      else
                      {
                        //if not bool assigns to out at value found
                        iss >> out;
                      }
                   
                 
                 file.close();
                 return;
                }
            }
         
        }
        else {
         wxLogDebug("Error opening file in GetDataUsingKey");
        }
     
     file.close();
     }
 //=============================================================================================================================
//                                         Saving Window Config to Txt File at AppData                                         //
     static void saveWindowConfig(const string& Filename){

        
         
         wxString appDataDir = wxStandardPaths::Get().GetUserDataDir();
         wxString configFolder = appDataDir + wxFileName::GetPathSeparator() + "configs";

         

        
         
         if (!wxFileName::DirExists(configFolder)) {
            
             wxFileName::Mkdir(configFolder, wxS_DIR_DEFAULT, wxPATH_MKDIR_FULL);
        
         
         }

        
          wxString finalPath = configFolder + wxFileName::GetPathSeparator() + "App_Config.txt";
         
        
         

         
       
         ofstream outfile(finalPath.ToStdString(), ios::trunc);

        if (outfile.is_open()) {
            
            
            //Size
            outfile << "WindowLength=" << G_WindowConfig.WindowLength << ";" << endl;
            outfile << "WindowWidth=" << G_WindowConfig.WindowWidth << ";" << endl;
			
            //position
            outfile << "WindowX=" << G_WindowConfig.WindowX << ";" << endl;
			outfile << "WindowY=" << G_WindowConfig.WindowY << ";" << endl;
            outfile << "isMaximized=" << boolalpha << G_WindowConfig.isMaximized << ";" << endl;
           
            
         outfile.flush();
         outfile.close();

        }
        else {
		 wxLogDebug("Error opening file in saveWindowConfig" + finalPath);
		}
        
        
     outfile.close();
    }

  //==============================================================================================================================    
                                                     // Updating txt Window Config To global Varables
    static void updateWindowConfig(wxWindow* win, WindowConfig& G_WindowConfig) {
       if (win) {

            wxTopLevelWindow* tlw = dynamic_cast<wxTopLevelWindow*>(win);
            
            
            if (tlw){

              G_WindowConfig.isMaximized = tlw->IsMaximized();


              if (!G_WindowConfig.isMaximized) {
                  
                  
                 //Get size
                  wxSize size = win->GetSize();
                  G_WindowConfig.WindowWidth = size.y;
                  G_WindowConfig.WindowLength = size.x;

                  //Get position
                  wxPoint pos = win->GetPosition();
                  G_WindowConfig.WindowX = pos.x;
                  G_WindowConfig.WindowY = pos.y;
              }
            }
        }


    }


  //========================================================================================================================================
                                                     // Uploading Window Config from Txt File in appdata path
    
    static void UploadWindowConfig(const string& Filename,WindowConfig& ConfigRef) {

        wxString appDataDir = wxStandardPaths::Get().GetUserDataDir();
        wxString configFolder = appDataDir + wxFileName::GetPathSeparator() + "configs";
        wxString finalPath = configFolder + wxFileName::GetPathSeparator() + Filename;

        // 2. Check if the file is there before trying to open it
        if (!wxFileExists(finalPath)) {
            // File not found in AppData yet? Just return and use defaults.
            return;
        }

        ifstream file(finalPath.ToStdString());

        if (file.is_open()) {


            GetDataUsingKey("WindowLength", ConfigRef.WindowLength, finalPath.ToStdString());

            GetDataUsingKey("WindowWidth", ConfigRef.WindowWidth, finalPath.ToStdString());

            GetDataUsingKey("WindowX", ConfigRef.WindowX, finalPath.ToStdString());

            GetDataUsingKey("WindowY", ConfigRef.WindowY, finalPath.ToStdString());

            GetDataUsingKey("isMaximized", ConfigRef.isMaximized, finalPath.ToStdString());


            file.close();
		}
       
    
    }

    
     
    
//==================================================================================================================================
    
}; 







                                                   

 