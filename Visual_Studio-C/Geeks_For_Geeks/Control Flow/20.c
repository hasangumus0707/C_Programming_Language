/*C Program to Check whether the input number is a Neon Number*/

#include <stdio.h>

int main()
{
  int number , square , sum = 0;

  printf("Enter a number:");
  scanf("%d", &number);

  square = number * number;

  while ( square != 0 )
  {
    sum = sum + (square%10);
    square = square / 10 ;
  }

  if( sum == number)
  {

    printf("You Entered Number is a neon number.");

  }else{

    printf("You Entered Number is not a neon number.");

  }
    return 0;
}