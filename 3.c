#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int get_int()
{
    char buffer[10];
    char *endp;
    errno = 0;
    fgets(buffer , sizeof(buffer) , stdin);
    int ret_int = strtol(buffer , &endp , 10);
    
    if (*endp != '\n')
    {
        fprintf(stderr , "Invalid input\n");
        exit(EXIT_FAILURE);
    }
    
    if (errno != 0 && ret_int == 0)
    {
        perror("strtol");
        exit(EXIT_FAILURE);
    }
    if (endp == (char*)&buffer)
    {
        fprintf(stderr , "There were no numbers found");
        exit(EXIT_FAILURE);
    }
    return ret_int;
}

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
