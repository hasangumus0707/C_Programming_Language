/*Bubble Sort */

#include <stdio.h>

void bubbleSort( int dizi[] , int n);

int main(void)
{

    int i=0 , a[5];
    printf("Siralamak istedigin 5 sayi gir: ");

    while( i < 5 )
    {
        scanf("%d", &a[i]);
        i++;
    }

    i = 0;

    bubbleSort( a , 5 );

    printf("Bubble sort isleminden sonra... \n");

    while( i < 5 )
    {
        printf("%d ", a[i]);
        i++;
    }

    return 0;
}


void bubbleSort( int dizi[] , int n)
{
    int gecici;
    int i , k;

    for( i = 0 ; i < n - 1 ; i++ )
    {
        for(k = 0 ; k < n - i - 1 ; k++ )
        {
            if( dizi[k] > dizi[k+1])
            {
                gecici = dizi[k];
                dizi[k] = dizi[k+1];
                dizi[k+1] = gecici;
            }
        }
    }

}

