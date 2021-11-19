/*
C program to find out how many times a letter is present in a sentence
*/

#include <stdio.h>

int pres(char a[], char b)
{
    int count = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == b)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char sen[500];
    char sea;

    printf("Enter the sentence: \n");
    gets(sen);
    printf("Enter the characer you wish to mark the presence of: ");
    scanf("%c", &sea);

    int times = pres(sen, sea);

    printf("The character %c is present %d times in the sentence. ", sea, times);

    return 0;
}