#include <stdio.h>
#include <stdlib.h>
#include "practice.h"
#include <string.h>


int main()
{
    int length = 100;
    char buffer[length];
    getString(length , buffer);
    char **ppbuff =  mkstrArray(buffer);
    int j = 0;
    while (ppbuff[j] != NULL)
    {
        printf("%s\n" , ppbuff[j]);
        j++;
    }
    free(*ppbuff);
    return 0;
}

