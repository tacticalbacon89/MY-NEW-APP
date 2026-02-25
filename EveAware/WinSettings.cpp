#include "WinSettings.h"


void WindowSize::setLength(double l)
{
	Length = l;
}

void WindowSize::setWidth(double w)
{
	Width = w;
}


double WindowSize::getLength() const 
{
	return Length;
}

double WindowSize::getWidth() const
{
	return Width;
}


