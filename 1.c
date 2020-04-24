#include <stdio.h>
#include <stdlib.h>
#include "practice.h"

int main()
{
    int daysinWeek = 7;
    int daysinYear = 365;
    int years;
    int weeks;
    int days;
    int numofDays;
    
    printf("Type a number of days: ");
    numofDays = getInt();
    years = numofDays/daysinYear;
    weeks = (numofDays-(years*daysinYear))/daysinWeek;
    days = numofDays-((years*daysinYear)+(weeks*daysinWeek));
    
    printf("Years: %d\n" , years);
    printf("Weeks: %d\n" , weeks);
    printf("Days: %d\n" , days);
    
   
    return 0;
}
