#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int my_atoi(const char *nptr) {
    int IsNegative = 0;

    if(nptr[0] == '-' && (nptr[1] >= '0' && nptr[1] <= '9')) {
        IsNegative = 1;
    }
    else if (nptr[0] < '0' || nptr[0] > '9')
    {
        return 0;
    }

    int ind = IsNegative;
    int nmb = nptr[ind] - '0';

    ind++;
    
    while(nptr[ind] != '\0' &&  nptr[ind] >= '0' && nptr[ind] <= '9')
    {
        nmb = nmb * 10 + (nptr[ind] - '0');
        ind++;
    }

    if(IsNegative == 1) {
        nmb *= -1;
    }

 
    return nmb;
}
