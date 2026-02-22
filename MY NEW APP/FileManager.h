#pragma once


#include <string>
#include <fstream>
#include <sstream>
#include <type_traits>
#include "wx/wx.h"

using namespace std;

class FileManager
{
 public:                  
    template <typename T>
 
    
    //===============================================================================================================================================   
                                                        // Scout Fuction to get data from txt
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
//                                         Saving Window Config to a chosen Txt File                                         //
     static void saveWindowConfig(const string& Filename){

        ofstream outfile(Filename, ios::trunc);

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
		 wxLogDebug("Error opening file in saveWindowConfig");
		}
        
        
     outfile.close();
    }

  //==============================================================================================================================    
                                                     // Updating Window Config To Varable
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
                                                     // Uploading Window Config from a chosen Txt File
    
    static void UploadWindowConfig(const string& Filename,WindowConfig& ConfigRef) {
    
    GetDataUsingKey("WindowLength", ConfigRef.WindowLength, Filename);
	
    GetDataUsingKey("WindowWidth", ConfigRef.WindowWidth, Filename);
	
    GetDataUsingKey("WindowX", ConfigRef.WindowX, Filename);
	
    GetDataUsingKey("WindowY", ConfigRef.WindowY, Filename);

	GetDataUsingKey("isMaximized", ConfigRef.isMaximized, Filename);
    
    
     }


//==================================================================================================================================



};


                                                   

 