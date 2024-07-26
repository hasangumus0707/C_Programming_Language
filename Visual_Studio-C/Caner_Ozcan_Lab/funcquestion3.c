/* Kullanıcının gönderdiği kelime içerisinde kaç tane sesli harf olduğunu bulan fonksiyonu yazınız.
Write the function that finds how many vowels are in the word sent by the user.
*/

#include <stdio.h>

int main()
{
    char string[100];
    int length = 0 , vowels = 0;

    printf("Enter String: ");
    gets(string);

    while( string[length] != '\0')
    {
        length++;
    }
   

    for( int i = 0 ; i < length ; i++)
    {
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            vowels++;
        }
    }

    printf("There are %d vowels in the string.", vowels);


    return 0;
}