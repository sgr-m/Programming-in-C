#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n = 50;
    int x,y,z;
    for (int i = 1; i<20; i++){
        for (int j = i; j< 20; j++){
            for(int k = j; k<20 ; k++ ){
                if(i*i  + j*j == k*k){
                    printf("%d %d %d \n", i,j,k);
                }
            }
        }
    }
    return 0;
}