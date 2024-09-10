/*Insertion Sort*/

#include <stdio.h>

void insertionSort( int dizi[] , int n );

int main(void)
{
    int i = 0 , a[5];
    printf("Siralamak istedigin 5 sayi gir : ");

    while( i < 5)
    {
        scanf("%d", &a[i]);
        i++;
    }

    i = 0;
    insertionSort( a , 5 );

    printf("Insertion sort isleminden sonra...\n");

    while( i < 5 )
    {
        printf("%d ", a[i]);
        i++;
    }

    return 0;
}

void insertionSort( int dizi[] , int n)
{
    int ekle , k , i;   

    for( i = 1 ; i < n ; i++ )
    {
        ekle = dizi[i];

        for( k = i - 1 ; k >= 0 && ekle <= dizi[k] ; k--)
        {
            dizi[k + 1] = dizi[k];
        }
    
        dizi[k + 1] = ekle;

        printf("\n hebele: %d \n",k);
    }
}