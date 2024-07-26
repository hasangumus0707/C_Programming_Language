/*C Program to Reverse a Number*/

#include <stdio.h>

int main()
{
    int number , new_number = 0 , odd;

    printf("Enter a number:");
    scanf("%d", &number);

    while( number != 0)
    {
        odd = number % 10;
        new_number = new_number * 10 + odd;
        number = number / 10;
    }

    printf("%d", new_number);

    return 0;
}