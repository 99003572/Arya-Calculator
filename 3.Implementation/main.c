#include "header.h"
#include "test.h"
#include <stdio.h>

int main()
{
	int select, no1, no2;
	int number1,number2;
	printf("press 1 to add two numbers\npress 2 to subtract two numbers\npress 3 to multiply two numbers\n");
	printf("press 4 to divide two numbers\npress 5 to find modulus\n");
	printf("press 6 to find exponential\npress 7 to find factorial of a numbers\n");
	printf("press 8 to find percentage\npress 9 to find percentage of a numbers\n ");
	scanf("%d", &select);
    switch(select)
    {
        case 1:  {
            printf( "Enter first operand(int)\n");
	        scanf("%d",&number1);
	        printf("Enter second operand(int)\n");
	        scanf("%d",&number2);
	        printf("Result is %d",add(number1,number2));
	        break;
        }
    
	case 2: {
            printf( "Enter first operand\n");
	        scanf("%d",&number1);
	        printf("Enter second operand\n");
	        scanf("%d",&number2);
	        printf("Result is %d",subtract(number1,number2));
	        break;
    	}
			
	case 3: {
            printf( "Enter first operand\n");
	        scanf("%d",&number1);
	        printf("Enter second operand\n");
	        scanf("%d",&number2);
	        printf("Result is %d",multiply(number1,number2));
	        break;
        }

	case 4: {
            printf( "Enter first operand(int)\n");
	        scanf("%d",&number1);
	        printf("Enter second operand(int)\n");
	        scanf("%d",&number2);
		while(number2==0)
		{
		  	printf("Enter second operand(int/float) other than zero\n");
		}
	        printf("Result is %d",division(number1,number2));
	        break;
        }
			
	case 5: {
            printf( "Enter first operand\n");
	        scanf("%d",&no1);
	        printf("Enter second operand\n");
	        scanf("%d",&no2);
	        printf("Result is %d",modulus(no1,no2));
	        break;
        }

	case 6: {
            printf("Enter a base number(int): ");
	        scanf("%d",&number1);
	        printf("Enter exponent(int)\n");
	        scanf("%d",&number2);
	        printf("Result is %Lf",exponential(number1,number2));
	        break;
    	}

	case 7:  {
            printf("Enter a number\n");
	        scanf("%d",&no1);
	        printf("Result is %d",factorial(no1));
	        break;
	}

	case 8:  {
            printf("Enter a number\n");
	        scanf("%d",&number1);
	        printf("Result is %d",square(number1));
	        break;
    	}

	case 9:  {
            printf( "Enter first operand\n");
	        scanf("%d",&number1);
	        printf("Enter second operand\n");
	        scanf("%d",&number2);
	        printf("Result is %d",percentage(number1,number2));
	        break;
    	}
		
    	case 10: 
		printf("Invalid choice");
		    break;
			 
	}
    test_main(); 
    return 0;
}
