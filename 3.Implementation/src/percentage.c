#include "header.h"

int percentage(int num1,int num2)
{
    int percent;
   
    scanf("%f %f", &num1,&num2);
    if(num1==0 || num2==0)
    {
        printf("Both the numbers entered should be greater than 0");
    }
    else
    {
       
    percent = (num1 / num2)*100;
    
    }
    return percent;
}
