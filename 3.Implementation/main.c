#include "header.h"

#include <stdio.h>

int main()
{
    int select;
    printf("press 1 to add two numbers\n press 2 to subtract two numbers\n press 3 to multiply two numbers\n");
    printf("press 4 to divide two numbers\n press 5 to find exponential value\n");
    printf("press 6 to find factorial\n press 7 to find modulus of two numbers\n");
    scanf("%d", &select);
    switch(select)
    {
        case 1: add_numbers();
                break;
        case 2: subtract_numbers();
                break;
        case 3: multiply_numbers();
                break;
        case 4: divide_numbers();
                break;
         case 5: exponential();
                break;
        case 6: factorial();
                break;
        case 7: modulus();
                break;
        default: printf("invalid selection");
    }
    return 0;
}







