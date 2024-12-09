#include <stdio.h>
#include <math.h>
#include <stdlib.h>
  
int main(){

  int i, j, sum;
  int arr[] = {1,5,20,-4,-25,0,-34,10};
  int size = sizeof(arr)/sizeof(arr[0]);
  int min1Pair = arr[0];
  int min2Pair = arr[1];
  int minSum = min1Pair + min2Pair;
   
  for(i = 0; i < size-1; i++) 
  {
        for(j = i+1; j < size; j++) 
        {
            sum = arr[i] + arr[j];
            if(abs(sum) < abs(minSum)) 
            {
                minSum = sum;
                min1Pair = arr[i];
                min2Pair = arr[j];
            }
        }
  }
  printf("[%d, %d]\n", min1Pair, min2Pair);
}