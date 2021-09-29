/*
C program to print the value of a variable using pointer to pointer type variable
*/

#include <stdio.h>

int main()
{
    int i;
    int *j;
    int **k;

    printf("Assign a value to the variable 'i': \n");
    scanf("%d", &i);

    j = &i;
    k = &j;

    printf("The value assigned to the variable 'i' is: %d", **k);

    return 0;
}