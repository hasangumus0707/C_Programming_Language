/*Flatter a Multilevel Singly L.L  You are given a single L.L. where each element contains a child pointer that may or may not point to seperated sibgle L.L. Flatter the list so that all nodes appear in a single Level , singly Linked List

Bu problem, çok seviyeli (multilevel) bağlı bir listeden düz (flat) bir bağlı liste oluşturmayı amaçlar. Her düğüm, normal "next" işaretçisinin yanında bir "child" işaretçisine de sahiptir.
Örnek:
Copy1 -> 2 -> 3 -> 4 -> 5 -> NULL
    |
    7 -> 8 -> 9 -> NULL
3'ün child listesi: 7 -> 8 -> 9
Düzleştirme sonrası:
Copy1 -> 2 -> 3 -> 7 -> 8 -> 9 -> 4 -> 5 -> NULL
Algoritma adımları:

Her düğümü dolaş
Eğer child listesi varsa, mevcut listenin o noktasına ekle
Child listeleri de aynı şekilde düzleştirilmeli
Tüm child listeler ana listede sırayla eklenecek

Temel amaç: İç içe geçmiş tüm listeleri tek bir seviyeye indirmek.*/

#include <stdio.h>
#include <stdlib.h>

struct ListNode
{

    int data;
    struct ListNode *next;
    struct ListNode *child;
};

struct ListNode *createNode(int value);
void printList(struct ListNode *head);
struct ListNode *getLastNode(struct ListNode *head);
struct ListNode *flattenList(struct ListNode *head);
void sortedList(struct ListNode *head);

int main()
{

    struct ListNode *head;

    head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(10);

    head->next->child = createNode(7);
    head->next->child->next = createNode(8);
    head->next->child->next->next = createNode(9);

    printf("Before Sort List\n");
    printList(head);

    flattenList(head);
    sortedList(head);

    printf("After Sort List\n");
    printList(head);

    return 0;
}

struct ListNode *createNode(int value)
{
    struct ListNode *newnode = (struct ListNode *)malloc(sizeof(struct ListNode));

    newnode->data = value;
    newnode->next = NULL;
    newnode->child = NULL;
    return newnode;
}

void printList(struct ListNode* head)
{
    struct ListNode *temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

struct ListNode *getLastNode(struct ListNode *head)
{
    struct ListNode *lastNode = head;

    while (lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }

    return lastNode;
}

struct ListNode *flattenList(struct ListNode *head)
{
    struct ListNode *current = head;

    while (current != NULL)
    {

        if (current->child != NULL)
        {
            struct ListNode *lastNode = getLastNode(current);
            lastNode->next = current->child;
            current->child = NULL;
        }

        current = current->next;
    }

    return head;
}

void sortedList(struct ListNode *head)
{
    struct ListNode *i , *j;
    int temp;

    for (i = head ; i != NULL ; i=i->next)
    {
        for (j = i->next ; j != NULL ; j = j->next)
        {
            if (i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }

}