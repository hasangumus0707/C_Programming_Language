/*ENTER tuşuna basılana kadar sürekli olarak klavyedengirilen karakterleri alan ve her bir karakter için ekrana ‘*’
basan bir program yazınız.
Kullanıcı ENTER tuşuna bastığı zaman girilen karakterleri girildiği sırada ekrana yazdırınız. ENTER için karakter kodu
13’tür.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char *p;
    int i = 0 , k;

    p = (char*)malloc(sizeof(char));

    while(1)
    {
        *(p+i) = getch();

        if(*(p+i) == 13)
        {
            break;
        }
        else
        {
            putchar('*');
            i++;
            p = (char*) realloc(p , (i+1) * sizeof(char) );
        }
    }

    printf("\n");

    for( k = 0 ; k < i ; k++)
    {
        printf("%c", *(p+k));
    }
}






































/*#include <stdio.h>
#include <conio.h>

int main()
{
    char giris[50];
    char *p;
    int i = 0 , k;
    p = giris;

    while(1)
    {
        *( p + i ) = getch();

        if( *( p + i ) == 13)
        {
            break;
        }

        putchar('*');
       // printf("  Adres[%d]: %d\n", i , p+i);
        i++;
    }
    printf("\n");
    for( k = 0 ; k < i ; k++ )
    {
        //printf("  Adres[%d]: %d\n", k , p+k);
        putchar(*(p+k));
    }

    return 0;
}*/