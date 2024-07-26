#include <stdio.h>

int bolme_islemi(int, int, int*);

int main()
{
    int bolunen = 13, bolen = 4;
    int bolum, kalan;

    bolum = bolme_islemi(bolunen, bolen, &kalan);
    printf("Bolum: %d Kalan: %d\n",bolum , kalan);
    getchar();
    return 0;
}

int bolme_islemi(int a, int b, int *kalan)
{
    *kalan = a % b;
    return (a / b);
}