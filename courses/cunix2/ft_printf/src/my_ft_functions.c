#include "../my_ft_functions.h"

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


int power(int num1, int num2)
{
    int const_num = num1;
    if(num2 > 0) {
        for(int i = 1; i < num2; i++) {
            num1 *= const_num;
        }
    }
    else if (num2 == 0) {
        num1 = 1;
    }
    return num1;
}



char* my_itoa(int nmb) {
    
    int IsNegative = 0;
    int len = 0;
    
    if(nmb == 0) {
        len = 1;
    }
    else {
        int nmb_copy = nmb;
        while(nmb_copy != 0) {
            nmb_copy = nmb_copy/10;
            len++;  
        }
    }
    

    if (nmb < 0) {
        nmb *= -1;
        IsNegative = 1;
    }

    char* str = (char *)malloc(sizeof(char) * len + 1 + IsNegative);

    for(int i = 0; i < len; i++) {
        str[len - 1 - i + IsNegative] = (nmb / (int)power(10, i) % 10) + '0';
    }

    if (IsNegative == 1) {
        str[0] = '-';
    }
    
    str[len+IsNegative] = '\0';
    return str;
}


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


unsigned int my_strlen(char *str)
{
    int len = 0;

    while(*str != '\0')
    {
        str++;
        len++;
    }
    return len;
}
