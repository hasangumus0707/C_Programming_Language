/*Klavyeden Integer tipinde tek boyutlu bir dizi alan ve dizide kaç tane 4’ün katı olan sayı
olduğunu döndüren fonksiyonu ve ana programı yazın.*/

#include <stdio.h>

int array_function ( int a[] , int size );

int main()
{

int  i , n;

printf("Dizinin boyutunu giriniz:");
scanf("%d", &n);

int dizi[n];

printf("Dizinin elemanlarini giriniz:");

for( i = 0 ; i < n ; i++)
{
    printf("Dizi[%d]= ", i);
    scanf("%d", &dizi[i]);
    printf("\n");

}

printf("4' un kati olan %d tane sayi var." , array_function( dizi , n));

    return 0;
}

int array_function ( int a[] , int size )
{
 
 int sayac , b ;

for( b = 0 ; b < size ; b++)
{
    if( a[b] % 4 == 0)
    {
        sayac ++;
    }
}

return sayac;

}