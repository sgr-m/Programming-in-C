#include<stdio.h>
int main(){
    int base;
    printf("Enter a base number: \n");
    scanf("%d", &base);
    switch(base){
        case 2:
            printf("Binary Number system \n");
            break;
        case 8:
            printf("Octal number system \n");
            break;
        case 10:
            printf("Decimal number system \n");
            break;
        case 16:
            printf("hexadecimal number system \n");
            break;
        default:
            printf("Invalid Choice");
    }
    return 0;
}