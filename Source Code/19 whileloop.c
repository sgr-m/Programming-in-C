#include<stdio.h>

int main(){
    int num, i;
    printf("Enter a number: \n");
    scanf("%d", &num);
    i = 1;
    while (i<11){
        printf("%d x %d = %d\n",num,i, num*i);
        i++; // increment the value of i
    }
    return 0;
}