/*Klavyeden bir öğrenci için öğrenci no, vize ve final girildiğinde, öğrencinin
vize notunun %40’ı ve final notunun %60’ı alarak geçme notunu hesaplayan ve
öğrencinin numarası ile birlikte ekrana sonucu yazdıran programı C dili ile
yazınız*/

#include <stdio.h>

void main()
{

int number , vize , final ;
float mark;

printf("Enter student's number, vize, final:");
scanf("%d %d %d", &number ,&vize , &final);

mark = (vize * 0.4) + (final * 0.6);

printf("Student's Number: %d\n", number);
printf("Student's Mark: %.2f", mark);

}