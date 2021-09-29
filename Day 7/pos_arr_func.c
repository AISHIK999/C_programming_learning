/*
C program to print whether the element in an array is negative or positive
*/

#include <stdio.h>

void pos(int a[], int b)
{
    for (int i = 0; i < b; i++)
    {
        printf("The element number %d is ", (i + 1));
        if (a[i] > 0)
        {
            printf("positive.\n");
        }
        else if (a[i] < 0)
        {
            printf("negative.\n");
        }
        else
        {
            printf("neither negative nor positive.\n");
        }
    }
}

int main()
{
    int lim;

    printf("Enter the number of elements to be put inside the array: ");
    scanf("%d", &lim);
    int arr[lim];

    for (int i = 0; i < lim; i++)
    {
        printf("Enter the element number %d to be put inside the array: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    pos(arr, lim);

    return 0;
}