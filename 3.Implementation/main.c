#include "header.h"
#include <stdio.h>

int main()
{
    int select,number1,number2;
    float num1,num2;
    printf("press 1 to add two numbers\n press 2 to subtract two numbers\n press 3 to multiply two numbers\n");
    printf("press 4 to divide two numbers\n press 5 to find modulus\n");
    printf("press 6 to find exponential\n press 7 to find factorial of a numbers\n");
    printf("press 8 to find percentage\n press 9 to find square of a number \n");
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
        case 8: {
                printf("Enter the obtained number: ");
	        scanf("%f",&num1);
	        printf("Enter the total\n");
	        scanf("%f",&numr2);
	        printf("Result is %f",percentage(num1,num2));
	        break;
                   }
	case 9: {
                printf("Enter the number: ");
	        scanf("%f",&num1);
	        printf("Result is %f",square(num1));
	        break;
                   }
		    
    case 10: printf("Invalid choice");
                   break;
			 
}
     test_main(); 
      return 0;
}
