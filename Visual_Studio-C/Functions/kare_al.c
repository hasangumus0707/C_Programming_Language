/*Kare alma*/

#include <stdio.h>

double kare_al( int x);

void main()
{

int i ;

for( i = 1 ; i < 11 ; i++)
{
    printf("%d karesi: %.2lf\n", i , kare_al(i));
}

}

double kare_al( int x)
{

    return x * x;
}