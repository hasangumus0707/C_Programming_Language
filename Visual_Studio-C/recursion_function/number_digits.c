/*Write a program in C to count the digits of a given number using recursion*/

#include <stdio.h>

int number_digits(int a, int i);

int main()
{
int number;
int i=0;
printf("Please enter a number:");
scanf("%d",&number);

printf("%d",number_digits(number, i));

    return 0;
}

int number_digits(int a, int i)
{
    if(a != 0)
    {
        i++;
        return number_digits(a / 10, i);
    }
    return i;
}
