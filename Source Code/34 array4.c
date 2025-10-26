#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int arr[5] = {15,51,16,61,25};
    // arr = &arr[0]
    printf("%d\n",sizeof(arr)); // size of complete array
    printf("%d\n",sizeof(arr[0])); // size of 1st element

    return 0;
}