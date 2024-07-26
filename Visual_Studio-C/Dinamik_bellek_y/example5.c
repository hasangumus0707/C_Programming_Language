/*► Aşağıda verilen prototipi kullanarak iki değişkenin
değerini yer değiştiren bir fonksiyon yazınız.

void swap (int *, int *) */

#include <stdio.h>
#include <stdlib.h>

void swap (int*, int*);

int main()
{
int a = 5 , b = 7;

printf("BEFORE==> a:%d b:%d", a, b);
swap(&a,&b);
printf("AFTER==>  a:%d b:%d", a, b);

    return 0;

}

void swap(int* p, int* k){

    int gecici = *p;
    *p = *k;
    *k = gecici;

}