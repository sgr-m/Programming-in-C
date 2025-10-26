#include<stdio.h>
int main(){
    int a, b, x, hcf;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the Second number: \n");
    scanf("%d", &b);
    if (a<b){
        x = a;
    }
    else{
        x = b;
    }
    for (int i = 1; i<=x; i++){
        if ((a%i==0) && (b%i==0)){
            hcf = i;
        }
    }
    printf("The HCF of %d and %d is %d\n", a, b, hcf);
    int lcm = (a*b)/hcf;
    printf("The LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}