/*In this lab, you are expected to create a Binary Search Tree (BST) structure. In the main function, you need to
 get numbers from the user and add them to the BST. When adding each number, the number will be placed in an
 appropriate position (left or right) according to the structure of the tree: If the number added is smaller than
  the number in the node, it is added to the left, if it is larger, it is added to the right. The aim of the lab is
  to understand the sequential structure of the BST and the logic of adding data. After the addition operations are
  completed, you can print the tree to the screen in order with the inorder traversal method.

Bu labda, bir Binary Search Tree (BST) yapısı oluşturmanız beklenmektedir. main fonksiyonunda kullanıcıdan sayı
 alarak bu sayıları BST’ye eklemeniz gerekmektedir. Her bir sayı eklenirken, sayı ağacın yapısına göre uygun bir
 pozisyona (sol veya sağ) yerleştirilecektir: Eklenen sayı düğümdeki sayıdan küçükse sola, büyükse sağa eklenir.
 Laboratuvarın amacı, BST’nin sıralı yapısını ve veri ekleme mantığını anlamaktır. Ekleme işlemleri tamamlandıktan
  sonra, inorder traversal (sıralı gezme) yöntemiyle ağacı sıralı şekilde ekrana yazdırabilirsiniz.
*/

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