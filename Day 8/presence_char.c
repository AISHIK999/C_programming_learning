/*
C program whether a character is poresent or absent in an array
*/

#include <stdio.h>

int pre(char a[], char b)
{
    int num = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == b)
        {
            num++;
        }
    }
    return num;
}

int main()
{
    char sen[500];
    char sea;
    printf("Enter the sentence: \n");
    gets(sen);
    printf("Enter the letter you wish to search: \n");
    scanf("%c", &sea);

    int a = pre(sen, sea);
    if (a == 0)
    {
        printf("The character is absent");
    }
    else
    {
        printf("The character is present");
    }

    return 0;
}