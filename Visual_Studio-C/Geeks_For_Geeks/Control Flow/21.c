/*C Program to Find All Factors of a Natural Number*/

#include <stdio.h>

int main()
{
    int number , i;

    printf("Enter Number:");
    scanf("%d", &number);

    for( i = 1 ; i <= number/2 ; i ++)
    {
        if( number % i == 0)
        {
            printf("%d ", i);
        }
    }

    printf("%d", number);

    return 0;
}