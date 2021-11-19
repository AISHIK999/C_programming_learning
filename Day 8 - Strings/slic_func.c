/*
C program to split a string between a start and an end point
*/

#include <stdio.h>

void slice(char *arr, int x, int y)
{
    int i;
    for (i = 0; (i + x) < y; i++)
    {
        arr[i] = arr[i + x];
    }
    arr[i] = '\0';
}

int main()
{
    int a, z;
    char arr[100];

    printf("Enter the word: ");
    scanf("%s", arr);

    printf("Enter the starting position of the silce: ");
    scanf("%d", &a);
    printf("Enter the ending position of the silce: ");
    scanf("%d", &z);

    slice(arr, a, z);
    printf("The word after slicing between letter %d and %d is: %s", a, z, arr);

    return 0;
}