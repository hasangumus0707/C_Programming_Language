/*Maksimum 5 basamaklı sayının basamaklarındaki rakamları diziye atan ve ekrana basan
programı yazınız.*/

#include <stdio.h>

void main()
{
 int copy_number, number, remainder , i, k , array[5];
 i = 0;

 printf("Maksimum 5 basamakli sayi giriniz:");
 scanf("%d" , &number);

 copy_number = number;

 while( remainder != 0 )
 {
    remainder = copy_number / 10 ;
    copy_number = copy_number / 10 ;
    i++;
 }
 

 for( i = i-1 ; i >= 0 ; i--)
 {

    remainder = number % 10;
    array[i] = remainder;
    number = number / 10;
    printf("array[%d] = %d\n" , i , array[i]);
 }


}