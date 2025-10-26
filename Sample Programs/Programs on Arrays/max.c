#include<stdio.h>

int main(){
    int arr[] = {10,30,45,65,25,57,85,96,34,21,35,9,10};
    int max = 0;
    int min = arr[0]; // first element (assume that first element is minimum)
    for (int i = 0; i< sizeof(arr)/4;  i++){
        if (arr[i]>max){
            max = arr[i];
        }
        if (arr[i]<min){
            min = arr[i];
        }
    }
    printf("The maximum value of array is: %d\n", max);
    printf("The minimum value of array is: %d", min);
    return 0;
}