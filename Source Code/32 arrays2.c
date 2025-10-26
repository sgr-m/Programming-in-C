#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int arr[5]; //declaration of an array -> blank array
    // inserting an element into an array
    arr[0] = 9999; 
    arr[1] = 888; 
    arr[2] = 77; 
    arr[3] = 7; 
    arr[4] = 6; 
    printf("%d \n", arr[0]); //9999
    printf("%d \n", arr[2]); // 77
    printf("%d \n", arr[4]); // 6

    // update the values?
    arr[0] = 3333; //update the value of 0th index 
    printf("%d \n", arr[0]); // 3333
    printf("%d \n", 3[arr]); // 7



    return 0;
}