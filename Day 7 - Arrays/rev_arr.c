/*
C program to print the reverse of an array 
*/

#include <stdio.h>

int main()
{
    int n;
    int *j;

    printf("Enter the number of elements to be stored in the array: \n");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of element number %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array in reverse order is:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}