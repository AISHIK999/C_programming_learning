/*
Program to implement linear search algorithm

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

void linearSearch(int size, int arr[], int element)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("The element is present at position: %d\n", (i + 1));
        }
    }
}

void disp(int size, int arr[])
{
    printf("The elements of the array are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int size, element;

    printf("Enter the number of elements you wish to input: ");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element number %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    disp(size, arr);

    printf("\nEnter the element you wish to search in the array: ");
    scanf("%d", &element);

    linearSearch(size, arr, element);

    return 0;
}