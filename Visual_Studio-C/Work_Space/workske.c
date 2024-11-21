#include <stdio.h>
#include <stdlib.h>

// Düğüm yapısı
struct Node {
    int data;
    struct Node* next;
};

// Başa düğüm ekleme fonksiyonu
void addNodeAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;  // Yeni düğüm eski baş düğümü işaret eder
    *head = newNode;        // Yeni düğüm baş düğüm olur
}

// Sona düğüm ekleme fonksiyonu
void addNodeAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Sona git
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
}

// Bağlı listeden belirli bir düğümü silme fonksiyonu
void deleteNode(struct Node** head, int key) {
    struct Node *temp = *head, *prev;

    // Eğer baş düğüm silinmek isteniyorsa
    if (temp != NULL && temp->data == key) {
        *head = temp->next; // Baş düğümü değiştir
        free(temp);         // Eski baş düğümü serbest bırak
        return;
    }

    // Silinecek düğümü bul
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // Eğer düğüm bulunamadıysa
    if (temp == NULL) return;

    // Düğümü listeden çıkar
    prev->next = temp->next;
    free(temp);  // Hafızayı serbest bırak
}

// Bağlı listedeki elemanları yazdırma fonksiyonu
void traverseList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Listeye düğümler ekle
    addNodeAtEnd(&head, 10);
    addNodeAtEnd(&head, 20);
    addNodeAtBeginning(&head, 5);
    addNodeAtEnd(&head, 30);

    printf("Linked List: ");
    traverseList(head);

    // Listeden düğüm sil
    deleteNode(&head, 20);
    printf("After deleting 20: ");
    traverseList(head);

    // Hafızayı temizle
    deleteNode(&head, 5);
    deleteNode(&head, 10);
    deleteNode(&head, 30);

    printf("After deleting all nodes: ");
    traverseList(head);

    return 0;
}
