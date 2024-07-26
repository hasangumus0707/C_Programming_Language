// Cümleyi küçük harften büyük harfe büyük harften küçük harfe dönüştürme

#include <stdio.h>

void buyuktenkucuk(char*);
void kucuktenbuyuk(char*);

int main()
{
    char array[100];
    int secim;
    printf("Secim 1 - Buyuk harfleri kucuge cevir\nSecim 2 -Kucuk harfleri Buyuge cevir\nSeciminizi yapiniz:");
    scanf("%d", &secim);
    getchar();

    switch(secim){

    case 1: printf("Kelimeyi giriniz:");
            gets(array);
            buyuktenkucuk(array);
            break;

    case 2: printf("Kelimeyi giriniz:");
            gets(array);
            kucuktenbuyuk(array);   
            break;

    default: printf("Yanlis secim girdiniz.");
    }

    return 0;
}

void buyuktenkucuk (char* ptr)
{
    while(*ptr != '\0'){

        if(*ptr >='A' && *ptr <='Z'){

            putchar(*ptr + 32);
        }else{
            putchar(*ptr);
        }

    ptr++;

    }
}

void kucuktenbuyuk (char* ptr)
{
    while(*ptr != '\0'){

        if(*ptr >='a' && *ptr <='z'){

            putchar(*ptr - 32);
        }else{
            putchar(*ptr);
        }

    ptr++;

    }
}