#include<stdio.h>
int main()
{
    int a = 50;
    int *b = &a;
    printf("a: %d \n", a);
    printf("b: %d \n", b);
    printf("*&a: %d \n", *&a);
    printf("*&b: %d \n", *&b);
    printf("*b: %d \n", *b); 
    printf("b: %p \n", b); 
    // printf("*6422060: %d \n", *(000000000061fe2c)); error

    return 0;
}
