//C program to find the factorial of a given number

#include <stdio.h>

int main()
{
    int a, i, fac = 1;

    printf("Enter the number of which you want to find the factorial: \n");
    scanf("%d", &a);

    for (i = 1; i < a + 1; i++)
    {
        fac = fac * i;
    }
    printf("The factorial of %d is: %d", a, fac);

    return 0;
}