// C program to delete a node with a given value

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

struct Node *deleteValue(struct Node *head, int value)
{
    struct Node *start = head;
    struct Node *new = head->next;

    while(new -> data != value && new -> next != NULL)
    {
        start = start->next;
        new = new->next;
    }

    if (new -> data == value){
    start->next = new->next;
    free(new);
    }
    return head;
}

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

int main()
{
    //Create integer type variables that
    int a, b, c, d, ans, val;

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

    //Ask use whether to delete a node or not
    printf("Do you wish to delete the a node?\n");
    printf("Enter '1' to accept:\n");
    scanf("%d", &ans);

    if (ans == 1)
    {
        printf("Enter the value which you wish to delete:\n");
        scanf("%d", &val);
        printf("***** DELETING NODE WITH ELEMENT %d *****\n\n", val);
        deleteValue(head, val);
        printf("SUCCESS!\n");
    }

    traversePrint(head);

    return 0;
}