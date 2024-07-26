/*Bir sınıftaki 10 öğrencinin boy ve kilo değerlerini iki boyutlu diziye klavyeden okuyarak
aktaran ve ortalama boy ve kilo değerlerini hesaplayarak ekrana yazdıran programı C dili ile yazınız. (Caner özcan örnek soru)*/

#include <stdio.h>

int main()
{
    int boy_kilo[2][10];
    int i , j;
    float toplam_boy , toplam_kilo;

    toplam_boy = 0;
    toplam_kilo = 0;

    for( i = 0 ; i < 2 ; i++ )
    {
        for( j = 0 ; j < 10 ; j++)
        {
            if( i == 0)
            {
                printf("%d. Ogrencinin boyunu giriniz:" , j+1);

            }else{

                printf("%d. Ogrencinin kilosunu giriniz:" , j+1);

            }

            scanf("%d", &boy_kilo[i][j]);
        }
    }

    for( j = 0 ; j < 10 ; j++)
    {
        toplam_boy = toplam_boy + boy_kilo[0][j];
    }

     for( j = 0 ; j < 10 ; j++)
    {
        toplam_kilo = toplam_kilo + boy_kilo[1][j];
    }

    printf("Ortalama boy %.2f\n", toplam_boy / 10);
    printf("Ortalama kilo %.2f", toplam_kilo / 10);

    return 0;
}