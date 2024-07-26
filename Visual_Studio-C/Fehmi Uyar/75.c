#include<stdio.h>
#include<stdlib.h>
/*Dizi Değerlerini Küçükten Büyüğe Sıralama Yaptım ama soruyu yanlış anlamışım*/
 int main(){

    int i,Array[5],max,min;
    for(i=0;i<5;i++){

        printf("Array[%d]=",i);
        scanf("%d",&Array[i]);
     
    }
    max=Array[0];
    min=Array[0];
    for(i=1;i<5;i++){
        if(Array[i]>Array[i-1]){
            max=Array[i];
        }else if(Array[i]<Array[i-1]){
            min=Array[i];
        }
    }
    
printf("Max number:%d\n",max);
printf("Min number:%d",min);

 return 0;
 }