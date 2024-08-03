/*1'den N sayısına kadar olan sayıları ekrana yazdıran program. */

#include <stdio.h>

int write( int n );

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    write(number);


    return 0;
}

int write( int n )
{
    if( n == 0)
    {
        return 0;
    }

    write( n - 1 );
    printf("%d\n", n);
}