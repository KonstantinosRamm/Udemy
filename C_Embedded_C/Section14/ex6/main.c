#include <stdio.h>


int main(void){
    int arr[] = {8, 1, 5, 7, 3, 6, 2, 10, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    //use summation formula to find the missing number
    int expected_size = size + 1;
    int sum = (expected_size * (expected_size + 1 )) / 2;

    //find the missing number
    int arrSum = 0;
    for(int i = 0; i < size; i++){
        arrSum += arr[i];
    }

    int missing_number = sum - arrSum;

    printf("The missing number is : %d",missing_number);
}
