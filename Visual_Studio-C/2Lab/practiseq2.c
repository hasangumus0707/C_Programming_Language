/*Merge two sorteed Linked List.
Given two , sorted linked lists, merge them into one sorted list and return the head of the new list*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void sorted(struct node *head);
void printList(struct node *head);

int main()
{

    struct node *node1_first = (struct node *)malloc(sizeof(struct node));
    node1_first->data = 5;

    struct node *node1_second = (struct node *)malloc(sizeof(struct node));
    node1_second->data = 25;

    struct node *node1_third = (struct node *)malloc(sizeof(struct node));
    node1_third->data = 45;

    struct node *head1;
    head1 = node1_first;
    node1_first->next = node1_second;
    node1_second->next = node1_third;
    node1_third->next = NULL;

    struct node *node2_first = (struct node *)malloc(sizeof(struct node));
    node2_first->data = 35;

    struct node *node2_second = (struct node *)malloc(sizeof(struct node));
    node2_second->data = 55;

    struct node *head2;
    head2 = node2_first;
    node2_first->next = node2_second;
    node2_second->next = NULL;

    struct node *temp;
    temp = head1;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = head2;


    printList(head1);
    sorted(head1);
    printList(head1);

    
    return 0;
}

void sorted(struct node *head)
{

    struct node *i, *j;
    int temp;

    for (i = head; i != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->data > j->data)
            {
                temp = j->data;
                j->data = i->data;
                i->data = temp;
            }
        }
    }
}

void printList(struct node *head)
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}