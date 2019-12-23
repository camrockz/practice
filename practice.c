#include <stdio.h>
#include <stdlib.h>
#include "libpractice.h"


int main()
{
    printf("Type in a string: ");
    int length = 10;
    char test[length];
    get_string(length, test);
    printf("You typed: %s" , test);
   return 0;
}
