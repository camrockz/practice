#include <stdio.h>
#include <stdlib.h>
#include "practice.h"


int main()
{
    printf("Type in a string: ");
    int length = 50;
    int keepWhile = 1;
    char aString[length];
    get_string(length, aString);
    int moveCount = 0;
    int i = 0;
    char temp;
    while (keepWhile != 0)
    {
        //printf("%s" , aString);
        //i = 0;
        
        for (i = 0; i < sizeof(aString)/sizeof(aString[0]); i++)
        {
            if (aString[i+1] == '\n') break;
            if (aString[i] > aString[i+1])
            {
                temp = aString[i];
                aString[i] = aString[i+1];
                aString[i+1] = temp;
                moveCount++;
            }
        }
            if (moveCount == 0)
            {
                keepWhile = 0;
            }
            else
            {
                moveCount = 0;
            }
    }
    printf("%s" , aString);
    return 0;
}
