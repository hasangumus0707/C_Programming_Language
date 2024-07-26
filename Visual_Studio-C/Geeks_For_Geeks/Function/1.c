/* C Program To Check Prime Number By Creating a Function */

#include <stdio.h>

void prime( int a);

int main()
{

int number;

printf("Enter number: ");
scanf("%d", &number);

if(number == 1)
{
    printf("You entered number is  not prime.");
    return 0;
}
if(number == 2)
{
    printf("You entered number is prime.");
    return 0;
}

prime(number);

    return 0;
}

void prime( int a)
{
    int i, control = 1;

    for( i = 2 ; i <= (a / 2) ; i++)
    {
        if( a % i == 0)
        {
            printf("You entered number is not prime.");
            return ;
        }
    }
    if( control == 1 )
    {
        printf("You entered number is prime.");
    }

}