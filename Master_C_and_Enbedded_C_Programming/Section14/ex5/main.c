#include <stdio.h> 
#define SIZE 5 

int main() { 
    int matrixA[SIZE][SIZE] = 
    { 
        {4,1,7,3,0}, 
        {6,2,8,5,7}, 
        {9,3,2,4,8}, 
        {1,5,6,9,2}, 
        {7,0,3,4,1}, 
    }; 
    
    int matrixB[SIZE][SIZE] = 
    { 
        {3,7,2,5,1}, 
        {0,8,4,9,6}, 
        {2,3,6,0,8}, 
        {9,1,7,4,2}, 
        {5,3,8,6,0}, 
    }; 
    
    int resultMatrix[SIZE][SIZE] = {0}; 
    
    // Perform matrix multiplication 
    for (int i = 0; i < SIZE; i++) { 
        for (int j = 0; j < SIZE; j++) { 
            resultMatrix[i][j] = 0; 
            for (int k = 0; k < SIZE; k++) { 
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j]; 
                } 
            } 
        } 
        // Print the result matrix 
    for (int i = 0; i < SIZE; i++) { 
        for (int j = 0; j < SIZE; j++) { 
            printf("%d ", resultMatrix[i][j]); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
