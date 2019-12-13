#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

//GET AN INT FROM STDIN
int get_int()
{
    char buffer[10];
    char *endp;
    errno = 0;
    fgets(buffer , sizeof(buffer) , stdin);
    int ret_int = strtol(buffer , &endp , 10);
    if (*endp != '\n')
    {
        char c;
        int i = 0;
        while ((c = getchar()) != '\n' && c != EOF)
        {
            i++;
            if (i > 10)
            {
                fprintf(stderr , "Buffer overflow, exiting");
                exit(EXIT_FAILURE);
            }
        }
    }
    if (errno != 0 && ret_int == 0)
    {
        perror("strtol");
        exit(EXIT_FAILURE);
    }
    if (endp == (char*)&buffer)
    {
        fprintf(stderr , "There were no numbers found, exiting");
        exit(EXIT_FAILURE);
    }
    return ret_int;
}

//GET AN FLOAT FROM STDIN
float get_float()
{
    char buffer[10];
    char *endp;
    errno = 0;
    fgets(buffer ,  sizeof(buffer) , stdin);
    float ret_float = strtof(buffer , &endp);
    if (*endp != '\n')
    {
        char c;
        int i = 0;
        while ((c = getchar()) != '\n' && c != EOF)
        {
            i++;
            if (i > 10)
            {
                fprintf(stderr , "Buffer overflow, exiting");
                exit(EXIT_FAILURE);
            }
        }
    }
    if (errno != 0 && ret_float == 0)
    {
        perror("strtof");
        exit(EXIT_FAILURE);
    }
    if (endp == (char*)&buffer)
    {
        fprintf(stderr , "There were no numbers found, exiting");
        exit(EXIT_FAILURE);
    }
    return ret_float;
}
