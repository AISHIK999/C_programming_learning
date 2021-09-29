/*C program to take user input as ratings and give applicable output using switch case*/

#include <stdio.h>

int main()
{

    int rat;

    printf("Enter your rating from 1- 5 \n 1 indicating worst and 5 indicating best experience\n");
    scanf("%d", &rat);

    switch (rat)
    {
    case 1:
        printf("We are terribly sorry for the inconvenience. We will try our best to improve");
        break;

    case 2:
        printf("Thank you for your feedback. It helps us to improve ourselves");
        break;

    case 3:
        printf("Thank you for your feedback. It is extremely valuable");
        break;

    case 4:
        printf("We are happy to know that you are pleased with the experience");
        break;

    case 5:
        printf("We are thrilled to know about your pleasant experience. Thank you for rating us the best!");
        break;

    default:
        printf("Invalid input");
        break;
    }

    return 0;
}