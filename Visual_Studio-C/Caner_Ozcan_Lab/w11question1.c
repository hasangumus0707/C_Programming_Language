/*1. Klavyeden girilen bir string içerisindeki kelimelerde kaçar tane “a” karakteri geçtiğini bularak ekrana yazdıran
programın C kodunu yazınız (Not: Girilen string ifadenin tüm karakterlerinin küçük harf olduğunu varsayın.
Programın örnek çalışma ekranı aşağıda verildiği gibi olmalıdır).
*/

#include <stdio.h>

void main()
{
    char string[50], i , k , kelime , a_sayisi ; 
    i = 0 , kelime = 0 , a_sayisi = 0 ;
    
    printf("String Giriniz: ");
    gets(string);
  //  scanf("%s", string);

    while( string[i] != '\0')
    {
        i++;
    }
    

    for( k = 0 ; k < i ; k++ )
    {
        if( string[k] == 97)
        {
            a_sayisi++;
        }

        if(string[k] == 32)
        {
            kelime++;
            printf("%d . kelimede %d tane a var.\n", kelime , a_sayisi);
            a_sayisi = 0;
        }
    }

    printf("%d . kelimede %d tane a var.\n", kelime + 1 , a_sayisi);
}