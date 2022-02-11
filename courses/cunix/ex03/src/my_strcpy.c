#include <stdio.h>
#include <string.h>

char *my_strcpy(char *dest, const char *src) {
    int ind = 0;
    while (*src != '\0')
    {
        dest[ind] = *src;
        ind++;
        src++;
    }
    dest[ind] = '\0';

    return dest;
}

