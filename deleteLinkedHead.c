// C program to delete the head node of a linked list

/*
C program to store four elements in a linked list and print them

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

struct Node *deleteHead(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
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
    int a, b, c, d, ans;

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

    //Ask use whether to delete head or not
    printf("Do you wish to delete the head node?\n");
    printf("Enter '1' to accept:\n");
    scanf("%d", &ans);

    printf("*****DELETING HEAD NODE*****\n\n");
    if (ans == 1)
    {
        head = deleteHead(head);
    }
    printf("SUCCESS!\n");

    traversePrint(head);

    return 0;
}