/*C Program to Print Continuous Character Pattern

A 
B C 
D E F 
G H I J 
K L M N O                                                                                     */ 

#include <stdio.h>

int main()
{
    int rows , i , j ;
    char letter = 'A';

    printf("Enter number of rows:");
    scanf("%d", &rows);

    for( i = 1 ; i <= rows ; i++ )
    {
        for( j = 1 ; j <= i ; j++)
        {
            printf("%c ", letter);
            letter++;
        }

   
    printf("\n");
    }


    return 0;
}