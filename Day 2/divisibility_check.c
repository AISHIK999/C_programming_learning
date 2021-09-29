// C program to check the divisibility of a number by another number

#include <stdio.h>

int main()
{
    int num, div;

    printf("Enter the dividend:\n");
    scanf("%d", &num);

    printf("Enter the divisor:\n");
    scanf("%d", &div);

    if (num % div == 0)
    {
        printf("The number is divisible");
    }
    else
    {
        printf("The number is indivisible");
    }

    return 0;
}