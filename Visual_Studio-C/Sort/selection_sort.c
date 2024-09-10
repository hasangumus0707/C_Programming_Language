/*Selection Sort*/

#include <stdio.h>

void selection_sort( int dizi[] , int n);

int main()
{   
    int i = 0 , a[5];
    printf("Siralamak istedigin 5 sayiyi gir: ");

    while ( i < 5)
    {
        scanf("%d", &a[i]);
        i++;
    }

    i = 0;
    selection_sort(a , 5);

    printf("Selection sort isleminden sonra.....\n");

    while( i < 5 )
    {
        printf("%d", a[i]);
        i++;
    }
    return 0;
}

void selection_sort( int dizi[] , int n)
{
    int i , j;
    int index , enkucuk;

    for( i = 0 ; i < n - 1 ; i++)
    {
        enkucuk = dizi[n - 1];
        index = n - 1;

        for( j = i ; j < n - 1 ; j++)
        {
            if( dizi[j] < enkucuk)
            {
            index = j;
            }
        }
        
         dizi[index] = dizi[i];
         dizi[i] = enkucuk;
    }
}