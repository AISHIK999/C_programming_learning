/*
C program to show the multiplicative table of a number using array
*/

#include <stdio.h>

int main()
{
    int a, n;

    printf("Enter the number of which you want to fing the multiplicative table: \n");
    scanf("%d", &a);
    printf("Enter the limit of the multiplicative table: \n");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = a * (i + 1);
        printf("%d X %d = %d \n", a, (i + 1), arr[i]);
    }

    return 0;
}