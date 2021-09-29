// C program to check whether a number is a prime number

#include <stdio.h>

int main()
{
    int num, i, prime;

    printf("Enter the number you want to verify:\n");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        prime = num % i;
    }
    if (prime != 0)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }

    return 0;
}