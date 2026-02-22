#pragma once
#include "WinSettings.cpp"




class WindowSize 

{
private:
	//Declaration of the private members
	double Width;
	double Length;

public:
	//decleration of public members
	void setWidth(double);
	void setLength(double);   //Mutators

	double getWidth() const;
	double getLength() const;   //Accessors


};

