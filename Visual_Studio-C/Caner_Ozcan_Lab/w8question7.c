/* Write C code to find the largest of three numbers A, B, and C*/

#include <stdio.h>

int main()
{
 int number1 , number2 , number3 , max;

 printf("Enter three values:");
 scanf("%d %d %d" , &number1 , &number2 , &number3 );

 max = number1 ;

 if( max < number2)

    max = number2 ;

 if( max < number3)

    max = number3;
 

printf("Max number:%d", max );

    return 0;
}