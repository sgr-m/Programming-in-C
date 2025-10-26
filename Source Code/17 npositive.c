#include<stdio.h>
int main(){
    int num;
    printf("Enter the number you want to print the even list: ");
    scanf("%d", &num);
    int i=0;
    for (i; i<=num; i+=2){
        printf("%d \n", i);
    }
    return 0;
}