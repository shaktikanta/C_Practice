#include <stdio.h>

int factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int number;
    printf("Enter the number:\n");
    scanf("%d", &number);
    printf("Factorial of %d is %d\n", number, factorial(number));
}