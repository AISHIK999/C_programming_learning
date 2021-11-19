/*C program to find the sum of natural numbers upto user defined limit*/

#include <stdio.h>

int main()
{
    int a, l, sum = 0;

    printf("Enter the limit of the sum:\n");
    scanf("%d", &l);

    for (a = 0; a < (l + 1); a++)
    {
        sum = sum + a;
    }

    printf("the sum of all the natural numbers upto %d is: %d", l, sum);

    return 0;
}