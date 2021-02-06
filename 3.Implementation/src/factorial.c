#include "header.h"

int factorial(int num1)
{
	int dummy=0;
	long fact = 1;
	if(num1 < 0)
	{
		printf("Enter positive number\n");
	}
	else
	{ 
	       for(dummy=1;dummy<=num1;dummy++)
	       {
		    fact=fact*dummy;
           	}
	       return fact;
	}
}