/*Boy ve kilo bilgisini alarak vücut kitle indeksini hesaplayan kitleIndeks isimli bir fonksiyon yazınız. Bu fonksiyon aşağıda
verilen tabloya göre değer döndürmektedir. Yazdığınız fonksiyonu main fonksiyonunda çağırarak kullanın ve bir
program yazınız. Programın örnek çalışması şekilde verildiği gibi olmalıdır. Vücut kitle indeksi hesabı aşağıda verilmiştir.

𝑉ü𝑐𝑢𝑡 𝐾𝑖𝑡𝑙𝑒 𝐼𝑛𝑑𝑒𝑘𝑠𝑖 = 𝑘𝑖𝑙𝑜 / 𝑏𝑜𝑦^2

Vücut Kitle İndeksi Fonksiyon Dönüş Değeri Durum

0-18   1 Zayıf
19-25  2 Normal
26-30  3 Kilolu
>30    4 Obez                                                                                                             */




#include <stdio.h>

int kitle_indeks( float kilo , float boy );

int main()
{
    float boy , kilo;

    printf("Kisinin kilosunu giriniz(kg): ");
    scanf("%f", &kilo);

    printf("Kisiniz boyunu giriniz(m): ");
    scanf("%f", &boy);

    int deger = kitle_indeks( kilo , boy );

    switch( deger )
    {
        case 1: printf("Vucut tipiniz: zayif");
        break;

        case 2: printf("Vucut tipiniz: YUSUF YALCIN (KASLI) (BACI KACIRAN)");
        break;

        case 3: printf("Vucut tipiniz: kilolu");
        break;

        case 4: printf("Vucut tipiniz: Obez .");
        break;
    }
    return 0;


}

int kitle_indeks( float kilo , float boy )
{
    float indeks = ( kilo / (boy * boy) );

    if( indeks > 0 && indeks < 18)
    {
        return 1;
    }
    else if( indeks > 18 && indeks < 25)
    {
        return 2;
    }
    else if( indeks > 25 && indeks < 30)
    {
        return 3 ;
    }
    else if(indeks > 29)
    {
        return 4;
    }
}
