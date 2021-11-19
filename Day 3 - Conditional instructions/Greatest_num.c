/*C program to find the greatest of the four numbers entered by the user*/

#include <stdio.h>

int main()
{

    int n1, n2, n3, n4;

    printf("Enter the first number: \n");
    scanf("%d", &n1);

    printf("Enter the second number: \n");
    scanf("%d", &n2);

    printf("Enter the third number: \n");
    scanf("%d", &n3);

    printf("Enter the fourth number: \n");
    scanf("%d", &n4);

    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        printf("The greatest number is %d", n1);
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4)
    {
        printf("The greatest number is %d", n2);
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4)
    {
        printf("The greatest number is %d", n3);
    }
    else if (n4 > n1 && n4 > n3 && n4 > n3)
    {
        printf("The greatest number is %d", n4);
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}