#include <stdio.h>

int find_lcm(int a, int b){
    int max = ((a>b) ? a : b);
    while(1){
        if(max % a == 0 && max % b == 0){
            break;
        }
        max++;
    }
    return max;
}

int main(){
    int number1, number2;
    printf("Enter the number:\n");
    scanf("%d", &number1);
    scanf("%d", &number2);
    printf("LCM: %d\n", find_lcm(number1, number2));
}