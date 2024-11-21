/* Soru 1: Kullanıcı tarafından istenilen sayıda girilen kelimeleri alfabetik olarak sıralayan programı
yazınız.
 
Kısıtlar:
1. Sıralama algoritması olarak “bubble sort” ve pointers kullanılmalıdır.
2. Sıralama sırasında “strcmp” ve “strcpy” fonksiyonlarından faydalanılmalıdır.
3. Dinamik hafıza yönetimi kullanılmalıdır.            */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Bubble Sort ile kelimeleri alfabetik sıraya göre sıralayan fonksiyon
void bubble_sort(char **array, int size) {
    char temp[100];  // Geçici depolama için bir buffer
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            // strcmp ile kelimeleri karşılaştır, alfabetik sıralama
            if (strcmp(array[j], array[j + 1]) > 0) {
                // strcpy ile kelimeleri yer değiştir
                strcpy(temp, array[j]);
                strcpy(array[j], array[j + 1]);
                strcpy(array[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    char **words;

    // Kullanıcıdan kaç kelime gireceğini öğren
    printf("Kaç kelime gireceksiniz? ");
    scanf("%d", &n);
    getchar();  // Enter karakterini tüketmek için

    // Her kelime için dinamik bellek ayırma
    words = (char **)malloc(n * sizeof(char *));
    if (words == NULL) {
        printf("Yeterli bellek yok!\n");
        return 1;
    }

    // Kullanıcıdan kelimeleri al ve bellekte sakla
    for (int i = 0; i < n; i++) {
        words[i] = (char *)malloc(100 * sizeof(char));  // Her kelime için 100 karakterlik yer
        if (words[i] == NULL) {
            printf("Yeterli bellek yok!\n");
            return 1;
        }
        printf("Kelime %d: ", i + 1);
        fgets(words[i], 100, stdin);
        words[i][strcspn(words[i], "\n")] = '\0';  // fgets ile gelen yeni satır karakterini kaldır
    }

    // Bubble sort ile kelimeleri alfabetik olarak sırala
    bubble_sort(words, n);


    // Sonuçları yazdır
    printf("\nAlfabetik olarak siralanmiş kelimeler:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
        free(words[i]);  // Her kelime için ayrılan belleği serbest bırak
    }

    // Tüm kelimeleri tutan dizi belleğini serbest bırak
    free(words);

    return 0;
}
