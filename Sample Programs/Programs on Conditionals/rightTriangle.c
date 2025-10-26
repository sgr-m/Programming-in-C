#include<stdio.h>

int main(){
    float a,b,c, x,y,z;
    printf("Enter the sides of the triangle: \n");
    scanf("%f %f %f", &a, &b, &c);
    x = a*a + b*b;
    y = b*b + c*c;
    z = c*c + a*a;
    if ((x == c*c) || (y == a*a) || (z == b*b)){
        printf("\nThe triangle is a right triangle.");
    }
    else{
        printf("The triangle is not a right triangle.");
    }
    return 0;
}