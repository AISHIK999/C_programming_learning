/*C program to check whether a person is able to get a driver's license or not based on their age
We are considering the permissible age for getting a driver's lisence is 18 years*/

#include <stdio.h>

int main()
{
    int a;

    printf("Enter your age:\n");
    scanf("%d", &a);

    if (a >= 18 && a < 70)
    {
        printf("You are eligible for a driver's license");
    }
    else
    {
        printf("Sorry, you are not eligible for a driver's license");
    }

    return 0;
}