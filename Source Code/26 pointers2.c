#include<stdio.h>

int main(){
    int a = 250;
    int *p = &a;
    printf("the value at p is: %d\n", *p);
    printf("the value of p is: %p\n", p);
    return 0;
}