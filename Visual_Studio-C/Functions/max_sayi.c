/*Finding the maximum of three integers*/

#include <stdio.h>

int max( int x , int y , int z );

int main()
{
    int number1 , number2 , number3 ;

    printf("Please enter three integer numbers:");
    scanf("%d %d %d" , &number1 , &number2 , &number3);

    printf("Maximum number is %d ", max(number1 , number2 , number3));

    return 0;
}

int max( int x , int y , int z )
{
    int max = x;

    if( y > max )
    {
        max = y;
    }

    if( z > max )
    {
        max = z;
    }

    return max;
}