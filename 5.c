#include <stdio.h>
#include <stdlib.h>
#include "practice.h"


int main()
{
    printf("Type in a string: ");
    int length = 10;
    char test[length];
    get_string(length, test);
    printf("You typed: %s" , test);
    printf("\n");
    printf("Type in a string: ");
    get_string(length, test);
    printf("You typed: %s" , test);
    printf("\n");
    return 0;
}
