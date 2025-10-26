#include<stdio.h>

int main(){
    int a, d, n; // (assuming that the progression is integeral)
    printf("Enter First term: \n");
    scanf("%d", &a);
    printf("Enter common difference: \n");
    scanf("%d", &d);
    printf("Enter the number of terms you want to print: \n");
    scanf("%d", &n);
    int i = 0;
    for (i; i<n; i++){
        int f = a + (i*d);
        printf("%d ",f);
    }
    printf("\nnumber of terms are: %d", i);
    return 0;
}