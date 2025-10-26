#include<stdio.h>

int main(){
    int a = 79;
    int b = 21;
    printf("%d\n", a%b);
    printf("%f\n", 105/1.75);
    // printf("%f\n", 105%1.75); error
    printf("%d", 'a' % 'A');
    
    /*printf("%d\n", 7/2);
    printf("%f\n", (float)7 / 2);
    printf("%f\n", 9.5/3);
    printf("%f\n", 9.5/2.5);
    printf("%f\n", 19.5f/2.5f);
    */
    /*
    printf("%d \n", 10*10);
    printf("%d \n", 'A'*10);
    printf("%d \n", 10.0*10); //false
    printf("%f \n", 10.0*10); 
    printf("%d \n", 10.0*10.0); //false
    */
    
    /*float a = 1.5;
    int b = 3;
    int c = a+b; // we are storing the value of a+b in c
    // and c is an integer type container. 
    printf("%d\n", c); // printing the stored integral part of the operation a+b
    printf("%d\n", a+b); // it is finding the integer value, and got a float value. that is false. false = 0;

    char x = 'A'; // ASCII A = 65
    int y = 100;
    printf("%d", x+y);
    */
    return 0;
}