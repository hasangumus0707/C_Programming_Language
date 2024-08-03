/*Rekürsif olarak çarpım tablosunu yazdıran program*/

#include <stdio.h>

int table( int a );

int main()
{

    int x = 1;
    table(x);

    return 0;
}

int table( int a )
{
    int i;

    if( a <= 10)
    {
        for( i = 1 ; i <= 10 ; i++)
        {
            printf("%3d ", a * i );
        }
        
        printf("\n");
        return table( a + 1);
    }
    else
    {
        return 1;
    }
}