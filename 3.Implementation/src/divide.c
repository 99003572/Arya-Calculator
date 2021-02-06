#include "header.h"

int division(int num1,int num2)
{
	int divide;
	if(num2==0)
		return 0;
	else
	{
		divide = num1/num2;
		return divide;
	}
}