/*Dört işlem*/

#include <stdio.h>

int toplam( int x , int y);
int cikarma( int x , int y);
int carpma( int x , int y);
float bolme( int x , int y);

int main()
{

    int sayi1 , sayi2 ;
    char operator;

printf("İki sayi giriniz:");
scanf("%d%d", &sayi1 , &sayi2 );

printf("Yapmak istediginiz islemi giriniz:");
scanf(" %c", &operator);

switch( operator)
{
    case '+' : printf("Toplam:%d", toplam( sayi1 , sayi2));
    break;

    case '-' : printf("Cikarma:%d", cikarma( sayi1 , sayi2));
    break;

    case '*' : printf("Carpim:%d", carpma( sayi1 , sayi2));
    break;

    case '/' : printf("Bölüm:%.2f", bolme ( sayi1 , sayi2));
    break;

    default : printf("Yanlis giris.");
    break;

}

 return 0;
}

int toplam ( int x , int y)
{
    return x + y ;
}

int cikarma ( int x , int y)
{
    return x - y ;
}

int carpma ( int x , int y)
{
    return x * y ;
}

float bolme ( int x , int y)
{
    return x / y ;
}