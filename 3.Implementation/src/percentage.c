#include "header.h"


float percentage(float num1,float num2)
{
    float per;
    /*printf("Enter 2 numbers: \n");
    scanf("%f %f", &num1,&num2);*/
    if(num1==0 || num2==0)
    {
        printf("Both the numbers entered should be greater than 0");
    }
    else
    {/* Calculate percentage */
    /*Formula for percentage is */
       
    per = (num1 / num2 )*100;
    
    }
    return per;
}
