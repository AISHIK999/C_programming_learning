/*
C program to find the sum of first n natural numbers using recursion
*/

#include <stdio.h>

int sum(int n)
{
    if (n != 0)
        return n + sum(n - 1);
    else
        return n;
}

int main()
{
    int a;
    printf("Enter the number of natural numbers you wish to add: ");
    scanf("%d", &a);
    printf("The sum of first %d natural numbers is: %d", a, sum(a));
    return 0;
}
