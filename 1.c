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
    int daysinWeek = 7;
    int daysinYear = 365;
    int years;
    int weeks;
    int days;
    int numofDays;
    
    printf("Type a number of days: ");
    numofDays = get_int();
    years = numofDays/daysinYear;
    weeks = (numofDays-(years*daysinYear))/daysinWeek;
    days = numofDays-((years*daysinYear)+(weeks*daysinWeek));
    
    printf("Years: %d\n" , years);
    printf("Weeks: %d\n" , weeks);
    printf("Days: %d\n" , days);
    
   
    return 0;
}
