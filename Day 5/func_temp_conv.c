/*
C program to celcius temperature into farenheit
*/

#include <stdio.h>

float conv(float c)
{
    return (float)(c * 9 / 5) + 32;
}

int main()
{
    float celc, faren;

    printf("Enter the temperature in celcius:\n");
    scanf("%f", &celc);

    faren = conv(celc);
    printf("The farenheit equivalent of the celcius temperature is:%f", faren);

    return 0;
}