#include<stdio.h>

int main(){
    int day;
    printf("Enter the day number: \n");
    scanf("%d", &day);
    switch(day){
        case 1:
            printf("\nMonday\n");
            break;
        case 2:
            printf("\nTuesday\n");
            break;
 
        case 3:
            printf("\nWednesday");
            break;
 
        case 4:
            printf("\nThursday");
            break;
        case 5:
            printf("\nFriday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;

        default:
            printf("invalid day");
    }
    return 0;
}