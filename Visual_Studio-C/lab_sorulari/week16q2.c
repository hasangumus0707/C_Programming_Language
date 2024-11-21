/* Dinamik bellek ayırma yöntemi kullanılarak en büyük sayıyı bulan programı C dilinde yazınız.
Dizinin boyutunu kullanıcıya sorunuz ve dizinin elemanlarını kullanıcıdan alınız. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
 int size , i , max;
 int *array;

 printf("Enter size of array:");
 scanf("%d", &size);

 array = ( int * )malloc( size * sizeof( int ) );

 if( array == NULL)
 {

    printf("There are no enough space in the memory.");
    return 0;

 }
 else 
 {
    for(i = 0 ; i < size ;  i++)
    {
        printf("Enter %d. value: ", i + 1 );
        scanf("%d", ( array + i ));
    }
 }

 max = array[0];

 for( i = 1 ; i < size ; i++)
 {
    if( *( array + i) > max )
    {
        max = array[i];
    }
 }

    printf("The max value is %d", max);

    free(array);

    return 0;
}

