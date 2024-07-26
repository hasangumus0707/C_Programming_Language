#include<stdio.h>
#include<stdlib.h>
/*Girilen sayıların en büyügünü ve en küçügünü bulan program*/
int main(){
 int number,max,min;
 printf("Enter numbers:");
 scanf("%d",&number);
 max=number;
 min=number;

 while(number!=0){

    scanf("%d",&number);
    if(number==0){
        printf("The largest number:%d\n",max);
        printf("The smallest number:%d",min);

        break ;
        }
      else if(number>max){
            max=number;

        }else if(number<min){
            min=number;
        }
    
 }
 

    return 0;
}

