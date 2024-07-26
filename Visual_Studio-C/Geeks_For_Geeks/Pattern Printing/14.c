/*C Program To Print Reverse Floyd’s Pattern


15 14 13 12 11 
10 9 8 7 
6 5 4 
3 2 
1                                                                                                              */

#include <stdio.h>

int main()
{

    int rows , number , i , j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    number = ( (rows) * (rows + 1) ) / 2;

    for( i = 1 ; i <= rows ; i++ )
    {

        for( j = i ; j <= rows ; j++)
        {
            printf("%d " , number);
            number--;
        }

        printf("\n");
    }

    return 0;
}