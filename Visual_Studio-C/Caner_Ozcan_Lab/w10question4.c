/*10 elemanlı diziyi klavyeden alan ve tersten ekrana yazan programı yazınız.
(1,5,2,4,5,6,78,12,1,3 => 3,1,12,78,6,5,4,2,5,1)*/

#include <stdio.h>

void main()
{

int array[10] , i;

for(i = 0 ; i < 10 ; i++)
{
    printf("array[%d] = ", i );
    scanf("%d", &array[i]);
}

for( i = 9 ; i >= 0 ; i--)
{
    printf("array[%d] = %d\n", i , array[i]);
}

}