/*
C program to calculate the gravitational attraction of a body
*/

#include <stdio.h>

float force(float mass, float gravity)
{
    return (mass * gravity);
}

int main()
{
    float m, att;
    float g = 9.8;

    printf("Enter the mass of the body in kilogram:\n");
    scanf("%f", &m);

    att = force(m, g);

    printf("The gravitational attraction of the body of mass %f kg is: %f m/s^2", m, att);

    return 0;
}