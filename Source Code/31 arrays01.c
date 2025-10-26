#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    //defining an array
    int arr[] = {10,20,30,40,50};
    printf("%d \n", arr[0]); //10
    printf("%d \n", arr[4]); //50

    int newArr[3] = {52,48,63};
    printf("%d \n", newArr[0]);
    printf("%d \n", newArr[2]);
    // printf("%d \n", newArr[300]); //garbage value

    int arr2[3] = {15,21,36,47,92,41};
    printf("%d \n", arr2[0]);
    printf("%d \n", arr2[1]);
    printf("%d \n", arr2[2]);

    int arr3[3] = {12,24};
    printf("%d \n", arr3[0]);
    printf("%d \n", arr3[1]);
    printf("%d \n", arr3[2]);

    return 0;
}