/*
Program to delete an element in an array

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int del(int size, int arr[], int index)
{
    for (int i = (index - 1); i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void disp(int size, int arr[])
{
    printf("The elements stored are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int size, index, choice;
    printf("Enter the number of elements you wish to store: \n");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the element number %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    disp(size, arr);

    printf("Do you wish to delete an element?\nIf YES, enter: 1\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\nEnter the position of the element you wish to delete: \n");
        scanf("%d", &index);

        if (index > size)
        {
            printf("OVERFLOW\n");
        }
        else if (index < 1)
        {
            printf("UNDERFLOW\n");
        }
        else
        {
            del(size, arr, index);
            size -= 1;
            disp(size, arr);
        }
    }
    else
    {
        printf("Stopping program");
    }

    return 0;
}