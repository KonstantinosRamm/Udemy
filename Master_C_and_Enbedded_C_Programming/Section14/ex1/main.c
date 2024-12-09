#include <stdio.h>


int main(void){
    int arr1[] = {1,5,4,3,2};
    int arr2[] = {9,0,7,8,6};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int total_size = size1 + size2 ;
    int merged[total_size];

    //merge elements from arr1 to merged
    for(int i = 0; i < size1; i++){
        merged[i] = arr1[i];
    }
    //merge elements from arr2 to merged
    for(int i = 0; i < size2; i++){
        merged[i+size1] = arr2[i];
    }

    //sort the array
    for(int i = 0; i < total_size; i++){
        for(int j = 0; j < total_size - 1; j++){
            if (merged[j] < merged[j+1]){
                int temp = merged[j];
                merged[j] = merged[j+1];
                merged[j+1] = temp;
            }
        }
    }

    //print the sorted array
    for(int i = 0; i < total_size; i++){
        printf(" %d",merged[i]);
    }




}