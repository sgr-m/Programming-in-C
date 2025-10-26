#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int arr[] = {10,32,20,51,61,6,16,51,65,1,6,10,3,21,132,3,20,32,32,24};
    printf("the size of array is: %d\n", sizeof(arr));
    printf("the size of first element of array is: %d \n", sizeof(arr[0]));
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The number of elements in arr are: %d\n", n);
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}