/*Delete node in a BST Tree*/

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
struct BSTNode *delete(struct BSTNode *root, int target);
struct BSTNode *findMin(struct BSTNode *root);

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
    printf("\nDeleting...\n");
    delete(root, 35);
    inorder(root);

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

struct BSTNode *findMin(struct BSTNode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->left != NULL)
    {
        return findMin(root->left);
    }
    return root;
}

struct BSTNode *delete(struct BSTNode *root, int target)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (target > root->data)
    {
        root->right = delete(root->right, target);
    }
    else if (target < root->data)
    {
        root->left = delete(root->left, target);
    }
    else if(root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    else if(root->left == NULL || root->right == NULL)
    {
        struct BSTNode *temp;
        
        if (root->left == NULL)
        {
            temp = root->right;
        }
        else
        {
            temp = root->left;
        }

        free(root);
        return temp;
    }
    else
    {
        struct BSTNode *temp;
        temp = findMin(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }
}
