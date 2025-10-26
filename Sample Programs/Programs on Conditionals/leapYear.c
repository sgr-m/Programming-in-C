#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year: \n");
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 100 == 0) || (year % 4 == 0))
    {
        printf("\n%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year");
    }
    return 0;
}