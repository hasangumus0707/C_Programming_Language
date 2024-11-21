/*Verilen bir sayısı dizisi içerisinde yer alan sayıları pointer kullanarak tersten yazdıran programı
C dilinde yazınız.  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i ;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int *ptr;

    ptr = (int *)malloc(n* sizeof(int));

    if( ptr == NULL)
    {
        printf("There is no enough space in memory.");
        return 0;

    }
    else
    {
        for( i = 0 ;  i < n ; i++)
        {   
            printf("Enter %d. number: " , i + 1);
            scanf("%d", ( ptr + i ));
        }
    }

    for( i = n-1 ; i >= 0 ; i-- )
    {
        printf("%d", *( ptr + i ));
    }

    return 0;
}
