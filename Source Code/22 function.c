#include<stdio.h>
#include<conio.h>
#include<math.h>
//declare
// int mul(int a, int b);
// or
int mul(int,int);

int main(){
    int x = mul(10,20);
    printf("%d", x);
    return 0;
}
//define
int mul(int a , int b){
    int c = a*b;
    return c;
}