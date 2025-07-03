#include <stdio.h>
#include <stdlib.h>


int main()
{
    //createa a 2-D dynamic array of integers
    int ** arr;

    int i, j = 0;
    printf("Enter row and col:\n");
    scanf("%d %d", &i, &j);
    printf("ROW: %d, COL: %d \n", i, j);

    arr = (int **)malloc(i * sizeof(int *));

    for(int c = 0; c < i; c ++){
        arr[c] = (int *)malloc( j *sizeof(int));
    }

    for(int k = 0; k < i; k++){
        for(int n = 0; n < j; n++){
            *(*(arr + k) + n) = k*j+n +1;
            // printf("arr[%d][%d] :: %d \t", k, n, arr[k][n]);
        }
    }

    printf("\n");
    for(int a = 0; a < i; a++){
        for(int b = 0; b < j; b++){
            printf("arr[%d][%d] :: %d    ", a, b, arr[a][b]);
        }
        printf("\n");
    }

    //freeing the memory
    for (int a = 0; a < i; a++) {
        free(arr[a]);
    }
    free(arr);

}
