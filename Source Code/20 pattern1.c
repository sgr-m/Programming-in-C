#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows you want to print? \n");
    scanf("%d", &n); // 5 -> i = 1,2,3,4,5
    for (int i = 1; i<=n; i++){
        for (int j = 0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}