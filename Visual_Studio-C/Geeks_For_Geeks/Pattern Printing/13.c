/*C Program to Print Floyd’s Triangle Pyramid Patterns
Floyd’s Triangle of natural numbers
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21                                                                                */

#include <stdio.h>

int main()
{
    int rows , number = 1 , i , j;

    printf("Enter number of rows:");
    scanf("%d" , &rows);

    for( i = 1 ; i <= rows ; i++)
    {

        for(j = 1 ; j <= i ; j++)
        {
            printf("%d ", number);
            number++;
        }

    
        printf("\n");
    }

    return 0;
}