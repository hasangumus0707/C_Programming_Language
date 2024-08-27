/* C Program to Find Common Array Elements   */

/*#include <stdio.h>

void common ( int a[] , int b , int c[] , int d);

int main()
{
    int i , size1 , size2 ;

    printf("Enter size of first value: ");
    scanf("%d" , &size1);

    int array1[size1];

    printf("Enter values of first array: ");
    
    for( i = 0 ; i < size1 ; i++)
    {
        printf("Array1[%d] = ", i);
        scanf("%d", &array1[i]);
    }

    printf("Enter size of second value: ");
    scanf("%d" , &size2);

    int array2[size2];

    printf("Enter values of second array: ");
    
    for( i = 0 ; i < size2 ; i++)
    {
        printf("Array2[%d] = ", i);
        scanf("%d", &array2[i]);
    }

    common( array1 , size1 , array2 , size2 );


    return 0;
}

void common ( int a[] , int b , int c[] , int d)
{
    int i , j;

    for( i = 0 ; i < b ; i++)
    {
        for( j = 0 ; j < d ; j++)
        {
            if(a[i] == c[j])
            {
                printf("%d ", a[i]);                
            }
        }
    }
}      OLMADI TEKRAR DENE */