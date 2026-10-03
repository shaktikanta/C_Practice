#include <stdio.h>
#include <stdlib.h>

int find_leader(int *ptr, int size){
    int leader;
    int *res_arr = (int *)malloc(sizeof(int) * size);
    int res_size = 0;
    printf("Leader\n");
    for(int i = size-1; i >= 0; i--){
        if(i == size -1) {
            leader = ptr[i];
            printf("%d ", ptr[i]);
            res_arr[res_size] = leader;
            res_size++;
        }
        if(ptr[i] > leader) {
            printf(" %d ", ptr[i]);
            leader = ptr[i];
            res_arr[res_size] = leader;
            res_size++;
        }
    }
    printf("\n");
    printf("Leaders are: %d\n", res_size);
    for(int i = res_size-1; i >= 0 ; i--){
        printf("%d ", res_arr[i]);
    }
    printf("\n");
    return 0;
}

int main(){
    int arr[] = { 19, 17, 4, 3, 5, 2 };
    // int arr[] = { 5, 4, 3, 2, 1 };
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Array Size: %d\n", size);
    find_leader(arr, size);

    return 0;
}