#include <stdio.h>
#include <stdlib.h>

// AVL ağacı düğüm yapısı ve fonksiyon prototipleri
struct node
{
    int data;
    int height;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data);
int height(struct node *n);
int maxValue(int a, int b);
int getBalance(struct node *n);
struct node *rightRotate(struct node *z);
struct node *leftRotate(struct node *z);
struct node *leftRightRotate(struct node *z);
struct node *rightLeftRotate(struct node *z);
struct node *insertToAVL(int x, struct node *root);
struct node *deleteNode(struct node *root, int key);
struct node *minValue(struct node *node);
void inOrder(struct node *root);
void preOrder(struct node *root);
void postOrder(struct node *root);

int main()
{
    struct node *root = NULL;

    // AVL ağacına eleman ekleme
    printf("Adding elements to the AVL tree...\n");
    root = insertToAVL(50, root);
    root = insertToAVL(30, root);
    root = insertToAVL(25, root);
 /*   root = insertToAVL(20, root);
    root = insertToAVL(40, root);
    root = insertToAVL(60, root);
    root = insertToAVL(80, root);*/

    printf("\nIn-Order Traversal (Sorted Order):\n");
    inOrder(root); // Çıktı: 20 30 40 50 60 70 80

    printf("\nPre-Order Traversal:\n");
    preOrder(root); // Çıktı: 50 30 20 40 70 60 80

    printf("\nPost-Order Traversal:\n");
    postOrder(root); // Çıktı: 20 40 30 60 80 70 50

    // AVL ağacından eleman silme
    printf("\n\nDeleting elements from the AVL tree...\n");
   // root = deleteNode(root, 20);
    //root = deleteNode(root, 30);
    root = deleteNode(root, 25);

    printf("\nIn-Order Traversal After Deletion:\n");
    inOrder(root); // Çıktı: 40 60 70 80

    printf("\nPre-Order Traversal After Deletion:\n");
    preOrder(root); // Çıktı: 60 40 70 80

    printf("\nPost-Order Traversal After Deletion:\n");
    postOrder(root); // Çıktı: 40 80 70 60

    return 0;
}

// AVL ağacı düğüm oluşturma
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

// Yükseklik hesaplama
int height(struct node *n)
{
    return (n == NULL) ? 0 : n->height;
}

// İki sayının maksimumunu döner
int maxValue(int a, int b)
{
    return (a > b) ? a : b;
}

// Düğümün denge faktörünü hesaplama
int getBalance(struct node *n)
{
    return (n == NULL) ? 0 : height(n->left) - height(n->right);
}

// Sağ rotasyon
struct node *rightRotate(struct node *z)
{
    struct node *temp = z->left;
    z->left = temp->right;
    temp->right = z;

    z->height = maxValue(height(z->left), height(z->right)) + 1;
    temp->height = maxValue(height(temp->left), height(temp->right)) + 1;

    return temp;
}

// Sol rotasyon
struct node *leftRotate(struct node *z)
{
    struct node *temp = z->right;
    z->right = temp->left;
    temp->left = z;

    z->height = maxValue(height(z->left), height(z->right)) + 1;
    temp->height = maxValue(height(temp->left), height(temp->right)) + 1;

    return temp;
}

// Sol-sağ rotasyon
struct node *leftRightRotate(struct node *z)
{
    z->left = leftRotate(z->left);
    return rightRotate(z);
}

// Sağ-sol rotasyon
struct node *rightLeftRotate(struct node *z)
{
    z->right = rightRotate(z->right);
    return leftRotate(z);
}

// AVL ağacına eleman ekleme
struct node *insertToAVL(int x, struct node *root)
{
    if (root == NULL)
    {
        return newNode(x);
    }

    if (x < root->data)
    {
        root->left = insertToAVL(x, root->left);
    }
    else if (x > root->data)
    {
        root->right = insertToAVL(x, root->right);
    }
    else
    {
        return root;
    }

    root->height = maxValue(height(root->left), height(root->right)) + 1;
    int balance = getBalance(root);

    if (balance > 1 && x < root->left->data)
    {
        return rightRotate(root);
    }

    if (balance < -1 && x > root->right->data)
    {
        return leftRotate(root);
    }

    if (balance > 1 && x > root->left->data)
    {
        return leftRightRotate(root);
    }

    if (balance < -1 && x < root->right->data)
    {
        return rightLeftRotate(root);
    }

    return root;
}

// AVL ağacından eleman silme
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
        if (root->left == NULL || root->right == NULL)
        {
            struct node *temp = root->left ? root->left : root->right;

            if (temp == NULL)
            {
                temp = root;
                root = NULL;
                printf("25hebele %d", temp->data);
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
    }

    if (root == NULL)
    {
        return root;
    }

    root->height = maxValue(height(root->left), height(root->right)) + 1;
    int balance = getBalance(root);

    if (balance > 1 && getBalance(root->left) >= 0)
    {
        return rightRotate(root);
    }

    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && getBalance(root->right) <= 0)
    {
        return leftRotate(root);
    }

    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

// Ağaçtaki en küçük değeri bulma
struct node *minValue(struct node *node)
{
    struct node *current = node;
    while (current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

// In-Order traversal
void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

// Pre-Order traversal
void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Post-Order traversal
void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}
