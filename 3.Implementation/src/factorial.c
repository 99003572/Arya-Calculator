#include "header.h"

int factorial(int num1)
{
	int temp;
	long fact = 1;
	if(num1 < 0){
		printf("Enter positive number\n");
	}
	else
	{ 
	       for(temp=1;temp<=num1;temp++)
	       {
		    fact=fact*temp;
           }
	       return fact;
	}
}
