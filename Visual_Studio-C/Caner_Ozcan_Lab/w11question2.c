/*Klavyeden girilen iki kelimeden ikincinin sonuna birinci kelimenin tersini ekleyerek ekrana yazdıran
programı C dili ile yazınız. Örnek çalışma ekranı aşağıda verilmiştir.*/

#include <stdio.h>

void main()
{
    char string[50];
    int i ,k;

    k = 0;

    printf("İki Kelimeli Bir String Giriniz: ");
    gets(string);

    for(i = 0 ; string[i] != '\0' ; i++)
    {
        if( string[i] != ' ')
        {
            k++;
        }
        else
        {
            break;
        }
    }

    i = k ;

    while(string[i] != '\0')
    {
        printf("%c", string[i]);
        i++;
    }

    for(k ; k >= 0 ; k--)
    {
        printf("%c", string[k]);
    }

}