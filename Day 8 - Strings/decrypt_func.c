/*
C program to decrypt words encrypted using encrypt_func.c
*/

#include <stdio.h>

void dec(char *a)
{
    char *ptr = a;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char arr[100];

    printf("Enter the word you wish to decrypt: ");
    scanf("%s", &arr);

    dec(arr);
    printf("The word after decryption becomes: %s", arr);

    return 0;
}