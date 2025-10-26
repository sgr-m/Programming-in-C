#include <stdio.h>

int main(){
    int a = 10;
    // float b = (float)a;
    float b = a;
    printf("%f \n", b);

    int m = (int)10.253;
    printf("%d \n", m);

    float n = (float)17/(float)2; // float / float => float
    printf("%f \n", n);

    float x = (float)15; // 15 phle int tha ab float ho gya
    return 0;
}