/*Fonsiyon kullanmadan link list olusturma bellek yönetimi kullanılıyor sayılarımız 4, 8 , 6*/

#include <stdio.h>
#include <stdlib.h>

// Düğüm yapısı
struct Node {
    int data;            // Düğümün verisi
    struct Node* next;   // Bir sonraki düğüme işaretçi
};

int main() {
    // Bağlı listenin başlangıcını işaret eden bir pointer (head)
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Dinamik olarak bellek tahsis et
    head = (struct Node*)malloc(sizeof(struct Node));    // İlk düğüm
    second = (struct Node*)malloc(sizeof(struct Node));  // İkinci düğüm
    third = (struct Node*)malloc(sizeof(struct Node));   // Üçüncü düğüm

    // Düğümlere veri ekle ve bağlantıları oluştur
    head->data = 4;      // İlk düğüme 4 sayısını ekle
    head->next = second; // İlk düğüm ikinci düğüme işaret ediyor

    second->data = 8;    // İkinci düğüme 8 sayısını ekle
    second->next = third; // İkinci düğüm üçüncü düğüme işaret ediyor

    third->data = 6;     // Üçüncü düğüme 6 sayısını ekle
    third->next = NULL;  // Son düğüm, bir sonraki düğüm olmadığı için NULL

    // Listeyi yazdır
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next; // Bir sonraki düğüme ilerle
    }

    return 0;
}
