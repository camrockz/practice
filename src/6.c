#include <stdio.h>
#include <stdlib.h>
#include "practice.h"

int sumOfDigits(int);

int main()
{
    printf("Type in a number: ");
    int digits = getInt();
    int sum = sumOfDigits(digits);
    printf("%d\n" , sum);
    return 0;
   
}

int sumOfDigits(int digits)
{
    if (digits > 0)
    {
        return ((digits%10) + (sumOfDigits(digits/10)));
    }
    else return 0;
}
