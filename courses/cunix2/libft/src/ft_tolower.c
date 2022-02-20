#include "../libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + REGISTER_DIFF; 
    }
    else
    {
        return c;
    }
}