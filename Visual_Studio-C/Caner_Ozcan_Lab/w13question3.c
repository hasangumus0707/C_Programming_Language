/*Bir sayının çift mi tek mi olduğunu kontrol eden fonksiyonu ve kullanımını gösteren programı
yazınız.*/

#include <stdio.h>

void tek_cift ( int a);

int main()
{
    int number;

    printf("Sayiyi giriniz:");
    scanf("%d", &number);

    tek_cift ( number );



    return 0;
}

void tek_cift ( int a)
{

    if( a % 2 == 0)
    {
        printf("Sayi cifttir.");

    }else{

        printf("Sayi tekdir.");
    }
}