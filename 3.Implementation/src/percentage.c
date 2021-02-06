#include <percentage.h>


float percentage(float num1,float num2)
{
    float per;
    /* Input 2 numbers */
    printf("Enter 2 numbers: \n");
    scanf("%f %f", &num1,&num2);
    
    if(num1==0 || num2==0)
    {
        printf("Both the numbers entered should be greater than 0");
    }
   
    else
    {

    /* Calculate percentage */
    /*Formula for percentage is */

    per = (num1 / num2 )*100;

    /* Print the result */
    printf("Percentage = %.3f", per);
    /* The result is rounded off to 3 decimal places */
    }
    return per;
}
