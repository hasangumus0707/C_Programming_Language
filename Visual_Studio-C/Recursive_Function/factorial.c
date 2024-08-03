/*Finding Factorial of Entering Number*/

#include <stdio.h>

int factorial( int n );

int main()
{
    unsigned int number;

    printf("Enter Number: ");
    scanf("%u", &number);

    printf("%d != %d ", number , factorial(number));

    return 0;
}

int factorial( int n )
{
    if( n == 1 )
    {
        return 1;

    }
    else
    {
        return ( n * factorial( n - 1 ));
    }
}