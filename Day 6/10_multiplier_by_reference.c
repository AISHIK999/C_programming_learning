/*
C program to print 10 times the initial value of a number using call be reference and function
*/

#include <stdio.h>

int mul(int n)
{
    int *add, new;
    add = &n;

    new = *add * 10;
    *add = new;

    printf("The new value is: %d", *add);
}

int main()
{
    int a;

    printf("Enter the initial value:\n");
    scanf("%d", &a);

    mul(a);

    return 0;
}