#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    double x = 75.59;
    printf("value of x = %f \n", x + 10);
    double *ptr = &x;
    printf("Addr of x = %d\n", ptr);
    printf("ptr+10 = %d\n", ptr+10);
    return 0;
}