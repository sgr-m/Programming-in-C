#include<stdio.h>

int main(){
    int num;
    printf("Enter the number you want to print the odd series: ");
    scanf("%d", &num);
    for (int i = 1; i<=num; i+=2){
        printf("%d ", i); // odd + even = odd (1 + 2 = 3, 3+2 = 5, 5+2 = 7 ... )
    }
    printf("\nSuccessful");
    return 0;
}