/*
C program to find the sum of complex numbers
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

typedef struct complex
{
    int ima;
    int real;
} com;

int main()
{
    int n, a = 0, b = 0;

    printf("Enter the number of cumplex numbers you wish to add: ");
    scanf("%d", &n);

    com num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the imaginary part of complex number %d: ", (i + 1));
        scanf("%d", &num[i].ima);
        printf("Enter the real part of complex number %d: ", (i + 1));
        scanf("%d", &num[i].real);
    }

    for (int i = 0; i < n; i++)
    {
        a = a + num[i].ima;
    }
    for (int i = 0; i < n; i++)
    {
        b = b + num[i].real;
    }

    printf("The sum of the %d complex numbers is:\n%di + %d", n, a, b);

    return 0;
}