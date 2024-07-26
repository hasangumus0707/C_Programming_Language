/*Write a C program to check whether a given number from keyboard is
Palindrome number or not.*/

#include <stdio.h>

int main()
{

    int number , new_number , remainder , copy_number ;
    new_number , remainder = 0 ;

    printf("Please enter a number:");
    scanf("%d" , &number );
    
    copy_number = number ;

    while( number != 0)
    {

        remainder = number % 10 ;
        new_number = new_number * 10 + remainder ;
        number = number / 10 ;
    }

    if( copy_number == new_number )
    {

          printf("You entered number is a palindrome.");

    }else
    {
          printf("You entered number is not a palindrome.");
    }


    return 0;
}