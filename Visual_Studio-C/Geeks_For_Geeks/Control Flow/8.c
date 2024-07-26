/*C Program to Find Factorial of a Number*/

#include <stdio.h>

int main()
{

    int number , factorial = 1;

    printf("Enter number:");
    scanf("%d", &number);

    while( number > 1)
    {
        factorial = factorial * number;
        number--;
    }

    printf("Factorial = %d", factorial);

    return 0;
}