#include <stdio.h>
#include <string.h>

int str_token(char *str, char *token) {
    int index;

    for (int i = 0; i < strlen(str) - strlen(token); i++){
        int j = 0;
        for (j = 0; j < strlen(token) ; j++) {
            if(str[i+j] != token[j]) {
                break;
            }
        }
        if(j == strlen(token))
            index = i;
    }
    
    return index;
}

int main(){
    char str[] = "hello world";
    char *token = "wor";
    int i = str_token(str, token);
    printf("token found at index %d \n ", i);

    return 0;
}