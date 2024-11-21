#include <stdio.h>

int main() 
{
    int array[50] , size , i , position;

    printf("Enter size of array:");
    scanf("%d", &size);

    if( size <= 0 || size > 50)
    {
        printf("Invalid size.");
        return 0;
    }

    printf("Enter elements:");
    
    for( i = 0 ; i < size ; i++ )
    {
        printf("\narray[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("Enter position you want to delete:");
    scanf("%d", &position );

    if( position <=0 || position > size )
    {
        printf("Invalid position:");
        return 0;
    }

    for( i = position - 1 ; i < size - 1 ; i++ )
    {
        array[ i ] = array[ i + 1 ];
    }

    size--;

    for( i = 0 ; i < size ; i++ )
    {
        printf("array[%d] = %d\n" , i , array[i] );
    }

    return 0;

}