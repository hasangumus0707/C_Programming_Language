/*Aşağıda verilen prototipi kullanarak verilen bir katarda bir karakter arayan bir fonksiyon yazınız.

char * ara (char *, char)    */

#include <stdio.h>
#include <conio.h>

char *ara( char * , char );
int main()
{
char string[50];
char *sonuc;
char aranan;

printf("Bir string giriniz: ");
fgets( string , sizeof(string) , stdin );

printf("Aranan kelimeyi giriniz: ");
aranan = getchar();

printf("Girdiginiz string: %s \nAranan kelime: %c\n", string , aranan);

sonuc = ara(string , aranan);

if( sonuc == NULL)
{
    printf("Karakter bulunamadi.");
}
else
{
    printf("Karakter bulundu.");
}

return 0;
}

char *ara( char *str, char k )
{

while( *str != '\0')
{
    if(*str == k)
    {
        return str;
    }

    str++;

}

if( k == '\0')
{
    return str;
}
else
{
    return NULL;
}

}