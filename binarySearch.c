/*
Program to search for an element in a sorted array using binary search

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int binarySearch(int arr[], int size, int element)
{
    int low = 0, high = (size - 1), mid = ((low + high) / 2), absent = -999;
    while (low <= high)
    {
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = arr[mid + 1];
        }
        else
        {
            high = arr[mid - 1];
        }
    }
    return absent;
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

    int size, element;

    printf("Enter the number of elements you wish to enter: \n");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the valueof element number %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, size);

    printf("Enter the element you wish to search in the sorted array: \n");
    scanf("%d", &element);

    int position = binarySearch(arr, size, element);

    if (position == -999)
    {
        printf("The element was not found in the array");
    }
    else
    {
        printf("The element is present at position %d in the sorted array. ", (position + 1));
    }

    return 0;
}