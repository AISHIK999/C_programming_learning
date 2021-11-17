/*
C program to show whether a stack implemented using an array is full or not

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

struct stack    //Create stack structure
{
    int size;
    int top;
    int *arr;
};

int emptyStr(struct stack *ptr)     //Function to to return whether the stack is empty
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int fullStr(struct stack *ptr, int size)    //Function to to return whether the stack is full
{
    if (ptr->top == (size - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int staSize, reply;

    printf("Enter how many elements you wish to include in the stack:\n");
    scanf("%d", &staSize);

    struct stack *s;
    s->size = staSize;
    s->top = (-1);
    s->arr = (int *)malloc(s->size * sizeof(int));

    for (int i = 0; i < staSize; i++)
    {
        int ele = s->arr[i];    //stores the value of the variable 'ele' inside the stack in position number 'i'
        printf("Do you wish to enter an element in the stack?\nIf yes, enter '1':\n");
        scanf("%d", &reply);
        if (reply == 1)
        {
            printf("Enter the element number %d:\n", (i + 1));
            scanf("%d", &ele);
            s->top++;   //change the top position to the new position 
        }
        else
        {
            break;
        }
    }

    if (emptyStr(s))
    {
        printf("The stack is empty");
    }
    else if (fullStr(s, staSize))
    {
        printf("The stack is full");
    }
    else
    {
        printf("The stack is not empty");
    }

    return 0;
}