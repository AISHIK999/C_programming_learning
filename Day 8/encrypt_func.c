/*
C program to encrypt a string adding 1 to it's ASCII value
*/

#include <stdio.h>

void enc(char *a)
{
    char *ptr = a;
    while (*ptr != 0)
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char arr[100];

    printf("Enter the word you wish to encrypt: ");
    scanf("%s", &arr);

    enc(arr);
    printf("The word after encryption becomes: %s", arr);

    return 0;
}