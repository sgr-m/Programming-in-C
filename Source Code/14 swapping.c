#include <stdio.h>

int main() {
    int a = 10, b = 20;
    printf("a = %d and b = %d \n", a,b);
    // without using 3rd variable
    a = a + b; // a now becomes 30
    b = a - b; // b ab 10 hogya 
    a = a - b; // a ab 20 hogya 

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
