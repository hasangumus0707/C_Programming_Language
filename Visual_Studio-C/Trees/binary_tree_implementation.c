/*Binary tree implementation*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *create();

int main()
{

    struct node *root;
    root = NULL;
    root = create();

    return 0;
}

struct node *create()
{
    int number;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory error");
        return NULL;
    }

    printf("Enter number (-1 for no node): ");
    scanf("%d", &number);

    if (number == -1)
    {
        return NULL;
    }
    newnode->data = number;

    printf("Enter left child of %d: ", number);
    newnode->left = create();

    printf("Enter right child of %d: ", number);
    newnode->right = create();

    return newnode;
}