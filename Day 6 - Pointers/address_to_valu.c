/*
C program to print the address of a variable and also print the value of the variable using the address
*/

#include <stdio.h>

int main()
{
    int val;
    int *ptr;

    printf("Assign a numeric variable:\n");
    scanf("%d", &val);

    ptr = &val;

    printf("The address of the variable is: %p\n", ptr);
    printf("The value assigned to the variable  is: %d\n", *ptr);

    return 0;
}