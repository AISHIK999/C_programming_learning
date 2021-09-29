/* C program to calculate the area of a arectangle */

#include <stdio.h>

int main()
{

    int length, breadth;

    printf("Enter the length of the rectangle:\n");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle:\n");
    scanf("%d", &breadth);

    printf("The area of the rectangle is: %d", length * breadth);

    return 0;
}