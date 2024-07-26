/*Klavyeden girilen iki sayının toplamını hesaplayıp ekrana yazdıran programı C
dili ile yazınız.*/

#include <stdio.h>

int main()
{
 int number1, number2;
 int sum;

 printf("Enter number:");
 scanf("%d %d", &number1, &number2);
 
 sum = number1 + number2;

 printf("Sum of numbers:%d", sum);


    return 0;
}