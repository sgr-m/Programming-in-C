#include<stdio.h>

int main(){
    int age;
    printf("Enter the age:");
    scanf("%d", &age);
    if (age>18){
        printf("You are able to vote");
    }
    else{
        printf("You are not able to vote");
    }
    return 0;
}