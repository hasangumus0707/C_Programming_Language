/*C Program For Printing Inverted Pyramid


* * * * * * * * * * * * * * * 
 * * * * * * * * * * * * *       
   * * * * * * * * * * * 
     * * * * * * * * * 
       * * * * * * * 
         * * * * * 
           * * * 
             *                                                                                       */


#include <stdio.h>

int main()
{
   int rows , i , j , k;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    k = rows;

    for( i = 1 ; i <= rows ; i++)
    {   
        
        for( j = 1 ; j <= (2 * i -2) ; j++)
        {
            printf(" ");
        }

        for( j = 1 ; j <= (2*k-1) ; j++ )
        {
            printf("*");
            printf(" ");
        }

        printf("\n");
         k--;
    }


    return 0;
}