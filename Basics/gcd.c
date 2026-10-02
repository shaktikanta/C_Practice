#include <stdio.h>

int find_gcd(int a, int b){
    int min = ((a<b) ? a : b);
    while(min > 0){
        if(a % min == 0 && b % min == 0){
            break;
        }
        min--;
    }
    return min;
}

int main(){
    int number1, number2;
    printf("Enter the number:\n");
    scanf("%d", &number1);
    scanf("%d", &number2);
    printf("GCD: %d\n", find_gcd(number1, number2));
}