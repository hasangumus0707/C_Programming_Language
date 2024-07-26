/* Inverted Half Pyramid of Numbers

5 5 5 5 5 
4 4 4 4 
3 3 3 
2 2 
1

*/

#include <stdio.h>

int main()
{
 int rows , columns , n;

 printf("Enter number of n: ");
 scanf("%d", &n);

 for( rows = n ; rows >= 1 ; rows-- )
 {  
    for( columns = n ; columns >= 1 ; columns-- )
    {
        printf("%d ", rows);
    }

    printf("\n");
    n--;

 }

    return 0;
}