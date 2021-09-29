/*
C program to store integers in an array while allocating
memory to it as set by usre using Dynamic Memory Allocation

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    int *ptr;
    int n, a, i = 0;

    printf("Enter the number of integers to be contained in the array: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    while (i < n)
    {
        printf("Enter the integer number %d: \n", (i + 1));
        scanf("%d", &ptr[i]);
        i++;
    }

    printf("Enter the integer number you want to view: \n");
    scanf("%d", &a);
    printf("The integer number %d is: %d", a, ptr[a - 1]);

    return 0;
}