/*C program to calculate tax based on annual income
NOTE: I don't know much about tax payments, so this program is entirely based on data collected from the internet*/

#include <stdio.h>

int main()
{

    int inc;

    printf("Enter your annual income: \n");
    scanf("%d", &inc);

    if (inc >= 0 && inc <= 250000)
    {
        printf("You don't have to pay any taxes");
    }
    else if (inc > 250000 && inc <= 500000)
    {
        printf("You have to pay INR %d as tax", 5 * inc / 100 - 5 * 250000 / 100);
    }
    else if (inc > 50000 && inc <= 1000000)
    {
        printf("You have to pay INR %d as tax", 20 * inc / 100 - 20 * 500000 / 100);
    }
    else if (inc < 1000000)
    {
        printf("You have to pay INR %d as tax", 30 * inc / 100 - 30 * 1000000 / 100);
    }
    else
    {
        printf("Inavlid input!");
    }

    return 0;
}