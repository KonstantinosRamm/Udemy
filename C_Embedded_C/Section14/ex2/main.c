#include <stdio.h>


int main(void){
    int arr[] = 
    {
        6,4,8,3,2,
        7,5,9,8,5,
        9,2,6,6,7,
        5,3,3,3,5,
        1,2,2,3,4,
        1,6,2,1,9,
        1,6,7,2,1,
        1,3,7,6,2,
        4,9,2,2,2,
        9,9,1,5,4,
        6,4,2,8,3
    };



    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    //find max number in the array 
    for(int i = 0; i < size; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    int frequency[max] ; //store the frequency of each number

    //init array to zero
    for(int i = 0; i < max; i++){
        frequency[i] = 0;
    }


    //iterate the array to find frequency
    for(int i = 0; i < size; i++){
        frequency[arr[i]]++;
    }

    //print the frequency
    for(int i = 0; i < max; i++){
        printf("\n%d : %d times",i+1,frequency[i]);
    }
}
