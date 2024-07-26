/*1- 10 elemanlı tamsayı dizisine klavyeden değerler girilerek bir fonksiyona gönderilecek. Dizide yer
alan en büyük ilk iki sayıyı bularak ekrana yazdıran fonksiyonu yazınız*/

#include <stdio.h>

void max( int a[], int size);

int main()
{
    int i , array[10];

    for( i = 0 ; i < 10 ; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    max(array, 10);
    
    return 0;
}

void max( int a[] , int size)
{
    int max1 , max2 ,j;

    max1 = a[0];
    max2 = a[0];

    for(j = 0 ; j < size ; j++)
    {
        if(a[j] > max1)
        {
            max1 = a[j];
        }
    }

    for(j = 0 ; j < size ; j++)
    {
        if( a[j] > max2 && a[j] != max1)
        {
            max2 = a[j];
        }
    }

    printf("Max1 = %d \n Max2 = %d", max1 , max2);
}