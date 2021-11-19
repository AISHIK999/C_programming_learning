/*C program to find the multiplicative table of a number upto user defined limit*/

#include <stdio.h>

int main()
{
    int a, p, l;

    printf("Enter the number of which you want to view the multiplicative table of:\n");
    scanf("%d", &a);

    printf("Enter the limit of the product table:\n");
    scanf("%d", &l);

    for (p = 0; p < (l + 1); p++)
    {
        printf("%d x %d = %d\n", a, p, a * p);
    }

    return 0;
}