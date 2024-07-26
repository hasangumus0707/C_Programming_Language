/*Şans Oyunu: Craps
53
Kurallar:
▪ İki zar atılır
▪ Zarların toplamı hesaplanır
▪ İlk atışta 7 veya 11 gelirse oyuncu kazanır
▪ İlk atışta 2, 3 veya 12 gelirse oyuncu kaybeder
▪ İlk atışta 4,5,6,8,9,10 gelirse bu oyuncunun puanı oluyor.
▪ Oyuncu 7 atmadan önce kendi puanını tutturmalıdır*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
srand(time(NULL));
 int i, number1, number2, point;

 for(i=1 ; i<=7 ; i++)
 {
    number1 = 1 + rand()%6;
    number2 = 1 + rand()%6;
    printf("%d. Atisin toplami:%d\n",i,number1+number2);
    if(i == 1 && (number1+number2 == 7 || number1+number2 == 11))
    {
        printf("Tebrikler oyunu kazandiniz.");
        return 0;
    }
    else if(i == 1 && (number1+number2 == 2 || number1+number2 == 3 || number1+number2 == 12))
    {
        printf("Oyunu kaybettiniz.");
        return 0;
        
    }
    else if(i == 1)
    {
        point = number1 + number2;
    }
    else if(number1+number2 == point)
    {
        printf("Tebrikler %d. atisda oyunu kazandiniz.",i);
        return 0;
    }


 }
    printf("7 atis sonucunda oyunu kaybettiniz.");

    return 0;
}
