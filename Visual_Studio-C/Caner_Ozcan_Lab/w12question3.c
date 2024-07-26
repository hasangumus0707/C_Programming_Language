/*Write C Program to Count the Number of Vowels, Consonants and so on
Enter a line of string: adfslkj34 34lkj343 34lk
Vowels: 1
Consonants: 11
Digits: 9
White spaces: 2
*/

#include <stdio.h>

int main()
{
    char string[100];
    int length = 0 , vowels = 0 , digits = 0 , spaces = 0 , i = 0;

    printf("Please Enter a string:");
    gets( string );

    while( string[length] != '\0')
    {
        length++;
    }

    while( string[i] != '\0' )
    {
        if(string[i] == ' ')
        {
            spaces++;
        }
        else if( string[i] >= '0' && string[i] <= '9')
        {
            digits++;
        }
        else if( string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' )
        {
            vowels++;
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", length - vowels - spaces - digits);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d", spaces);

    return 0;
}