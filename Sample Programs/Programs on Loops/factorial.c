#include<stdio.h>

int main(){
    unsigned int n; 
    long long int factorial = 1 ;
    printf("Enter number: \n");
    scanf("%d", &n);
    if (n == 0 || n == 1){
        printf("The factorial is: 1\n");
    }
    else{
        for (int i = 1; i<=n; i++){
            factorial *= i;
        }
        printf("The factorial of %d is %d", n, factorial);
    }
    return 0;
}