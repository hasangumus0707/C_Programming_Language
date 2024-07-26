/*Girilen cümleyi parametre olarak alıp içerisindeki kelime sayısını bulan fonksiyonu yazınız*/

#include <stdio.h>

int word ( char a[], int size);

int main()
{

char sentence[100];

printf("Please enter a sentence:");
gets( sentence );

printf("There are %d words.", word( sentence , 100));

}

int word ( char a[] , int size)
{
    int j = 0 ,i = 0;


    while( a[i] != '\0')
    {
        if( a[i] == ' ')
        {
            j++;
        }
        
        i++;
    }

    return (j +1) ;
}
