/*Aşağıda verilen prototipi kullanarak iki değişkenin değerini yer değiştiren bir fonksiyon yazınız.
void swap (int *, int *)  */

#include <stdio.h>

void swap ( int *p , int *k);

int main()
{

 int a , b , c , d;
 
 a = 5 , b = 7 , c = 8 , d = 9;

 printf("Before Switch a= %d  b= %d  c= %d  d= %d\n\n", a , b , c , d );

 swap( &a , &b );
 swap( &c , &d );

 printf("After Switch a= %d  b= %d  c= %d  d= %d" , a , b , c , d );

    return 0;
}

void swap( int *p , int *k)
{
    int temp;
    
    temp = *p;
    *p = *k;
    *k = temp;
}