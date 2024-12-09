/*Find min number in BST tree*/

#include <stdio.h>
#include <stdlib.h>

struct BSTNode
{
    int data;
    struct BSTNode *left, *right;
};

struct BSTNode *createNode(int number);
struct BSTNode *insertNode(struct BSTNode *root, int number);
void inorder(struct BSTNode *root);
int findMin(struct BSTNode *root);

int main()
{
    struct BSTNode *root = NULL;

    root = insertNode(root, 55);
    root = insertNode(root, 100);
    root = insertNode(root, 35);
    root = insertNode(root, 9);
    root = insertNode(root, 1);

    inorder(root);
    printf("\nMin number in BST tree is %d",findMin(root));

    return 0;
}

struct BSTNode *createNode(int number)
{
    struct BSTNode *newnode;
    newnode = (struct BSTNode *)malloc(sizeof(struct BSTNode));

    if (newnode == NULL)
    {
        printf("Memory Error.");
        return NULL;
    }

    newnode->data = number;
    newnode->right = NULL;
    newnode->left = NULL;

    return newnode;
}

struct BSTNode *insertNode(struct BSTNode *root, int number)
{
    if (root == NULL)
    {
        return createNode(number);
    }

    if (number < root->data)
    {
        root->left = insertNode(root->left, number);
    }

    if (number > root->data)
    {
        root->right = insertNode(root->right, number);
    }

    return root;
}

void inorder(struct BSTNode *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int findMin(struct BSTNode *root)
{
    if (root == NULL)
    {
        printf("\nTree is empty.");
        return -1;
    }

    if (root->left == NULL)
    {
        return root->data;
    }
    else
    {
        findMin(root->left);
    }
}