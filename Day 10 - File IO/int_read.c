/*
C program to scan integers from another file using FILE I/O

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b, c;
    FILE *ptr;
    ptr = fopen("testnum.txt", "r");

    fscanf(ptr, "%d", &a);
    fscanf(ptr, "%d", &b);
    fscanf(ptr, "%d", &c);

    printf("The three integers are %d, %d and %d", a, b, c);
    fclose(ptr);
    return 0;
}