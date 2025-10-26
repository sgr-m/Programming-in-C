#include<stdio.h>

int main(){
    int arr[] = {10,30,45,65,25,57};
    int reversed[6];
    int j = 0;
    for(int i = 5; i>= 0; i--){
        reversed[j] = arr[i];
        j++;
    }
      printf("Original array: \n");
    for (int i = 0; i<6; i++){
        printf("%d ", arr[i]);
    }
    printf("\nReversed array: \n");
    for (int i = 0; i<6; i++){
        printf("%d ", reversed[i]);
    }
    return 0;
}