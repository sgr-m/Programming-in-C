#include <stdio.h>

int main(){
    int a = 95;
    printf("%d \n", sizeof(a));
    printf("%d \n", sizeof(int));
    printf("%d \n", sizeof(float));
    printf("%d \n", sizeof(double));
    printf("%d \n", sizeof(char));
    printf("%d", sizeof(char[10]));

    return 0;
}