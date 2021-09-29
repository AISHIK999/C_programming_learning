/*
C program to store an array of elements and display tthe value of a specified array
*/

#include <stdio.h>

int main()
{
    int p;
    int arr[10];

    for (int i = 1; i < 11; i++)
    {
        printf("Enter the element number %d: ", i);
        scanf("%d", &arr[i - 1]);
    }

    printf("Enter the position of the element inside the array of which you want to determine the value:\n");
    scanf("%d", &p);
    printf("The value of the element number %d is: %d", p, arr[p - 1]);

    return 0;
}