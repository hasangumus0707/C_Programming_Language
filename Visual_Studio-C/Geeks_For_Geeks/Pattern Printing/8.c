/*C Program To Print Hollow Star Pyramid

      *
    *   *
   *     *
  *       *
 ***********                             */

#include <stdio.h>

int main()
{
 int rows , i , j , k;

 printf("Enter number of rows:");
 scanf("%d", &rows);

 for(i = 1 ; i <= rows ; i++)
 {
    for(j = i ; j < rows ; j++)
    {
        printf(" ");
    }

    for(k = 1 ; k <= (2 * i - 1) ; k++)
    {
        if( k == 1 || k == (2 * i -1) || i == rows)
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