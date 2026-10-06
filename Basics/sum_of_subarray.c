#include <stdio.h>

int sum_sub_array(int * arr, int n) {
    int sum = 0 , temp = 0;

    for(int i=0; i < n; i++){
        temp = 0;
        for(int j = i; j < n ; j++){
            temp += arr[j];
            sum += temp;
        }
        printf("\n");
    }
    return sum;
}

int main() {
    int arr[5] = {1, 4, 5, 3, 2};
    printf("\nSum of subarray is : %d \n",sum_sub_array(arr, 5) );
    return 0;
}