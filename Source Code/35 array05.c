#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int arr[] = {10,20,30,40,50,60};
    printf("%d\n", arr);
    printf("%d\n", &arr[0]);
    printf("%d \n", arr+2); // 6422032 + 2*sizeof(int) = 6422032+8 = 6422040
    printf("%d \n", &arr[0]+2); // 6422032 + 2*sizeof(int) = 6422032+8 = 6422040

    return 0;
}