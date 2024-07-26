/*C Program to Print Fibonacci Series*/

#include <stdio.h>

int main()
{
    int first , second , third , n , i;

    printf("Enter number of n: ");
    scanf("%d", &n);

    first = 1;
    second = 1;
    
    printf(" %d %d ", first , second);  

    for( i = 1 ; i <= n -2 ; i++)
    {
        third = first + second;
        first = second;
        second = third;

        printf("%d ", third);

    }

    return 0;
}