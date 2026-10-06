#include <stdio.h>
#include <stdlib.h>

int remove_duplicate(int *arr, int size) {
    int *res_arr= (int *)malloc(size * sizeof(int));
    int n = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] != arr[i+1]){
            // printf("%d ", arr[i]);
            res_arr[n]= arr[i];
            n++;
        }
    }

    printf("Res Arr: %d\n", n);
    for(int i = 0; i < n ; i++) {
        printf("%d ", res_arr[i]);
    }
    printf("\n");
    return 0;
}

int main(){
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 5};
    // int arr[] = {1,1,1,1,1};

    int size = sizeof(arr)/ sizeof(arr[0]);
    printf("Size: %d\n", size);
    remove_duplicate(arr, size);
    return 0;
}