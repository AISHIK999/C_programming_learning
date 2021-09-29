//Fibonacci Series using Recursion
#include <stdio.h>
int fib(int n)
{
    if (n <= 1)
        return n;

    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{

    int a;
    printf("Enter the number of term of the fibonacci series of which you need to find the vale: \n");
    scanf("%d", &a);
    printf("The value of the requested term of the fibonacci series is: %d", fib(a));
    return 0;
}
