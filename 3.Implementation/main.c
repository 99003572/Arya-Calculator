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
            printf( "Enter first operand\n");
	        scanf("%f",&number1);
	        printf("Enter second operand\n");
	        scanf("%f",&number2);
	        printf("Result is %f",add(number1,number2));
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
            printf( "Enter first operand\n");
	        scanf("%f",&number1);
	        printf("Enter second operand\n");
	        scanf("%f",&number2);
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
            printf("Enter a base number: ");
	        scanf("%f",&number1);
	        printf("Enter exponent\n");
	        scanf("%f",&number2);
	        printf("Result is %f",exponential(number1,number2));
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
