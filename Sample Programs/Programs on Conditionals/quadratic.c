#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    printf("Enter the coefficient of x:\n");
    scanf("%f %f %f", &a, &b, &c);
    float d = b*b - 4*a*c;
    if (d<0){
        printf("Roots are imaginary.");
    }
    else if (d==0){
        printf("Roots are real and equal: \n");
        float root = b/(2*a);
        printf("The root is: %f", root);
    }
    else{
        printf("Root are real and distinct\n");
        float root1 = -b + sqrt(d) / (2*a);
        float root2 = -b - sqrt(d) / (2*a);
        printf("The roots are : %f, %f", root1, root2);
    }
    return 0;
}