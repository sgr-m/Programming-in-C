#include<stdio.h>
int main(){
    int arr[] = {10,30,45,65,25,57,85,96,34,21,35,9,10};
    printf("Enter the number you want to find:\n");
    int n;
    scanf("%d", &n);
    int flag = 0;
    for (int i = 0; i< (sizeof(arr)/4); i++){
        if (n == arr[i]){
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        printf("Found!!!");
    }
    else{
        printf("Not found");
    }

    return 0;
}