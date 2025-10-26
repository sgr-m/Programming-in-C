#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, k = 1;
    printf("Enter the number of rows you want to print? \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}