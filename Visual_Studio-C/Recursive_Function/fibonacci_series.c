/*Write a program in C to print the Fibonacci Series using recursion.*/

#include <stdio.h>

void fibonacci(int first, int second, int third, int i, int number);
int main()
{
    int number, first, second, third, i;
    i = 0;
    third = 0;
    first = 1;
    second = 1;
    printf("Enter the number of elements of the Fibonacci series:");
    scanf("%d",&number);
    printf("%d %d ",first,second);

    fibonacci( first, second, third, i, number-2);


    return 0;
}

void fibonacci( int first, int second, int third, int i , int number )
{
    

    if(i<number)
    {
        third = first + second;
        first = second;
        second = third;
        printf("%d ",third);
        
        fibonacci(first, second, third, i+1, number);
    }
}

