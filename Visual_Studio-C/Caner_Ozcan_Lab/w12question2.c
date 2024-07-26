/*Write C Program to Remove all Characters in a String Except Alphabet*/

#include <stdio.h>

int main()
{
    char string[100];
    int i = 0 , j;


    printf("Enter a string");
    gets( string );

    while( string[i] != '\0')
    {
        i++;
    }

    for( j = 0 ; j < i ; j++)
    {
        if( 96 < string[j] && string[j] < 123)
        {
            printf("%c", string[j]);
        }
    }





    return 0;
}