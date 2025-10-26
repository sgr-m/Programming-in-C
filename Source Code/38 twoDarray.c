#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int arr[4][3] = { 
        {10,20,30}, 
        {40,50,60}, 
        {70,80,90}, 
        {100,110,120} 
    };
    printf("The address of array is: %d \n", arr);
    printf("The size of arr is: %d \n", sizeof(arr));
    for (int i = 0; i<4; i++){
        for (int j = 0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}