/*Bir kelimenin harflerini tersten ekrana basan programı pointer ve dinamik bellek kullanarak C dilinde yazınız. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

int i = 0 , c;
char *string;

string = (char *)malloc( 100 * sizeof(char) );

if( string == NULL )
{
    printf("There are no enough space in the memory. ");
    return 0;
}
else
{
    printf("Enter a string: ");
    fgets(string , 100 , stdin);

    while( string[i] != '\0')
    {
        i++;
    }

    printf("Reverse of the string:  ");

    for( c = i - 1 ; c >= 0 ; c--)
    {
        printf("%c", string[c]);
    }
}

free(string);
    return 0;
}

