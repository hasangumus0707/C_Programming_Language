/*Klavyeden A ve B tamsayı değişkenlerinde tutulan iki sayı giriliyor. A ve B
değişkenlerinin değerlerini kendi arasında yer değiştirerek ekrana yazdıran
programı C dili ile yazınız.
*/

#include <stdio.h>

void main()
{
    int number1 , number2, number;

    printf("Enter first number:");
    scanf("%d", &number1);

    printf("Enter second number:");
    scanf("%d", &number2);

    number = number1 ;
    number1 = number2 ;
    number2 = number ;

    printf("First Number:%d\nSecond Number:%d", number1, number2 );



}