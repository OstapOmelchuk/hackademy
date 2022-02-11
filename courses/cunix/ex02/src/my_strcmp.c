#include <stdio.h>
#include <string.h>

int my_strcmp(char *str1, char *str2) {
    int diff = 0; 
    if(str1 != str2) {
        int min_length = strlen(str1);

        if ((int)strlen(str2) < min_length) {
            min_length =  strlen(str2);
        }
        printf("length = %d \n", min_length);

        for(int i = 0; i < min_length; i++) {
            if ((int)str1[i] > (int)str2[i]) {
                return 1;
            }
            else if ((int)str1[i] < (int)str2[i])
            {
                return -1;
            }   
        }
    }
    return diff;
}
