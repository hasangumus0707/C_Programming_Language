/*Fonksiyona gönderilen beş sayının ortalamasını hesaplayıp geri döndüren programı yazınız.*/

#include <stdio.h>

float ortalama ( int a , int b , int c , int d , int e);

int main()
{
    int a, b, c, d, e ;

    printf("5 sayi giriniz:");
    scanf("%d%d%d%d%d", &a , &b , &c , &d , &e);

    printf("Ortalama:%.2f", ortalama( a , b , c , d , e ));


    return 0;
}

float ortalama (int a , int b , int c , int d , int e)
{
    return (a + b + c + d + e) / 5 ;
}