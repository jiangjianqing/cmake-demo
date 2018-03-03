//#include <iostream>

#include "stdafx.h"

#include "HalconCpp.h"  
using namespace HalconCpp;

int main(int argc, const char** argv)
{
    //std::cout << "Hello, world!\n";
	HImage img;
	//img.ReadImage("d:\\rotate.bmp");
	ReadImage(&img, "d:\\timg.jpg");
	Hlong width, height;
	img.GetImageSize(&width, &height);
	HWindow w(0, 0, 0.5*width, 0.5*height);
	img.DispImage(w);
	w.Click();
	w.ClearWindow();
	return 0;
}
