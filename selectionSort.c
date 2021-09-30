/*
    Program to sort the elements in an array using selection sort algorithm

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

void dispArr(int arr[], int size)
{
    printf("The elements stored inside the array are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void selectionSort(int arr[], int size)
{
    printf("\n\nInitiating selection sort\n");
    
    for (int i = 0; i < size; i++)
    {   
        int index = i, temp;
        for (int j = (i + 1); j < size; j++)
        {  
            if (arr[index] > arr[j])
            {
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    printf("Successfuly sorted the elements\n\n");
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

    dispArr(arr, size);

    selectionSort(arr, size);

    dispArr(arr, size);

    return 0;
}