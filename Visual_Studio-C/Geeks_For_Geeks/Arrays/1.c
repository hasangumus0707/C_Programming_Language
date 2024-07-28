/*C Program to Print a 2D Array.                How to pass a 2D array as a parameter in C?. */

#include <stdio.h>

void write_array ( int m , int n , int array[][n]);

int main()
{
    int i , j , size1 , size2;
    
    printf("Enter Size of Array[a][b]:");
    scanf("%d%d" , &size1 , &size2);

    int array[size1][size2];

    printf("\nEnter Values of Arrays:\n");

    for( i = 0 ; i < size1 ; i++)
    {
        for(j = 0 ; j < size2 ; j++)
        {
            printf("Array[%d][%d] = " , i , j);
            scanf("%d" , &array[i][j]);
        }
    }

    write_array( size1 , size2 , array);

    return 0;
}

void write_array( int m , int n , int array[][n])
{
    int i , j ;

    for( i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            printf("Array[%d][%d] = %d\n" , i , j , array[i][j]);
        }
    }
}