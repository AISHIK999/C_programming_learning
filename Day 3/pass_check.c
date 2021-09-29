/*C program to calculate whether a student has passed or failed in the examination
We are consiering only three subjects: physics, chemistry and mathematics. We are also taking the full amrks as 100*/

#include <stdio.h>

int main()
{

    int phy, chm, mat;
    int total = (phy + chm + mat) / 3;

    printf("Enter the marks obtained in physics subject:\n");
    scanf("%d", &phy);

    printf("Enter the marks obtained in chemistry subject:\n");
    scanf("%d", &chm);

    printf("Enter the marks obtained in mathematics subject:\n");
    scanf("%d", &mat);

    if (phy >= 33 && chm >= 33 && mat >= 33 && total >= 40)
    {
        printf("Congratulations! You have passed");
    }
    else
    {
        printf("Sorry, you have failed");
    }

    return 0;
}