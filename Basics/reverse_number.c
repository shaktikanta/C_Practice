#include <stdio.h>
int reverse_number(int num){
    int rev_num = 0;
    while(num > 0){
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main(){
   int num;
   printf("enter number\n\r");
   scanf("%d", &num);
   printf("Number %d\n", num);
   printf("Reverse number %d", reverse_number(num));   
   return 0;
}