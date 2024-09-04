/*(Klavyeden girilen bir metnin içerisinde her harfin tekrar sayısını bularak
ekrana yazdıran programın c kodunu yazınız. Örnek ekran çıktısı yanda verilmiştir.
Kelimenin tüm harflerinin büyük olduğunu varsayınız. ASCII değeri A=65)*/

#include <stdio.h>

int main()
{

    char string[100];
    int i = 0 , c;
    int *ptr;

    ptr = ( int *)calloc(26 , sizeof(int));

    printf("Enter a string( all letter have to be upper case ): ");
    fgets( string , sizeof(string) , stdin );


    while( string[i] != '\0')
    {
        for( c = 65 ; c < 91 ; c++)
        {
            if(c == string[i])
            {
                *(ptr + (c - 65)) += 1 ;
            }
        }

        i++;
    }

    for(i = 0 ; i < 26 ; i++)
    {
        if(*(ptr + i) != 0)
        {
            printf("There are/is %d of the letter %c\n", *(ptr + i) , i + 65 );
        }
    }


    return 0;
}