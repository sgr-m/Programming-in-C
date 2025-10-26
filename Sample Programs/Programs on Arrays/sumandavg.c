#include<stdio.h>

int sum(int *arr, int size){
    int total = 0;
    for (int i=0; i<size; i++){
        total += arr[i];
    }
    return total;
}

float avg(int *arr, int size){
    float mean = sum(arr, size) / size;
    return mean;
}

int main(){
    int arr[] = {10,30,45,65,25,57,85,96,34,21,35,9,10};
    int size = sizeof(arr)/4;
    printf("The sum is: %d \n", sum(arr, size));
    printf("The average is: %f \n", avg(arr, size));
    return 0;
}