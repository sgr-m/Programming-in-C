// Write a program to add two numbers
// but take the numbers as input

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    int c;
    c = a + b;
    printf("The sum of %d and %d is %d", a, b, c);
    return 0;
}