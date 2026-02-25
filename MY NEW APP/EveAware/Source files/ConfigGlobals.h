#pragma once


using namespace std;




struct WindowConfig{
	
	//Wondow Configs assined with app defaults.
	int WindowLength = 800;
	int WindowWidth = 600;
	
	int WindowX = 0;
	int WindowY = 0;

	bool isMaximized = false;

};

extern WindowConfig G_WindowConfig;