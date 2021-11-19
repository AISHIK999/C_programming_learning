/*
C program to enter the sum and average of two numbers using call by reference and printing the answer in main()
*/

#include <stdio.h>

int addavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (a + b) / 2;
}

int main()
{
    int x, y, add;
    float average;

    printf("Enter the first value:\n");
    scanf("%d", &x);
    printf("Enter the second value:\n");
    scanf("%d", &y);

    addavg(x, y, &add, &average);

    printf("The sum of %d and %d is: %d\n", x, y, add);
    printf("The average of %d and %d is: %f\n", x, y, average);

    return 0;
}