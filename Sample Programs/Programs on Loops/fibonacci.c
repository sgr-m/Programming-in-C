#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n, first=0, second = 1, next;
    printf("Enter the number of terms you want to print? \n");
    scanf("%d", &n);
    printf("%d %d ", first, second);
    for (int i = 0; i<n; i++){
        next = first+second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    return 0;
}