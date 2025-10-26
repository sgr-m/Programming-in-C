#include<stdio.h>

int main(){
    int choice; // user choice
    printf("Enter Your Choice:\n");
    printf("Press 1 for Celcius to Faranheit \nPress 2 for Faranheit to Celcius\n");
    scanf("%d", &choice); // user se integer input lo or usko choice m store kro
   
    //agar user ne input m 1 data to:
    if (choice == 1){
       float c;
       printf("Enter the Scale (in Degree Celcius): ");
       scanf("%f", &c); //user se celcius input lo or usko c m store krao
       //dekho celcius point m v ho skta h to input float m lenge
       float f = ((float) 9/5) * c + 32;
       printf("The Value of %f in Farhaniet is: %f", c, f);
    }

    //agar user ne input m 2 dala to
    else if (choice == 2){
       float f;
       printf("Enter the Scale (in Degree Farhaniet): ");
       scanf("%f", &f); //user se celcius input lo or usko c m store krao
       //dekho celcius point m v ho skta h to input float m lenge
       float c = ((float) 5/9) * f - 32;
       printf("The Value of %f in Celcius is: %f", f, c);
    }
    else{
        printf("Invalid Choice");
    }
}