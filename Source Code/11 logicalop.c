#include<stdio.h>

int main(){
    printf("%d\n", !(10==5)); //True
    printf("%d\n", !(10==10)); //False
    printf("%d\n", !1);
    printf("%d\n", !0);
    printf("%d\n", !5); // 0 ke alava, sab true hai
    printf("%d \n", !(-5));
    // printf("%d", (10==12) || (12!=15) || (1.0 == 1));

    // printf("%d \n", (10 == 10) && (5<6)); //True (1)
    // printf("%d \n", 10!=10 && 15==15); //False 
    return 0;
}