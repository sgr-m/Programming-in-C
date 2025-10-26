#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    // int arr[] ={16,156,51,46,67,41,86};
    // printf("%d\n", arr); //base address
    // printf("%d\n", &arr[0]); //address of 1st element (index 0)
    int arr[4] = {40,80,120,160};
    printf("%d \n", arr); //print the address of 1st element
    printf("%d \n", &arr[0]); //print the address of 1st element
    printf("%d \n", &arr[0]+1);
    printf("%d \n", arr+2); // base address + 2 = base address + 2 * size(type)
                            // 6422048 + 2*4 = 6422048 + 8 = 6422056

    return 0;
}