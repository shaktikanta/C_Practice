#include <stdio.h>

int fibonacci_number(int num)
{
    int first = 0, second = 1, sum =0;
    printf("Fibonacci series: %d ", first);
    printf(" %d ", second);
    for(int i = 2; i < num; i ++) {
        sum = first + second;
        first = second;
        second = sum;
        printf(" %d ", sum);
    }
    printf("\n");
    return 0;
}
int main(){
    int number;
    printf("Enter the number: \n");
    scanf("%d", &number);
    fibonacci_number(number);
}