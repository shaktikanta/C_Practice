#include <stdio.h>

int count_digits(int num){
    int count = 0, sum = 0;
    while(num > 0){
        count++;
        sum += (num%10);
        num = num / 10;
    }
    printf("SUM: %d\n", sum);
    return count;
}
int main(){
    int number;
    printf("Enter number:\n");
    scanf("%d", &number);
    
    printf("Digits: %d\n", count_digits(number));
    return 0;
}