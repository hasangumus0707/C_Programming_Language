/*C Program to Find Largest Element in an Array*/

#include <stdio.h>

void largest( int a[] , int b);

int main()
{
    int size , i;

    printf("Enter size of the array:");
    scanf("%d", &size);

    int array[size];

    printf("Enter values of array:");

    for( i = 0 ; i < size ; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    largest( array , size);




    return 0;
}

void largest( int a[] , int b)
{   
    int max , k ;
    
    max = a[0];

    for( k = 0 ; k < b ; k++)
    {
        if( a[k] > max)
        {
            max = a[k];
        }
    }

    printf("Max value is %d", max);
}