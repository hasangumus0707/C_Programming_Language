/*Remove N-th node from end of the given list*/

#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

struct node *addLast(struct node *head, int value);
struct node *nThFromEnd(struct node *head, int key, int listLength);
int lengthList(struct node *head);
void printList(struct node *head);

int main()
{
    struct node *head = NULL;

    head = addLast(head, 65);
    head = addLast(head, 20);
    head = addLast(head, 35);
    head = addLast(head, 10);
    head = addLast(head, 28);
    head = addLast(head, 99);

    printList(head);
    head = nThFromEnd(head, 4, lengthList(head));
    printList(head);

    return 0;
}

struct node *addLast(struct node *head, int value)
{
    struct node *newnode, *p;
    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory Error.");
        return NULL;
    }

    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        p->next = newnode;
    }

    p = newnode;
    return head;
}

struct node *nThFromEnd(struct node *head, int key, int listLength)
{
    struct node *current = head->next;
    struct node *prevCurrent = head;
    int i;

    if (key == listLength || key > listLength)
    {
        head = current;
        free(prevCurrent);

    }
    else
    {
    for (i = 1; i <= listLength - key - 1; i++)
    {
        current = current->next;
        prevCurrent = prevCurrent->next;
    }

    prevCurrent->next = current->next;
    free(current);

    }
    return head;
}

int lengthList(struct node *head)
{
    int length = 0;
    struct node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

void printList(struct node *head)
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}