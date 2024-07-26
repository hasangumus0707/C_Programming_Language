/*C program to  Sum of Fibonacci Numbers at Even Indexes up to N Terms */

#include <stdio.h>

int main()
{
    int first , second , third , n , i , sum= 0;

    printf("Enter number of n: ");
    scanf("%d", &n);

    first = 1;
    second = 1;
    sum = sum + second;
    
    printf(" %d %d ", first , second);  

    for( i = 1 ; i <= n -2 ; i++)
    {
        third = first + second;
        first = second;
        second = third;

        if( i % 2 == 0)
        {
            sum = sum + second;
        }

        printf("%d ", third);
 
    }

    printf("\n Sum = %d ", sum);


    return 0;
}