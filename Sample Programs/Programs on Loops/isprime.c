#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n, flag = 1; //1 for prime and 0 for not prime
    printf("Enter a number: \n");
    scanf("%d", &n);
    if (n == 2){
        printf("2 is even prime number.");
    }
    else{
        for (int i = 2; i <= (n/2); i++){
            if (n % i == 0){
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1){
        printf("The number %d is Prime.", n);
    }
    else{
        printf("The number %d is not prime.", n);
    }
    return 0;
}