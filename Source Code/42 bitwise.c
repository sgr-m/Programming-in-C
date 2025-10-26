#include<stdio.h>
int main(){
    short a = 5;
    short b = 3;
    printf("%d \n", a&b);
    printf("%d \n", a|b);
    printf("%d \n", a^b);
    printf("%d \n", ~a);
    short int x = 10;
    printf("%d \n", x<<1);
    printf("%d \n", x<<2);
    // printf("%d \n", x<<32);
    printf("%d \n", x>>1);
    int c = (a<b) ? a : b;
    printf("%d\n", c);


    return 0;
}