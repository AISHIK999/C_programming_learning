/*
C program to sort elements of an array using bubble sort

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size)
{
    int temp;
    int checkSort;
    for (int i = 0; i < (size - 1); i++)
    {
        checkSort = 1;
        for (int j = 0; j < (size - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                checkSort = 0;
            }
        }
        if (checkSort)
        {
            return;
        }
    }
}

int main()
{
    int size;

    printf("Enter the number of elements you wish to enter: \n");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the valueof element number %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    printf("The elements entered are: \n");
    display(arr, size);

    bubbleSort(arr, size);
    printf("The elements after sorting are: ");
    display(arr, size);

    return 0;
}