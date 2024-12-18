#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int height;
    struct node *left;
    struct node *right;
};

struct node *rightRotate(struct node *z);
struct node *leftRotate(struct node *z);
struct node *leftRightRotate(struct node *z);
struct node *rightLeftRotate(struct node *z);
struct node *insertToAVL(int x, struct node *tree);
int maxValue(int a, int b);
int height(struct node *n);
struct node *newNode(int data);
int getBalance(struct node *origin);
struct node *deleteNode(struct node *root, int key);
struct node *minValue(struct node *node);
void inOrder(struct node *root);


int main()
{
    struct node *root = NULL;

    root = insertToAVL(41, root);
    root = insertToAVL(20, root);
    root = insertToAVL(65, root);
    root = insertToAVL(11, root);
    root = insertToAVL(29, root);
    root = insertToAVL(50, root);
    root = insertToAVL(72, root);
    root = insertToAVL(24, root);
    root = insertToAVL(36, root);
    root = insertToAVL(26, root);

    printf("\nBefore Deleting.\n");
    inOrder(root);

    printf("\nDeleting...\n");
    root = deleteNode(root,29);
    root = deleteNode(root,36);

    printf("\nAfter Deleting.\n");
    inOrder(root);


    return 0;
}

struct node *rightRotate(struct node *z)
{
    struct node *temp = z->left;
    z->left = temp->right;
    temp->right = z;

    z->height = maxValue(height(z->left), height(z->right)) + 1;
    temp->height = maxValue(height(temp->left), height(temp->right)) + 1;
    return temp;
}

struct node *leftRotate(struct node *z)
{
    struct node *temp = z->right;
    z->right = temp->left;
    temp->left = z;

    z->height = maxValue(height(z->left), height(z->right)) + 1;
    temp->height = maxValue(height(temp->left), height(temp->right)) + 1;
    return temp;
}

struct node *leftRightRotate(struct node *z)
{
    z->left = leftRotate(z->left);
    return rightRotate(z);
}

struct node *rightLeftRotate(struct node *z)
{
    z->right = rightRotate(z->right);
    return leftRotate(z);
}

struct node *insertToAVL(int x, struct node *tree)
{
    if (tree != NULL)
    {
        if (x < tree->data)
        {
            tree->left = insertToAVL(x, tree->left);
        }
        else if (x > tree->data)
        {
            tree->right = insertToAVL(x, tree->right);
        }
        else
        {
            return tree;
        }

        tree->height = maxValue(height(tree->left), height(tree->right)) + 1;

        if ((height(tree->left) - height(tree->right)) > 1 && x < tree->left->data)
        {
            return rightRotate(tree);
        }

        if ((height(tree->left) - height(tree->right)) > 1 && x > tree->left->data)
        {
            return leftRightRotate(tree);
        }

        if ((height(tree->left) - height(tree->right)) < -1 && x > tree->right->data)
        {
            return leftRotate(tree);
        }

        if ((height(tree->left) - height(tree->right)) < -1 && x < tree->right->data)
        {
            return rightLeftRotate(tree);
        }
    }
    else
    {
        tree = newNode(x);
    }

    return tree;
}

int maxValue(int a, int b)
{
    return (a > b) ? a : b;
}

int height(struct node *n)
{
    return (n == NULL) ? 0 : n->height;
}

struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

int getBalance(struct node *origin)
{
    if (origin == NULL)
    {
        return 0;
    }

    return height(origin->left) - height(origin->right);
}

struct node *deleteNode(struct node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }

    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        if ((root->left == NULL) || (root->right == NULL))
        {
            struct node *temp = root->left ? root->left : root->right;

            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }

            else
            {
                *root = *temp;
            }

            free(temp);
        }
        else
        {
            struct node *temp = minValue(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }

        if (root == NULL)
        {
            return root;
        }

        root->height = maxValue(height(root->left), height(root->right)) + 1;

        if (getBalance(root) > 1 && getBalance(root->left) >= 0)
        {
            return rightRotate(root);
        }

        if (getBalance(root) > 1 && getBalance(root->left) < 0)
        {
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }

        if (getBalance(root) < -1 && getBalance(root->right) <= 0)
        {
            return leftRotate(root);
        }

        if (getBalance(root) < -1 && getBalance(root->right) > 0)
        {
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }

        return root;
    }
}

struct node *minValue(struct node *node)
{
    struct node *current = node;

    while (current->left != NULL)
    {
        current = current->left;
    }

    return current;
}

void inOrder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }

    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}