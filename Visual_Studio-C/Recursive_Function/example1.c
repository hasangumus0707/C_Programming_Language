/*Write a program in C to print the first 50 natural numbers using recursion.*/

#include <stdio.h>

void write_numbers(int a);

int main()
{
    int number;
printf("Please enter a natural number:");
scanf("%d",&number);

write_numbers(number);



    return 0;
}

void write_numbers(int a)
{
    if(a > 0)
    {
        printf("%d ",a);
        write_numbers(a-1);
    }
}