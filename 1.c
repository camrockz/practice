/* BSD 3-Clause “New” or “Revised” License
   Copyright (c) 2019 camrockz https://github.com/camrockz/
   All rights reserved.
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:
   
   1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
   
   2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
   3. Neither the name of the copyright holder nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.
   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
   DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
   FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
   DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
   SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
   CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
   OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
   
#include <stdio.h>
#include <stdlib.h>

int get_int()
{
    char string [10];
    fgets(string , sizeof(string) , stdin);
    int ret_int = atoi(string);
    return ret_int;
}

int main()
{
    int daysinWeek = 7;
    int daysinYear = 365;
    int years;
    int weeks;
    int days;
    
    printf("Type a number of days: ");
    
    int numofDays = get_int();
    years = numofDays/daysinYear;
    weeks = (numofDays-(years*daysinYear))/daysinWeek;
    days = numofDays-((years*daysinYear)+(weeks*daysinWeek));
    
    printf("Years: %d\n" , years);
    printf("Weeks: %d\n" , weeks);
    printf("Days: %d\n" , days);
    
   
    return 0;
}
