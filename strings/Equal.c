#include <stdio.h>
#include <strings.h>

int main(){
    char *str1 = "Hello";
    char *str2 = "Hello";

    if(strlen(str1) != strlen(str2)) {
        printf("Strings are not Equal\n");
    } else {
        while (*str1 != '\0') {
            if(*str1 != *str2) {
                printf("Strings are not Equal\n");
            } else {
                str1++;
                str2++;
            }
        }
        printf("Strings are Equal\n");
    }

    return 0;
}
