/*Pentagon sayıları Pn=n(3n−1)/2 formülüne göre üretilmektedir. 100'den küçük pentagon
sayılarını ekrana yazdırın.*/

#include <stdio.h>

int main()
{
 int i = 1;
 float number = 0;

 while( number < 100)
 {

    number = i * ( 3*i - 1 ) / 2;
    i++;
    
    if ( number < 100)
    {
        printf("%.2f\n", number );
    }

 }
    return 0;
}