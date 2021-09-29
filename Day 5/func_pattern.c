/*
C program to print a pattern for n number of steps
i.e., for 3 steps:
*
***
*****
*/

#include <stdio.h>

void pattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }

    pattern(n - 1);
    for (int i = 0; i < 2 * n - 1; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int a;

    printf("Enter the number of lines of pattern: ");
    scanf("%d", &a);
    pattern(a);
    return 0;
}