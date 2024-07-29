/* C Program to Remove All Occurrences of an Element in an Array */

#include <stdio.h>

void delete( int a[] , int b , int c);

int main()
{
 int size , value , i ;

 printf("Enter size of array: ");
 scanf("%d", &size);

 int array[size];

 for( i = 0 ; i < size ; i++)
 {
    printf("Array[%d] = ", i);
    scanf("%d" , &array[i]);
 }

 printf("Enter the value you want to delete: ");
 scanf("%d" , &value);

 delete( array , size , value);

    return 0;
}

void delete( int a[] , int b , int c)
{
    int k ;

    for( k = 0 ; k < b ; k++)
    {
        if( a[k] != c)
        {
            printf("%d " , a[k]);
        }
    }
}