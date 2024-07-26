/*C Program to Print Number Pattern 


    1
   232
  34543
 4567654
567898765                                                                                  */
      

#include <stdio.h>

int main()
{

    int rows , i , j , k;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    for ( i = 1 ; i <= rows ; i++)
    {
        for(j = i ; j < rows ; j++)
        {
            printf(" ");
        }

    
        for( k = i ; k < 2 * i ; k++)
        {
                printf("%d", k);
        }

        for( k = (2 * i -1) ; k > i ; k--)
        {
                printf("%d" , k-1);
        }
        

        printf("\n");
    }

    return 0;
}