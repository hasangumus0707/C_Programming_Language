/*C Program to Check Whether a Number is a Palindrome or Not */

#include <stdio.h>

int main()
{

 int number, copy_number , new_number = 0 , odd;

    printf("Enter a number:");
    scanf("%d", &number);

    copy_number = number;

    while( number != 0)
    {
        odd = number % 10;
        new_number = new_number * 10 + odd;
        number = number / 10;
    }
  
    if( copy_number == new_number)
    {
        printf("You entered number is a palindrome number.");

    }else{

        printf("You entered number is not a palindrome number.");
    }



    return 0;
}