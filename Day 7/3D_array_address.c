/*
C program to print the address of the elements in a 3D array
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the lemgth of the array: ");
    scanf("%d", &a);
    printf("Enter the width of the array: ");
    scanf("%d", &b);
    printf("Enter the height of the array: ");
    scanf("%d", &c);

    int arr[a][b][c];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            for (int k = 0; k < a; k++)
            {
                printf("The address of array[%d][%d][%d] is: %u \n", i, j, k, &arr[i][j][k]);
            }
        }
    }

    return 0;
}