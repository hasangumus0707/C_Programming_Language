#include<stdio.h>
#include<stdlib.h>
/*10 elemanlı diziyi klavyeden alan ve tersten ekrana yazan programı yazınız*/
 int main(){

    int Array[10],i,k;
    k=0;

     for(i=0;i<10;i++){

        printf("Array[%d]=",i);
        scanf("%d",&Array[i]);
     }for(i=9;i>=0;i--){
        printf("Array[%d]=%d\n",i,Array[k]);
        k++;
     }
 

    return 0;
 }