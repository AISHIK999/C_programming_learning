#include <stdio.h>

int main()
{

    int pri, roi, time;

    printf("Enter the principal amount: \n");
    scanf("%d", &pri);

    printf("Enter the interest rate per annum: \n");
    scanf("%d", &roi);

    printf("Enter the number of years: \n");
    scanf("%d", &time);

    printf("The final amount is: %d", pri + pri * roi / 100 * time);

    return 0;
}