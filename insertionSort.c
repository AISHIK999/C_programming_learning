/*
    Program to use insertion sort to sort the elements of an array
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

int insertionSort(int arr[], int size)
{
    for (int i = 1; i <= (size - 1); i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    dispArr(arr, size);

    insertionSort(arr, size);

    dispArr(arr, size);

    return 0;
}