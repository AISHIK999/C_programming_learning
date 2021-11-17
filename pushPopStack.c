/*
    C program to implement push and pop operations in a stack

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

struct stack //Create stack structure
{
    int size;
    int top;
    int *arr;
};

int emptySta(struct stack *ptr) //Function to to return whether the stack is empty
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

int fullSta(struct stack *ptr, int size) //Function to to return whether the stack is full
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

void push(struct stack *ptr, int num, int size)     //Function to perform push operation
{
    if (fullSta(ptr, size))
    {
        printf("Stack Overflow!");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = num;
    }
}

int pop(struct stack *ptr)      // Function to perform pop operation
{
    if (emptySta(ptr))
    {
        printf("Stack Underflow! Unable to perform pop operation\n");
        return -123;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main()
{
    int size, reply, reply2, number;
    printf("Enter the size of the stack:\n");
    scanf("%d", &size);

    struct stack *staPtr = (struct stack *)malloc(sizeof(struct stack));
    staPtr->size = size;
    staPtr->top = -1;
    staPtr->arr = (int *)malloc(staPtr->size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Do you wish to enter an element in the stack?\nIf yes, enter '1':\n");
        scanf("%d", &reply);
        if (reply == 1)
        {
            printf("Enter the value of element number %d:\n", (i + 1));
            scanf("%d", &number);
            push(staPtr, number, size);
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("Do you wish to pop out the last element in the stack?\nIf yes, enter '1'\n");
        scanf("%d", &reply2);

        if (reply2 == 1)
        {
            printf("Popped %d from the stack.\n", pop(staPtr));
        }
        else
        {
            break;
        }
    }

    return 0;
}
