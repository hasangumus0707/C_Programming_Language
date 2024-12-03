/* Binary Tree Traversals*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *create();
void preorder(struct node *root);
void inorder(struct node *root);
void postorder(struct node *root);

int main()
{

    struct node *root;
    root = NULL;
    root = create();

    printf("\nPreorder is: ");
    preorder(root);
    printf("\nInorder is: ");
    inorder(root);
    printf("\nPostorder is: ");
    postorder(root);

    return 0;
}

void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
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