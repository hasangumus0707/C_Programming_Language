/*Klavyeden öğrenci sayısı (en fazla 100) ve ders geçme notunu alarak bu bilgileri tanımlanacak “hesapla” fonksiyonuna
gönderen bir “main” fonksiyonu hazırlayınız. “hesapla” fonksiyonu kendisine gelen öğrenci sayısı kadar notu klavyeden
okuyarak 100 elemanlı bir diziye kaydetmeli ve geçme notuna göre kaç tane öğrencinin dersten kaldığını bularak
fonksiyondan geri döndürürken, sınıf ortalamasını da ekrana yazdırmalıdır. Buna göre aşağıda verilen alanlara “main” ve
“hesapla” fonksiyonlarını yazınız */

#include <stdio.h>

int ogrenci_islem( int sayi , int gecme_not);

int main()
{
    int ogrenci_sayisi , gecme_notu ;

    printf("Ogrenci sayisini giriniz(max 100 olmali): ");
    scanf("%d", &ogrenci_sayisi);

    printf("Gecme notunu giriniz: ");
    scanf("%d", &gecme_notu);
    
    int kalan_sayi = ogrenci_islem( ogrenci_sayisi , gecme_notu);
    printf("\nKalan:%d", kalan_sayi);

    return 0;

}

int ogrenci_islem( int sayi , int gecme_not)
{
    int i , kalan ;
    float ortalama , toplam ;
    int array[100];

    kalan = 0;
    toplam = 0;
    ortalama = 0;
    

    for( i = 0 ; i < sayi ; i++)
    {
        printf("%d. ogrencinin notu: ", i + 1 );
        scanf("%d", &array[i]);
    }

     for( i = 0 ; i < sayi ; i++)
    {
        if(array[i] < gecme_not)
        {
            kalan++;
        }
    }

     for( i = 0 ; i < sayi ; i++)
    {
       toplam = toplam + array[i];
    }

    ortalama = toplam / sayi;
    printf("Ortalama: %.2f", ortalama);

    return kalan;
}