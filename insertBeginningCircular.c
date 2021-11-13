/*
C prpgram to insert a new elemnt as head node

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

struct Node *insertHead(struct Node *head, int value)
{  struct Node * ptr;
   ptr = (struct Node *) malloc (sizeof(struct Node));
   ptr->data = head->data;
   head->data = value;
   ptr->next = head->next;
   head->next = ptr;
   return head ;
}

void traversePrint(struct Node *head)
{
    int i = 1;
    while (head != NULL)
    {
        printf("The element number %d is: %d\n", i, head->data);
        head = head->next;
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

    printf("Do you wish to delete the a node?\n");
    printf("Enter '1' to accept:\n");
    scanf("%d", &ans);

    if (ans == 1)
    {
        printf("Enter the value of the element you wish to kep as head:\n");
        scanf("%d", &val);
        head = insertHead(head, val);
        traversePrint(head);
    }

    return 0;
}
