/*
C program to print the multiplication table of a number and 
then increase the limit of the table by reallocating memory

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    int *ptr;
    int a, n, p, x, l;

    printf("Enter the number of which you want to see the multiplication table: \n");
    scanf("%d", &a);
    printf("Enter the limit of the multiplication table: \n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int j = 0; j < n; j++)
    {
        ptr[j] = a * (j + 1);
        printf("%d X %d = %d\n", a, (j + 1), ptr[j]);
    }

    printf("Do you want to create a new length of the table?\n");
    printf("Enter '1' for YES and '0' for NO\n");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("Enter the new limit of the table:\n");
        scanf("%d", &p);

        ptr = realloc(ptr, p * sizeof(int));
        printf("After reallocation: \n\n");
        for (int j = 0; j < p; j++)
        {
            ptr[j] = a * (j + 1);
            printf("%d X %d = %d\n", a, (j + 1), ptr[j]);
        }
    }

    free(ptr);
    return 0;
}