#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

//MAKE STRING INTO ARRAY OF STRINGS
char **mkstrArray(char *buffer)
{
    static char *pbuff[100];
    char **ppbuff = pbuff;
    char *tmp = NULL;
    char delim[] = {" '\n'"};
    int i;
    char *stringp = malloc(sizeof(char) * (strlen(buffer)));
    strncpy(stringp , buffer , (strlen(buffer)));
    for (i = 0; ; i++ , stringp = NULL)
    {
        pbuff[i] = strtok_r(stringp , delim , &tmp);
        if (pbuff[i] == NULL) break;
    }
    return ppbuff;
}

//GET A STRING FROM STDIN
void getString(int length , char *buffer)
{
    if (length < 1 || length > __INT_MAX__)
    {
        fprintf(stderr , "String length out of bounds, exiting");
        exit(EXIT_FAILURE);
    }
    fgets(buffer , length , stdin);
    if (buffer[0] == '\n')
    {
        fprintf(stderr , "No string was found, exiting");
        exit(EXIT_FAILURE);
    }
    int i = 0;
    while (i < length && buffer[i] != '\n')
    {
        i++;
    }
    if (buffer[i] != '\n')
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
}
    
//GET AN INT FROM STDIN
int getInt()
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

//GET A FLOAT FROM STDIN
float getFloat()
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
