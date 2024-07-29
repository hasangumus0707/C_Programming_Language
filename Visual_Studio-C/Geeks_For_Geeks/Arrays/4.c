/* C Program to Calculate the Average of All the Elements Present in an Array */

#include <stdio.h>

int average( int a[] , int b);

int main()
{
    int i , size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter values of the array");
    
    for( i = 0 ; i < size ; i++)
    {
        printf("Array[%d] = " , i );
        scanf("%d", &array[i] );

    }

    printf("Average = %d" , average( array , size));

    return 0;
}

int average( int a[] , int b)
{
    int k , sum = 0;

    for( k = 0 ; k < b ; k++)
    {
        sum = sum + a[k];
    }

return ( sum / b );

}