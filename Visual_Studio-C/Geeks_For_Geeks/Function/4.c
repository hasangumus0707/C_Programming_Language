/*C Program to Check Whether a Number Can Be Express as Sum of Two Prime Numbers*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char text[1000];
    int i, letterCount = 0;

    // Kullanıcıdan metin girişi alma
    printf("Metin girin: ");
    fgets(text, sizeof(text), stdin);

    // Metindeki harflerin sayısını hesaplama
    for (i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            letterCount++;
        }
    }

    // Harflerin sayısını yazdırma
    printf("Metindeki harf sayısı: %d\n", letterCount);

    return 0;
}