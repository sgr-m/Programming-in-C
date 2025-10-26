#include<stdio.h>
#include<conio.h>
#include<math.h>

void fun(int* a){
    *a = *a + 10;
    printf("Inside function %d \n", *a);
}
int main(){
    int a = 20;
    fun(&a);
    printf("inside main %d \n", a);
    return 0;
}