#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

float get_float()
{
    char buffer[10];
    char *endp;
    errno = 0;
    fgets(buffer ,  sizeof(buffer) , stdin);
    float ret_float = strtof(buffer , &endp);
    if (*endp != '\n')
    {
        fprintf(stderr , "Invalid input\n");
        exit(EXIT_FAILURE);
    }
    
    if (errno != 0 && ret_float == 0)
    {
        perror("strtof");
        exit(EXIT_FAILURE);
    }
    if (endp == (char*)&buffer)
    {
        fprintf(stderr , "There were no numbers found");
        exit(EXIT_FAILURE);
    }
    return ret_float;
}

int main()
{
    float x1;
    float x2; 
    float y1;
    float y2;
    double distance;

    
    printf("Input x1: ");
    x1 = get_float();
    printf("Input y1: ");
    y1 = get_float();
    printf("Input x2: ");
    x2 = get_float();
    printf("Input y2: ");
    y2 = get_float();
    distance = sqrt((double)((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    printf("Distance between said points: %.2f" , distance);
   
    return 0;
}
