/*
C program to print the multiplication table of a number into another text file

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, n, i;
    FILE *ptr;
    printf("Enter the number of which you want to print the multiplication table: ");
    scanf("%d", &a);
    printf("Enter the limit of the table: ");
    scanf("%d", &n);

    ptr = fopen("table.txt", "w");
    fprintf(ptr, "The multiplication table of %d upto %d is: \n\n", a, n);

    for (int i = 1; i < n + 1; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", a, i, a * i);
    }
    fclose(ptr);
    printf("**********************************************************************************\n");
    printf("The multiplication table can be found in the table.txt file that has been created\n");
    printf("**********************************************************************************\n");

    return 0;
}