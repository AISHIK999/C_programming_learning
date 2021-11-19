//C program to find out the sum of all the numbers of a multiplicative table of a aspecific number//

#include <stdio.h>

int main()
{
    int a, b, l, sum = 0;

    printf("Enter the number of which you want to use the multiplicative table:\n");
    scanf("%d", &a);

    printf("Enter the limit of the multiplicative table:\n");
    scanf("%d", &l);

    for (b = 0; b < l + 1; b++)
    {
        sum = sum + a * b;
    }
    printf("The sum of all the products of the table of %d upto %d is: %d", a, l, sum);

    return 0;
}