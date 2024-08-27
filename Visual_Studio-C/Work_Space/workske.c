#include <stdio.h>
#include <string.h>

int main() {
    char matris[3][3];
    int sifreliMetin[100];
    char orijinalMetin[100];
    int i, j, k = 0, sayi;

    // Şifreleme matrisini kullanıcıdan al
    printf("Sifreleme matrisini girin (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf(" %c", &matris[i][j]);
        }
    }

    // Şifreli metni kullanıcıdan al
    printf("Sifreli metni girin (boşlukla ayrilmis sayilar):\n");
    i = 0;
    while (scanf("%d", &sifreliMetin[i]) != EOF) {
        i++;
    }

    // Şifre çözme işlemi
    for (i = 0; i < k; i++) {
        sayi = sifreliMetin[i];
        int satir = sayi / 10;
        int sutun = sayi % 10;
        orijinalMetin[i] = matris[satir - 1][sutun - 1];
    }
    orijinalMetin[i] = '\0';

    // Orijinal metni ekrana yazdır
    printf("Orijinal metin: %s\n", orijinalMetin);

    return 0;
}


