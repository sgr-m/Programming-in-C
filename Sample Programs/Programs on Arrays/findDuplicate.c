#include<stdio.h>
int main(){
    int arr[] = {10,30,45,65,10,57,85,96,30,21,35,9,10};
    int len = sizeof(arr) / 4;

    for (int i = 0; i<len; i++){
        for (int j = 0; j<len; j++){
            if (arr[i] == arr[j]){
                if (i==j){
                    continue;
                }
                else{
                    printf("Duplicate: %d\n", arr[j]);
                }
            }
        }
    }
    return 0;
}