/* C Program For Maximum and Minimum of an Array */

#include <stdio.h>

void max_min( int a[], int b);

int main()
{
    int size , i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter values of array:");
    
    for( i = 0 ; i < size ; i++)
    {
        printf("Array[%d] = " , i);
        scanf("%d" ,  &array[i]);
    }

    max_min( array , size);

    return 0;
}

void max_min( int a[] , int b){

    int max , min , k ;

    max = a[0];
    min = a[0];

    for( k = 0 ; k < b ; k++)
    {
        if( a[k] > max)
        {
            max = a[k];
        }

        if( a[k] < min)
        {
            min = a[k];
        }
    }

    printf(" Max : %d \n Min: %d " , max , min);
}