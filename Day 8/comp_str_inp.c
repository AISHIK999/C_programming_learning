/*
C program to check whether a string input using %c and %s respectively are similar or not
*/

#include <stdio.h>

int main()
{
    int n, i = 0;
    char c;

    printf("Enter the length of the word: ");
    scanf("%d", &n);
    char arr[n], newarr[n];

    printf("Enter the word: ");
    scanf("%s", arr);

    printf("***** Enter the same word letter by letter *****\n***** Press ENTER when done *****\n");

    while (c != '\n')
    {
        printf("Enter the letter number %d: ", i + 1);
        fflush(stdin);
        scanf("%c", &c);
        newarr[i] = c;
        i++;
    }
    newarr[i - 1] = '\0';

    printf("The first word is: %s\n", arr);
    printf("The second word is: %s\n", newarr);

    if (strcmp(arr, newarr) == 0)
    {
        printf("The two words are similar");
    }
    else
    {
        printf("The two words are dissimilar");
    }

    return 0;
}