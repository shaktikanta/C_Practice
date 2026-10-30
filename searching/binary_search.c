#include <stdio.h>

void binary_seacrh(int *arr, int size, int search) {
    int l = 0;
    int r = size -1;
    int mid = (l+r)/2;
    int found = 0;
    while(l <= r){
        if(arr[mid] == search) {
            printf("Number found\n");
            found = 1;
            break;
        }
        else if(search < arr[mid]) {
            r = mid - 1;
            mid = (l+r)/2;
        }
        else if(search > arr[mid]) {
            l = mid + 1;
            mid = (l+r)/2;
        }
    }
    if(!found) {
        printf("Number not found \n");
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int num;
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("arr size%d\n", size);

    printf("Enter a number to search\n");
    scanf("%d", &num);
    binary_seacrh(arr, size, num);
    return 0;
}