//addition of 2 matrices
#include <stdio.h>
#define N 5

int main(){
    int mat1[N][N] =
    {
        {4,1,7,3,0},
        {6,2,8,5,7},
        {9,3,2,4,8},
        {1,5,6,9,2},
        {7,0,3,4,1},

    };
    int mat2[N][N] =
    {
        {3,7,2,5,1},
        {0,8,4,9,6},
        {2,3,6,0,8},
        {9,1,7,4,2},
        {5,3,8,6,0},
    };

    int result[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }


    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d   ",result[i][j]);
        }
        printf("\n");
    }

}
