#include <iostream>
#include <stdio.h>  //for fprintf stdout
#include <stdlib.h> //for atof
#include "TutorialConfig.h"

#ifdef USE_MYMATH
#include "MathFunctions.h"
#endif
using namespace std;

int main(int argc, char *argv[]) {

	fprintf(stdout,"%s Version %d.%d\n",
            argv[0],
            Tutorial_VERSION_MAJOR,
            Tutorial_VERSION_MINOR);

	cout<<"HelloWorld"<<endl;

	double inputValue = argc > 1 ? atof(argv[1]) : 3;
 
#ifdef USE_MYMATH
	double outputValue = mysqrt(inputValue);
#else
	double outputValue = sqrt(inputValue);
#endif

	fprintf(stdout,"The square root of %g is %g\n",
          inputValue, outputValue);

	//提示按任意键退出
	//system("pause");

	return 0;

}
