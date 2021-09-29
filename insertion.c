/*
Program to insert an element into an array
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insert(int arr[], int size, int element, int index)
{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int n, e, f;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int arr[n + 1];

    for (int i = 1; i < n + 1; i++)
    {
        printf("Enter the element number %d: ", i);
        scanf("%d", &arr[i - 1]);
    }
    display(arr, n);

    printf("Enter the element you wish to enter: ");
    scanf("%d", &e);
    printf("Enter the number of elements after which you wish to enter the new element: ");
    scanf("%d", &f);

    insert(arr, n, e, f);
    n += 1;
    display(arr, n);
    return 0;
}