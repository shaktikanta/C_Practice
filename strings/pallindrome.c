#include <stdio.h>
#include <string.h>

int pallindrome_string(char *str, int len){
    for(int i = 0; i < len ; i++) {
        if(str[i] != str[len-(i+1)]){
            printf("String is not pallindrome\n");
            return 0;
        }    
    }
    printf("String is pallindrome\n");
    return 0;
}
int main() {
    char *str = "abba";
    printf("Length %d\n", strlen(str));
    pallindrome_string(str, strlen(str));
    return 0;
}