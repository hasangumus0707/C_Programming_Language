/*Full Pyramid of Numbers  in 180 Degree
    1
    22
    333
    4444
    55555
    55555
    4444
    333
    22
    1                              */

#include <stdio.h>

int main()
{

int rows, i , j;

printf("Enter Numbers of Rows:");
scanf("%d", &rows);

for( i = 1 ; i <= rows ; i++)
{
    for(j = 1 ; j <= i ; j++)
    {
        printf("%d ", i);
    }

    printf("\n");
}

for( i = rows ; i >= 1 ; i--)
{
    for(j = 1 ; j <= rows ; j++)
    {
        printf("%d ", i);
    }
    rows--;
    printf("\n");
}

    return 0;
}
