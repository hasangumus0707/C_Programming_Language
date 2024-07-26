/* 8 elemanlı float diziye klavyeden değer girin. Girilen değerlerin ortalamasını hesaplayıp
ekrana yazdırın.*/

#include <stdio.h>

int  main()
{
    float array[8] , ortalama , toplam ;
    toplam = 0;

    printf("Dizinin elemanlarini giriniz.\n");

    for(int i = 0 ; i < 8 ; i++)
    {
        printf("array[%d] = ", i);
        scanf("%f", &array[i]);
        toplam = toplam + array[i];
    }

     ortalama = toplam / 8 ;

     printf("Ortalama : %f" , ortalama);

     return 0;
}