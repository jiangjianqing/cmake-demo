#ifndef __ADD_H__
#define __ADD_H__  

#ifdef WIN32
    #ifdef MathFunctions_EXPORTS
    #define DLLAPI __declspec(dllexport)
    #else
    #define DLLAPI __declspec(dllimport)
    #endif
#else
    #define DLLAPI extern "C"
#endif

DLLAPI double mysqrt(double x);


#endif
