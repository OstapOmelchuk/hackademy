#include <string.h>
#include <stdio.h>
#include <unistd.h>

int my_puts(const char *s)
{
    int ind = 0;
    while (s[ind] != '\0')
    {
        if (putchar(s[ind]) == EOF)
        {
            return EOF;
        }
        ind++;
    }
    if (putchar('\n') == EOF)
    {
        return EOF;
    }
    return 1;
}
