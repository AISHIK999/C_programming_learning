#include <stdio.h>

int main()
{

    float len, rad;
    float pi = 3.14;

    printf("Enter the radius of the cylinder: \n");
    scanf("%f", &rad);

    printf("Enter the length/height of the cylinder: \n");
    scanf("%f", &len);

    printf("The volume of the cylinder is: %f", (4 / 3) * pi * rad * rad * len);

    return 0;
}