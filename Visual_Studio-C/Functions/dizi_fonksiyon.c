#include <stdio.h>
#define SIZE 5

void modify_array ( int c[] , int size );
void modify_element ( int e);

int main()
{

int array[SIZE] = { 0, 1, 2, 3, 4 };
int i;

printf("Original Array: ");

for( i = 0 ; i < SIZE ; i++)
{
    printf("%3d", array[i]);
}

modify_array ( array , SIZE);

printf("\nThe values are modified array are:");

for( i = 0 ; i < SIZE ; i++)
{
    printf("%3d", array[i]);
}


printf("\nBefore modify_element array[3]:%d\n", array[3]);

modify_element( array[3]);

printf("\nThe value of array[3] is:%d", array[3]);

    return 0;
}

void modify_array (int c[], int size)
{
    int j;

    for(j = 0 ; j < SIZE ; j++)
    {
        c[j] *= 2;
    }
}

void modify_element (int e )
{
    printf("Modified values is(array[3]):%d", e *= 2);
}