/*
C program to calculate the average of three numbers using function
*/
#include <stdio.h>
float average(int x, int y, int z)
{
  return (float)(x + y + z) / 3;
}
int main()
{
  int a, b, c;
  float avg;
  printf("Enter the first number: ");
  scanf("%d", &a);

  printf("Enter the second number: ");
  scanf("%d", &b);

  printf("Enter the third number: ");
  scanf("%d", &c);

  avg = average(a, b, c);
  printf("The Average of %d, %d and %d is: %.2f", a, b, c, avg);
  return 0;
}