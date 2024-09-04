/*  Pointer kullanarak bir dizi tanımlayınız ve dizinin boyutunu kullanıcıya sorunuz. Dizinin
elemanlarını kullanıcıdan alınız. Daha sonra dizide yeni bir alan oluşturun ve yeni elemanları
kullanıcıdan alınız. En son yeni dizinin elemanlarını ekrana basınız. (Dinamik bellek yönetimi
kullanılmalı.)   */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int size , i , value ;
    int* array;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    array = ( int * )malloc( size * sizeof(int) );

    if( array == NULL)
    {

        printf("There are no space in the memory.");
        return 0;

    }
    else
    {
        for( i = 0 ;  i < size ; i++ )
        {
            printf("Enter %d.value: ", i + 1 );
            scanf("%d", &array[i] );
        }
    }

    printf("Enter new values, enter -1 to finish.\n");
    

    while(1)
    {
        printf("Enter new values: ");
        scanf("%d" , &value);

        if( value == -1)
        {
            break;
        }

        size++;

        array= realloc(array, size * sizeof(int));

        if( array == NULL )
        {
            printf("There are no space in the memory.");
            return 0;
        }
        else
        {
            array[ size - 1 ] = value;
        }
    }
    for( i = 0 ; i < size; i++ )
    {
        printf("Array[%d] = %d\n", i , array[i]);
    }

    free(array);

    return 0;
}