/*C program to check whether input alphabet is uppercase or lowercase*/

#include <stdio.h>

int main()
{

    char inp;

    printf("Enter the alphabet: \n");
    scanf("%c", &inp);

    if (inp >= 97 && inp <= 122)
    {
        printf("The entered alphabet is lowercase");
    }
    else if (inp >= 65 && inp <= 90)
    {
        printf("The entered alphabet is uppercase");
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}