// Printing the odd numbers from an array
#include<stdio.h>

int main(){
    int arr[] = {10,12,13,15,19,17,24,29,27,39,36,35,45,55,60};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("List of Odd numbers:");
    for (int i = 0; i<n; i++){
        if(arr[i]%2 != 0){
            printf("%d ", arr[i]);
        }
    }
    printf("\nList of even numbers:");
    //printing the even number of an array
    for(int i= 0; i<n;i++){
        if(arr[i]%2==0){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}