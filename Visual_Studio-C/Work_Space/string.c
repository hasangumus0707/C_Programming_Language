#include <stdio.h>

void main() {
    char A[50];
    int i, kelime = 0, sayac = 0;

    printf("Bir string gir: ");
    gets(A);

    for (i = 0; A[i] != '\0'; i++) {
        if (A[i] == 'e') {
            sayac++;
        } else if (A[i] == ' ') {
            kelime++;
            printf("%d. kelimede %d adet e harfi var\n", kelime, sayac);
            sayac = 0;
        }
    }

    kelime++;
    printf("%d. kelimede %d adet e harfi var\n", kelime, sayac);
}
