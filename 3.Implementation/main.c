#include "header.h"
#include<test.h>
#include <stdio.h>

int main()
{
    int select,number1,number2;
    printf("press 1 to add two numbers\n press 2 to subtract two numbers\n press 3 to multiply two numbers\n");
    printf("press 4 to divide two numbers\n press 5 to find modulus\n");
    printf("press 6 to find exponential\n press 7 to find factorial of a numbers\n");
    scanf("%d", &select);
    switch(select)
    {
        case 1:  {
            printf( "Enter first operand\n");
	        scanf("%d",&number1);
	        printf("Enter second operand\n");
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
            printf( "Enter first operand\n");
	        scanf("%d",&number1);
	        printf("Enter second operand\n");
	        scanf("%d",&number2);
	        printf("Result is %d",division(number1,number2));
	        break;
                   }
			
	case 5: {
            printf( "Enter first operand\n");
	        scanf("%d",&number1);
	        printf("Enter second operand\n");
	        scanf("%d",&number2);
	        printf("Result is %d",modulus(number1,number2));
	        break;
                   }
			
	case 6: {
            printf("Enter a base number: ");
	        scanf("%d",&number1);
	        printf("Enter exponent\n");
	        scanf("%d",&number2);
	        printf("Result is %d",exponential(number1,number2));
	        break;
                   }
	case 7:  {
            printf("Enter a number\n");
	        scanf("%d",&number1);
	        printf("Result is %d",factorial(number1));
	        break;
                   }
    case 8: printf("Invalid choice");
                   break;
			 
}
     test_main(); 
      return 0;
}