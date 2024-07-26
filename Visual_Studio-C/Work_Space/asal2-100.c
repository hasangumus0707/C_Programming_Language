/*2-100 arasındaki asal sayıları ekrana yazdıran algoritmanın akış diyagramını çiziniz.*/

#include <stdio.h>

int main()
{
int i , j , control ;

for ( i = 3 ; i < 100 ; i++ )
{
    control = 1 ;

    for( j = 2 ; j < i ; j++)
    {
        if ( i % j == 0)
        {
            control = 0 ;
        }

    }
    if( control == 1)
    {
        printf("%d\n", i);
    }

}

    return 0;
}