/*
C program to check if the adress of a variable directly passed is similar to the address of the variable when passed as a function
*/

#include <stdio.h>

int pointer(int x)
{

    printf("%u", &x);
}

int main()
{
    int i = 5;

    printf("The address of the variable 'i' assigned directly is: %u\n", &i);
    printf("The address of the variable 'i' assigned through function is: %u");
    pointer(i);

    return 0;
}

//The variables assigned in the pointer() and the main() are different and that's why they return different addresses