#include <stdio.h>

int main()
{

    float far, cel;

    printf("Enter the temperature in celcius: \n");
    scanf("%f", &cel);

    printf("The farenheit equivalent of the input temperature is: %f", cel * 9 / 5 + 32);

    return 0;
}