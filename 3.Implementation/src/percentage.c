#include "header.h"


float percentage(float num1,float num2)
{
    float percent;
   
    scanf("%f %f", &num1,&num2);
    if(num1==0 || num2==0)
    {
        printf("Both the numbers entered should be greater than 0");
    }
    else
    {
       
    percent = (num1 / num2 )*100;
    
    }
    return percent;
}
