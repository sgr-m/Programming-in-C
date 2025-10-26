#include<stdio.h>
int main(){
    int x = 100;
    printf("The value of x is: %d \n", x);
    int *ptr = &x;
    printf("The address of x is %p \n", ptr);
    printf("The size of ptr is %d \n", sizeof(ptr));
    return 0;
}