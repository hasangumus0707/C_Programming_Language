/*Write a C program for computing factorial N (N!).
*/

#include <stdio.h>

int main()
{

    int factorial , counter, number;
    factorial = 1 , counter = 1 ;

    printf("Please Enter a Number:");
    scanf("%d", &number );

    for( counter ; counter <= number ; counter++)
    {
        factorial = factorial * counter;
    }

    printf("%d! = %d" , number , factorial );

    return 0;
}