/*Aşağıda verilen program da tanımlı myArray dizisi 012FFA78 adresinde tutulmaktadır. double
veri tipi bellekte 8 bayt yer kaplamaktadır. Bu bilgilere göre aşağıda verilen programın ekran çıktısını,
yandaki alana hazırlayınız*/
#include <stdio.h>

void main() {

  double *m, **k, myArray[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

  m = myArray;
  printf("%.1f\n", *(m + 1));

  *(m + 3) += 3.86;
  m += 2;

  printf("%.1f\n", *(m + 1));

  m = &myArray[3];
  k = &m;

  printf("%.1f\n", *(*(k) - 1));
  printf("\n%p\n", *k);
  
  m = m - 1 ;
  printf("\n\n%p\n", m);
}