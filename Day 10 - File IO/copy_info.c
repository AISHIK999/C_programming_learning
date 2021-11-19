/*
C program to copy data from one .txt file to another .txt file

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    char c;
    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("testchar.txt", "r");
    ptr2 = fopen("copyOut.txt", "w");

    while (1)
    {
        c = fgetc(ptr1);
        if (c == EOF)
        {
            break;
        }
        fprintf(ptr2, "%c", c);
    }

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}