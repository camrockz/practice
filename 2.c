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
#include <errno.h>
#include <math.h>

float get_float()
{
    char buffer[10];
    char *endp;
    errno = 0;
    fgets(buffer ,  sizeof(buffer) , stdin);
    float ret_float = strtof(buffer , &endp);
    if (*endp != '\n')
    {
        fprintf(stderr , "Invalid input\n");
        exit(EXIT_FAILURE);
    }
    
    if (errno != 0 && ret_float == 0)
    {
        perror("strtof");
        exit(EXIT_FAILURE);
    }
    if (endp == (char*)&buffer)
    {
        fprintf(stderr , "There were no numbers found");
        exit(EXIT_FAILURE);
    }
    return ret_float;
}

int main()
{
    float x1;
    float x2; 
    float y1;
    float y2;
    double distance;

    
    printf("Input x1: ");
    x1 = get_float();
    printf("Input y1: ");
    y1 = get_float();
    printf("Input x2: ");
    x2 = get_float();
    printf("Input y2: ");
    y2 = get_float();
    distance = sqrt((double)((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    printf("Distance between said points: %.2f" , distance);
   
    return 0;
}
