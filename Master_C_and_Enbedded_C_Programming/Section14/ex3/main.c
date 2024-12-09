#include <stdio.h>



int main(void){
    int arr[] = {1,5,4,3,9,6,7,0,8,10,14,13,12,15};

    int size = sizeof(arr)/sizeof(arr[0]);
        for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++){
        printf("%d  ",arr[i]);
    }
}