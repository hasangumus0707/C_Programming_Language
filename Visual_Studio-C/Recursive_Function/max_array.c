/*Girilen dizideki en büyük elemanı rekürsif olarak bulan programı C dilinde yazınız  */

#include <stdio.h>

void max( int a[] , int size , int max_number);

int main()
{
    int n , i ;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int array[n];

    for( i = 0 ; i < n ; i++)
    {
        printf("Array[%d]= ", i);
        scanf("%d", &array[i]);
    }

    int maks = array[0];
    
    max( array , n , maks );

    return 0;
}

void max( int a[] , int size , int max_number)
{
    static int j = 0;


    if( j + 1 < size)
    {
        if( a[j + 1] > max_number )
        {
            max_number = a[j + 1];
        }

        j++;
        max( a , size , max_number );
    }
    else
    {
        printf("Max Number: %d", max_number);
    }

}