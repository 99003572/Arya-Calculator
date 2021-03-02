#include "header.h"
#include "test.h"
#include <stdio.h>

int main()
{
	int select;
    float number1,number2;
    printf("press 1 to add two numbers\npress 2 to subtract two numbers\npress 3 to multiply two numbers\n");
    printf("press 4 to divide two numbers\npress 5 to find modulus\n");
    printf("press 6 to find exponential\npress 7 to find factorial of a numbers\n");
	printf("press 8 to find percentage\npress 9 to find percentage of a numbers\n ");
    scanf("%d", &select);
    switch(select)
    {
        case 1:  {
            printf( "Enter first operand(int/float)\n");
	        scanf("%f",&number1);
	        printf("Enter second operand(int/float)\n");
	        scanf("%f",&number2);
	        printf("Result is %lf",add(number1,number2));
	        break;
        }
    
		case 2: {
            printf( "Enter first operand\n");
	        scanf("%f",&number1);
	        printf("Enter second operand\n");
	        scanf("%f",&number2);
	        printf("Result is %f",subtract(number1,number2));
	        break;
    	}
			
		case 3: {
            printf( "Enter first operand\n");
	        scanf("%f",&number1);
	        printf("Enter second operand\n");
	        scanf("%f",&number2);
	        printf("Result is %f",multiply(number1,number2));
	        break;
        }

		case 4: {
            printf( "Enter first operand(int/float)\n");
	        scanf("%f",&number1);
	        printf("Enter second operand(int/float)\n");
	        scanf("%f",&number2);
		while(number2==0)
		{
		  	printf("Enter second operand(int/float) other than zero\n");
		}
	        printf("Result is %f",division(number1,number2));
	        break;
        }
			
		case 5: {
            printf( "Enter first operand\n");
	        scanf("%f",&number1);
	        printf("Enter second operand\n");
	        scanf("%f",&number2);
	        printf("Result is %f",modulus(number1,number2));
	        break;
        }

		case 6: {
            printf("Enter a base number(int/float): ");
	        scanf("%f",&number1);
	        printf("Enter exponent(int/float)\n");
	        scanf("%f",&number2);
	        printf("Result is %Lf",exponential(number1,number2));
	        break;
    	}

		case 7:  {
            printf("Enter a number\n");
	        scanf("%f",&number1);
	        printf("Result is %f",factorial(number1));
	        break;
		}

		case 8:  {
            printf("Enter a number\n");
	        scanf("%f",&number1);
	        printf("Result is %f",square(number1));
	        break;
    	}

		case 9:  {
            printf( "Enter first operand\n");
	        scanf("%f",&number1);
	        printf("Enter second operand\n");
	        scanf("%f",&number2);
	        printf("Result is %f",percentage(number1,number2));
	        break;
    	}
		
    	case 10: 
			printf("Invalid choice");
            break;
			 
	}
    test_main(); 
    return 0;
}
