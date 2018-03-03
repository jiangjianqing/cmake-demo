#ifndef __ADD_H__
#define __ADD_H__  

#ifdef MathFunctions_EXPORTS
#define WIN32_API __declspec(dllexport)
#else
#define WIN32_API __declspec(dllimport)
#endif


WIN32_API double mysqrt(double x);


#endif