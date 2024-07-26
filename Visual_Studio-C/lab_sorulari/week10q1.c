#include<stdio.h>
#include<stdlib.h>
/*8 elemanlı float diziye klavyeden değer girin.
Girilen değerlerin ortalamasını hesaplayıp ekrana yazdırın.*/

 int main(){

 int i;
 float Array[8],sum,result;
 sum=0;

 for(i=0;i<8;i++){

    printf("Array[%d]=",i);
    scanf("%f",&Array[i]);  
    sum+=Array[i];
 }
 result=sum/8;
 printf("Average of you entered numbers: %.2f",result);


    return 0;
 }