/*Write a C program to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]*/

#include <stdio.h>

int main()
{

int terim_sayisi , x , sayac , sayac_iki ;
float toplam , adim , us , faktöriyal ;

us = 1 ;
faktöriyal = 1 ;


printf("X degerini giriniz:");
scanf("%d" , &x);

printf("Terim sayisini giriniz:");
scanf("%d" , &terim_sayisi);

toplam = 1 + x ;

for( sayac = 2 ; sayac <= terim_sayisi ; sayac++ )
{
    sayac_iki = sayac ;

    while(sayac_iki > 0)
    {
        us = us * x ;
        faktöriyal = faktöriyal * sayac_iki ;
        sayac_iki--;
    }

    adim = us / faktöriyal ;
        toplam = toplam + adim ;
           us = 1 ;
            faktöriyal = 1 ;
}

printf("Toplam: %.2f", toplam);

    return 0;
}