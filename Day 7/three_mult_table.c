/*
C program to print the multiplicative table of three numbers using 2D array
*/

#include <stdio.h>
void printTable(int *mulTable, int a, int b)
{
    printf("The multiplication table of %d is :\n", a);
    for (int i = 0; i < b; i++)
    {
        mulTable[i] = a * (i + 1);
    }

    for (int i = 0; i < b; i++)
    {
        printf("%d X d = %d\n", a, i + 1, mulTable[i]);
    }
}

int main()
{
    int x, y, z, lim;

    printf("Enter the three numbers of wich the table is to be made: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    printf("Enter the limit of the table: \n");
    scanf("%d", &lim);

    int mulTable[3][lim];
    printTable(mulTable[0], x, lim);
    printTable(mulTable[1], y, lim);
    printTable(mulTable[2], z, lim);

    return 0;
}