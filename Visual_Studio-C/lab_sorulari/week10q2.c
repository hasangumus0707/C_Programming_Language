#include<stdio.h>
#include<stdlib.h>
 
 /*Klavyeden -1 girilene kadar girilen sayıları diziye aktaran,
 ardından her elemanın karesini ekrana basan programı yazınız.
 Dizi eleman sayısı max 10 olacaktır*/

int main(){

    int i;
    float Array[10],square;
    square=1;

    for(i=0;i<10;i++){
        printf("Array[%d]=",i);
        scanf("%f",&Array[i]);
        if(Array[i]==-1){
            Array[i]=0;
            break;
        }
    }
    for(i=0;i<10;i++){
      square=Array[i]*Array[i];
        printf("Square of Array[%d]=%.2f\n",i,square);
        square=1;

    }
    
    return 0;
}