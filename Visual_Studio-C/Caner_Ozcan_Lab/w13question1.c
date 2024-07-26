/*Karenin alanını hesaplayan fonksiyonu hazırlayıp mainde kullanan programı yazınız*/

#include <stdio.h>

int kare_alan ( int a);

int main()
{

int kenar;

printf("Karenin bir kenar uzunlugunu giriniz:");
scanf("%d", &kenar);

printf("Karenin alani:%d", kare_alan( kenar ));


    return 0;
}

int kare_alan ( int a )
{

    return a * a;
}