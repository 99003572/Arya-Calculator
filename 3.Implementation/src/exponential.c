#include "header.h"
float exponential(float num1, float num2)
{
    long double result = 1;
    while (num2 != 0) {
        result *= num1;
        --num2;
    }
    return result;
}
