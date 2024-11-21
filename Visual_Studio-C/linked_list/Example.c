/* Dışarıdan aldığı isimleri alfabetik sıra ile listeleyen, listeye yeni düğüm ekleyen, belirtilen
düğümü silen ve düğümdeki en uzun ismi bulan tek bağlı liste uygulaması.  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct personel
{
    char isim[20];
    struct personel *sornaki;
};

typedef struct personel dugum;
dugum *head , *onceki_dugum , *yeni , *silinecek;

void ara(char *aranan);

void ekle( char *s);


int main()
{
    char sec;
    char s[21];

    head = (dugum *)malloc( sizeof(dugum) );

    strcpy( head->isim , "listenin basi" );
    head->sornaki = NULL;

    do
    {
        system("cls");
        listele();
        printf("\n\n1 - Ekle\n2 - Sil\n3 - En Uzun Isim\n4 -Cikis\n\nSec: ");
        sec = getche();

        switch( sec )
        {
            case '1': printf("\nAdi: "); gets(s);
            ekle(s);
            break;

            case '2': printf("\nAdi: "); gets(s);
            sil(s);
            break;

            case '3': en_uzun_bul();
            break;

            case '4': exit(0);
            break;

        }
    }while (1);
    
    return 0;
}

void ara(char *aranan)
{
    dugum *p;
    p = head;
    onceki_dugum = head;

    while( p->sornaki != NULL )
    {
        p = p->sornaki;
        if( strcmp( p->isim , aranan ) >= 0)
        {
            break;
        }
        onceki_dugum = p;
    }
}

void ekle(char *s)
{
    yeni = (dugum*)malloc(sizeof(dugum));
    strcpy( yeni->isim , s);
    ara( yeni->isim );
    yeni->sornaki = onceki_dugum->sornaki;
    onceki_dugum->sornaki = yeni;
}