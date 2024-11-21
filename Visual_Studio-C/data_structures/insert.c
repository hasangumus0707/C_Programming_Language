#include <stdio.h>

int main()
{

int array[50] , size , i , number , position;

printf("Enter size of array:");
scanf("%d", &size);

printf("Enter elements:");

for( i = 0 ; i < size ; i++)
{
    scanf("%d", &array[i]);
}

for( i = 0 ; i < size ; i++)
{
    printf("array[%d] = %d\n", i , array[i]);
}

printf("Enter the number you want to add:");
scanf("%d", &number);

printf("Enter position:");
scanf("%d", &position);

if( position <= 0 || position > size + 1)
{
    printf("invalid position.");
    return 0;
}

for ( i = size - 1 ; i >= position - 1 ; i-- )
{
    array[ i + 1 ] = array[ i ];
}
array[ position - 1 ] = number;
size++;

printf("--------------");

for( i = 0 ; i < size ; i++)
{
    printf("array[%d] = %d\n", i , array[i]);
}

    return 0;
}