/* C Program to Copy All the Elements of One Array to Another Array */

#include <stdio.h>

int main()
{
    int i , size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];

    for( i = 0 ; i < size ; i++)
    {
        printf("Array[%d] = " , i);
        scanf("%d", &array[i]);
    }

    int copy_array[ sizeof(array) / sizeof(array[0])];

    for( i = 0 ; i < size ; i++)
    {
        copy_array[i] = array[i];
    }

    for( i = 0 ; i < size ; i++)
    {
        printf("Array[%d] = %d ", i , array[i]);
       
    }

    printf("\n");
    
    for( i = 0 ; i < size ; i++)
    {
        printf("Copy_Array[%d] = %d ", i , copy_array[i]);
       
    }

    return 0;
}