#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter the number to print table:\n");
    scanf("%d", &num);
    for (int i = 1; i<11; i++){
        printf("%d X %d = %d \n",num,i, num*i);
    }
    return 0;
}