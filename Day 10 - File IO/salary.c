/*
C program to store the salary and name of an employee in a separate .txt file

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    char name[50];
    int sal;
    FILE *ptr;

    printf("Enter your name: \n");
    gets(name);
    printf("Enter your annual salary (in INR): \n");
    scanf("%d", &sal);

    ptr = fopen("employeeInfo.txt", "w");
    fprintf(ptr, "The salary per annum of %s is INR %d", name, sal);
    fclose(ptr);

    return 0;
}