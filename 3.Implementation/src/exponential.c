#include "header.h"
int exponential(int num1, int num2)
{
    long long result = 1;
    while (num2 != 0) {
        result *= num1;
        --num2;
    }
    return result;
}