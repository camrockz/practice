#include <stdio.h>
#include <stdlib.h>
#include "practice.h"

int main()
{
    int num[4];
    int posNums;
    int total = 0;
    int average;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Type in number %d of 5: " , i + 1);
        num[i] = get_int();
    }
    for (int j = 0; j < 5; j++)
    {
        if (num[j] > 0)
        {
            posNums++;
            total += num[j];
        }
    }
    average = total / posNums;
    printf("Number of positive numbers: %d\n" , posNums);
    printf("Average value of said positive numbers: %d" , average);
    return 0;
}
