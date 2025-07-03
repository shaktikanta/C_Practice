#include <stdio.h>


#define R1 2
#define C1 2
#define R2 2
#define C2 2


int main(){
    int a[2][2] = { { 1, 2 },
                       { 3, 4 } };
    
    int b[2][2] = { {5, 6},
                        {7, 8}};

    int rsult[2][2] = {0};

    for(int i = 0; i < R1; i++){
        for(int j = 0; j < C2; j++){
            for(int k = 0; k < R2; k++ ) { // row of 2nd array which needs to be moved col wise
                //printf("%d %d ", a[i][k], b[k][j] );                
                rsult[i][j] += a[i][k] * b[k][j];
            }
            printf("\n");
        }
    }

    //print the matrix
    printf("Result matrix is:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            printf("%d\t", rsult[i][j]);
        }
        printf("\n");
    }

    return 0;
}