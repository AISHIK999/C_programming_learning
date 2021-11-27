/*
    C program to perform peek operation on a stack
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

void push(struct stack *ptr, int num, int size) //Function to perform push operation
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

int peek(struct stack *sPeek, int i) //Function to display element at given index
{
    if (sPeek->top - i + 1 < 0)
    {
        printf("Enter a valid index");
        return -1;
    }
    {
        return sPeek->arr[sPeek->top - i + 1];
    }
}

int main()
{

    int size, reply, ele, reply2, number;
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

    printf("Select your choice:\n");
    printf("1. Print a single element from given index\n2. Print the entire stack\n");
    scanf("%d", &reply2);

    switch (reply2)
    {
    case 1:
        printf("Enter the index of the stack of which you want to view the element:\n");
        scanf("%d", &ele);
        printf("The element at index %d is: %d", ele, peek(staPtr, ele));
        break;
    case 2:
        for (int j = 0; j < staPtr -> top + 1; j++)
        {
            printf("The element stored at index %d is: %d\n", j, peek(staPtr, j));
        }
        break;
        
    default:
        printf("Enter a valid choice");
        break;
    }

    return 0;
}