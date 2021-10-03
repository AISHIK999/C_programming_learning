/*
    C program to sort the elements inside an array using merge sort algorithm

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int dispArr(int arr[], int size)
{
    printf("The elements in the array are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort(int arr[], int low, int mid, int high, int size)
{
    int i = low, j = (mid + 1), k = low, array[size];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            array[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            array[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        array[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        array[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = array[i];
    }
}

void mergeSort(int arr[], int low, int high, int size)
{
    int mid = (low + high) / 2;
    if (low < high)
    {
        mergeSort(arr, low, mid, size);
        mergeSort(arr, (mid + 1), high, size);
        sort(arr, low, mid, high, size);
    }
}

int main()
{

    int size;
    printf("Enter the quantity of elements you wish to insert into the array: \n");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the element number %d: \n", (i + 1));
        scanf("%d", &arr[i]);
    }

    int low = 0, high = size;

    dispArr(arr, size);

    mergeSort(arr, low, high, size);

    dispArr(arr, size);

    return 0;
}