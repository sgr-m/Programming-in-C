#include<stdio.h>
int main(){
    int i = 10;
    do {
        printf("Hello%d\n", i);
        i++;
    } while(i<5); //false hai starting se
    return 0;
}