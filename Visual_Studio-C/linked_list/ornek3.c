#include <stdio.h>
#include <stdlib.h>

struct student {
    int no;
    char name[40];
    int age;
    struct student* next;
};

typedef struct student node;
node* head = NULL; // Başlangıçta head'i NULL olarak ayarla

node* create_list();
void traverse_list(node *head);

int main() {
    head = create_list();
    traverse_list(head);
    return 0;
}

node* create_list() {
    int n, k;
    node *newnode, *p = NULL;

    printf("Öğrenci sayısını girin: ");
    scanf("%d", &n);

    for (k = 0; k < n; k++) {
        newnode = (node*)malloc(sizeof(node)); // Yeni düğüm ayır
        if (newnode == NULL) {
            printf("Bellek ayırma hatası!\n");
            exit(1);
        }

        printf("Öğrenci numarasını girin: ");
        scanf("%d", &newnode->no);

        printf("Öğrenci adını girin: ");
        scanf("%s", newnode->name);

        printf("Öğrenci yaşını girin: ");
        scanf("%d", &newnode->age);
        
        newnode->next = NULL; // Yeni düğümün next göstergesini NULL olarak ayarla

        if (head == NULL) { // Eğer liste boşsa
            head = newnode; // İlk düğüm başa atanır
        } else {
            p->next = newnode; // Yeni düğümü son düğüme bağla
        }
        p = newnode; // p'yi yeni düğüme taşı
    }

    return head;
}

void traverse_list(node *head) {
    int i = 1;

    while (head != NULL) {
        printf("Bilgileri %d. öğrenci: ", i);
        printf("Numara: %d, İsim: %s, Yaş: %d\n", head->no, head->name, head->age);
        i++;
        head = head->next; // Bir sonraki düğüme geç
    }
}
