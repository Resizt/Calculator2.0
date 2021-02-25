#include "Header.h"
#include <iostream>
#include <math.h>

int calculate::Results(int choice, int num1, int num2)
{
	switch(choice) {
	case 1:
		return num1 + num2;
	case 2:
		return num1 - num2;
	case 3:
		return num1 * num2;
	case 4:
		return num1 / num2;
	case 5:
		return(sin(num1));
	case 6:
		return(cos(num1));
	case 7:
		return(tan(num1));
	case 8:
		return(atan(num1));
	case 9:
		return(acosh(num1));
	case 10:
		return(acos(num1));
	}
}