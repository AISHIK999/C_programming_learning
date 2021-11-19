//C program to calculate the area of a circle

#include <stdio.h>

int main()
{

    int rad;
    float pi = 3.14;

    printf("Enter the radius of the circle:\n");
    scanf("%d", &rad);

    printf(" The area of the circle is: %f", pi * rad * rad);

    return 0;
}