#include <stdio.h>
#include <stdlib.h>

    char ch[] = {'X' , 'M' , 'L'};

int main()
{
    

    printf("The reverse of ");
    for (int i = 0; i < 3; i++)
    {
        printf("%c" , ch[i]);
    }
    printf(" is ");
    for (int j = 2; j > -1; j--)
    {
        printf("%c" , ch[j]);
    }
    return 0;
}
