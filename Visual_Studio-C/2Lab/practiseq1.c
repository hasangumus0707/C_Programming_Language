/*Write a function that return the max value of a given single-linked list*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *add_last(struct node *head, int data);
int max_value(struct node *head);

int main()
{
    struct node *head = NULL;

    head = add_last(head, 5);
    head = add_last(head, 15);
    head = add_last(head, 50);
    head = add_last(head, 20);
    head = add_last(head, 25);

    int max = max_value(head);

    printf("Max value is: %d", max);

    return 0;
}

struct node *add_last(struct node *head, int data)
{

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory Error");
        return NULL;
    }

    newnode->data = data;

    if (head == NULL)
    {
        head = newnode;
        newnode->next = NULL;
    }
    else
    {
        struct node *temp;
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->next = NULL;
    }

    return head;
}

int max_value(struct node *head)
{
    int max = head->data;

    struct node *temp;
    temp = head;

    while (temp != NULL)
    {
        if (temp->data > max)
        {
            max = temp->data;
        }

        temp = temp->next;
    }

    return max;
}
