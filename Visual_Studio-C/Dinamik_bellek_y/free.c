#include <stdio.h>
#include <stdlib.h>

int main()
{
 int *ptr, *ptr1;
 int n = 5;
 int i;

 printf("Girdiginiz sayi: %d\n",n);

 ptr = (int *)malloc(n*sizeof(int));
 ptr1 = (int *)calloc(n,sizeof(int));

 if( ptr == NULL || ptr1 == NULL){

    printf("Hafizada yeterli alan yok.");
    exit(0);

 }
 else{

 printf("Malloc kullanarak basarili bir sekilde ayirma islemi yapildi.\n");
 free(ptr);
 printf("Malloc icin ayirilan yer serbest birakildi.\n");

 printf("Calloc kullanarak basarili br sekilde ayirma islemini yaptim.\n");
 free(ptr1);
 printf("Calloc icin ayirilan yer serbest birakildi.\n");   
 }



}