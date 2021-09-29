//same as natural_sum.c but with while loop//

#include <stdio.h>

int main()
{
    int sum = 0, a, num = -0;

    printf("Enter the limit of the sum: \n");
    scanf("%d", &a);

    while (num < a + 1)
    {
        sum = sum + num;
        num++;
    }
    printf("The sum of all natural numbers upto %d is: %d", a, sum);

    return 0;
}