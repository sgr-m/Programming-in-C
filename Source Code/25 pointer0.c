#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int x = 20;
    int* m = &x;
    printf("The address is %p \n", m);
    printf("The value in address is: %d ", *m);
    return 0;
}