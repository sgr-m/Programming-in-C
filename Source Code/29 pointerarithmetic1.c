#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int x = 7559;
    printf("value of x = %d \n", x +10);
    int *ptr = &x;
    printf("Addr of x = %d\n", ptr);
    printf("ptr+10 = %d\n", ptr+10);

    return 0;
}