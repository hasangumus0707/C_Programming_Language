/*C Program to Check Whether a Number is Prime or Not*/

#include <stdio.h>

int main()
{
    int number , i;

    printf("Enter a number:");
    scanf("%d" , &number);

    if( number == 2)
    {
        printf("You entered number is a prime.");

    }
    else
    {
        for( i = 2 ; i < number ; i++)
        {
            if( number % i == 0)
            {
                printf("You entered number is not a prime.");
                exit(0);
                
            }
        }

        printf("You entered number is a prime.");

    }


    return 0;
}