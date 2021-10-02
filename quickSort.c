/*
    Program to sort the elements inside an array using quick sort algorithm

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

void dispArr(int arr[], int size)
{
    printf("The elements inside the array are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int partition(int arr[], int low, int high)
{
    int base = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (arr[i] <= base)
        {
            i++;
        }

        while (arr[j] > base)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high)
{

    if (low < high)
    {

        int index = partition(arr, low, high);
        quickSort(arr, low, (index - 1));
        quickSort(arr, (index + 1), high);
    }
}

int main()
{
    int size;

    printf("Enter the number of elements you wish to input into the array: \n");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the element number %d:\n", (i + 1));
        scanf("%d", &arr[i]);
    }

    dispArr(arr, size);
    printf("\nBeginning Quick-sort\n");
    quickSort(arr, 0, (size - 1));
    printf("Quick-sort complete\n");
    dispArr(arr, size);

    return 0;
}