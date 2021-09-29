/*
C program to print the position of a character in a given sentence
*/

#include <stdio.h>

int main()
{

    char sen[500];
    char sea;
    int a = 0;

    printf("Enter the sentence: \n");
    gets(sen);
    printf("Enter the characer you wish to mark the presence of: ");
    scanf("%c", &sea);

    printf("The position of the character %c in the sentence is: ", sea);

    for (int i = 0; i < strlen(sen); i++)
    {
        if (sen[i] == sea)
        {
            a++;
            printf("%d, ", (i + 1));
        }
    }
    if (a == 0)
    {
        printf("Absent");
    }

    return 0;
}