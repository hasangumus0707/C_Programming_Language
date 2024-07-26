/*C Program To Print Hollow Diamond Pattern
Input: n = 5
Output:

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *                                                                               */

#include <stdio.h>

int main()
{
    int rows , i , j ,k;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    for(i = 1 ; i <= rows ; i++)
    {
        for(j = i ; j < rows ; j ++)
        {
            printf(" ");
        }

        for(k = 1 ; k <= (2 * i - 1) ; k++)
        {
            if( k == 1 || k == ( 2 * i - 1))
            {
                printf("*");
            }else{
                printf(" ");
            }
        }

        printf("\n");
    }

    for( i = rows -1 ;  i >= 1 ; i--)
    {

        for( j = i ; j < rows ; j++)
        {
            printf(" ");
        }

        for(k = 1 ; k <= ( 2 * i - 1) ; k++ )
        {
            if( k == 1 || k == ( 2 * i - 1) )
            {
                printf("*");
            }else{

                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}