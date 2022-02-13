#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

    char* str = malloc(sizeof(char) * len + 1 + IsNegative);

    for(int i = 0; i < len; i++) {
        str[len - 1 - i + IsNegative] = (nmb / (int)power(10, i) % 10) + '0';
    }

    if (IsNegative == 1) {
        str[0] = '-';
    }
    
    str[len+IsNegative] = '\0';
    return str;
}