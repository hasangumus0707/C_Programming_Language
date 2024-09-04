/*Bir cümlenin kelimelerini sondan başa doğru yazan programı dinamik bellek yönetimi kullanarak oluşturunuz.

Örnek (Example):

Input:   I love Programming Languages course
Output:  course Languages Programming love I                    */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length = 0 , i , j;
    char *sentence;

    sentence = ( char * )malloc( 100 * sizeof(char) );

    if( sentence == NULL)
    {
        printf("There are no space in the memory.");
        return 0;
    }
    else
    {   
        printf("Enter a sentence: ");
        fgets( sentence , 100 , stdin);
    }

    while( sentence[length] != '\0' )
    {
        length++;
    }

    for( i = length -1 ; i >= 0 ; i--)
    {
        if( sentence[i] == ' ')
        {
            j = i + 1;
            while( sentence[j] != ' ' && sentence[j] != '\0' && sentence[j] != '\n' )
            {
                printf("%c", sentence[j] );
                j++;
            }
            printf(" ");
        }

        if( i == 0 )
        {
            j = i;

            while( sentence[j] != ' ')
            {
                printf("%c", sentence[j]);
                j++;
            }
        }
    }

    free( sentence );

    return 0;
}