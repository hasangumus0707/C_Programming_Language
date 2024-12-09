/*Search node in a bst tree*/

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
struct BSTNode *searchNode(struct BSTNode *root, int target);

int main()
{
    struct BSTNode *root = NULL;

    root = insertNode(root, 55);
    root = insertNode(root, 100);
    root = insertNode(root, 35);
    root = insertNode(root, 9);
    root = insertNode(root, 11);
    root = insertNode(root, 27);
    inorder(root);
    
    struct BSTNode *targetNode = searchNode(root,100);

    if (targetNode != NULL)
    {
        printf("\nTarget found %d", targetNode->data);
    }
    else
    {
        printf("\nNot found.");
    }

    return 0;
}

struct BSTNode *createNode(int number)
{
    struct BSTNode *newnode;
    newnode = (struct BSTNode *)malloc(sizeof(struct BSTNode));

    if (newnode == NULL)
    {
        printf("\nMemory error");
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

struct BSTNode *searchNode(struct BSTNode *root, int target)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (target > root->data)
    {
        return searchNode(root->right, target);
    }
    else if (target < root->data)
    {
        return searchNode(root->left, target);
    }

    return root;

}