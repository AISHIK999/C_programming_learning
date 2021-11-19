/*
C program to add two straight line equations using struct 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

struct vector
{
    int x;
    int y;
    int k;
};

int main()
{
    int a, b, c, d, m, n;
    struct vector a1, a2;

    printf("Enter the x coefficient of first vector: ");
    scanf("%d", &a);
    printf("Enter the y coefficient of first vector: ");
    scanf("%d", &b);
    printf("Enter the constant part of first vector: ");
    scanf("%d", &m);
    printf("Enter the x coefficient of second vector: ");
    scanf("%d", &c);
    printf("Enter the y coefficient of second vector: ");
    scanf("%d", &d);
    printf("Enter the constant part of second vector: ");
    scanf("%d", &n);

    a1.x = a;
    a1.y = b;
    a1.k = m;
    a2.x = c;
    a2.y = d;
    a2.k = n;

    printf("The sum of the two vectors are: \n\n %dx + %dy = %d", (a1.x + a2.x), (a1.y + a2.y), (a1.k + a2.k));

    return 0;
}