#include<stdio.h>
#include<math.h>
int main(){
    int x, n;
    printf("Enter the value of x: \n");
    scanf("%d", &x);
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        printf("%d ", (int) pow(x, i));
    }
    return 0;
}