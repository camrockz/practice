#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "practice.h"

int main()
{
    float x1;
    float x2; 
    float y1;
    float y2;
    double distance;

    
    printf("Input x1: ");
    x1 = getFloat();
    printf("Input y1: ");
    y1 = getFloat();
    printf("Input x2: ");
    x2 = getFloat();
    printf("Input y2: ");
    y2 = getFloat();
    distance = sqrt((double)((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    printf("Distance between said points: %.2f" , distance);
   
    return 0;
}
