/*
C program to insert a new node at the beginning of the linked list

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversePrint(struct Node *ptr)
{
    int i = 1;
    while (ptr != NULL)
    {
        printf("The element number %d is: %d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main()
{
    //Create integer type variables that
    int a, b, c, d, z, ind;

    //Create the nodes
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *last;

    //Allocate heap memory for nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    last = (struct Node *)malloc(sizeof(struct Node));

    //Take user input for values of all the variables
    printf("Enter the first element to store in the linked list:\n");
    scanf("%d", &a);
    printf("Enter the second element to store in the linked list:\n");
    scanf("%d", &b);
    printf("Enter the third element to store in the linked list:\n");
    scanf("%d", &c);
    printf("Enter the fourth element to store in the linked list:\n");
    scanf("%d", &d);

    //Link one node to the next
    head->data = a;
    head->next = second;

    second->data = b;
    second->next = third;

    third->data = c;
    third->next = last;

    last->data = d;
    last->next = NULL;

    //Traverse and print elements inside a node
    traversePrint(head);

    //Take user input for the new element
    printf("Enter the new element to insert:\n");
    scanf("%d", &z);

    //Declare the position of the index where new node is ti be inserted
    printf("Insert the position after which you want to inser the new node:\n");
    scanf("%d", &ind);

    //Declare the new head for the insertion of the new node in the beginning
    head = insertAtIndex(head, z, ind);

    traversePrint(head);

    return 0;
}