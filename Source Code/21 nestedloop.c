#include<stdio.h>
int main(){
    for (int i = 1; i<=2; i++){
        for (int j = 0; j<i; j++){
            for (int k = 0; k<j+1; k++){
                printf("%d ", k);
            }
            printf("%d ", j);
        }
        printf("%d ", i);
    }
    return 0;
}