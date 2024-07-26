#include<stdio.h>
#include<stdlib.h>

/*Girilen sayıya kadar olan mükemmel sayıları yazdırma*/

int main(){

 int number,sum,i,k;
 
sum=0;
printf("Enter a whole number:");
scanf("%d",&number);
 
 for(i=1;i<=number;i++){
   
   for(k=1;k<i;k++){
    if(i%k==0){
      sum+=k;
    }
   }if(sum==i){
    printf("%d\n",i);
   }
   sum=0;

 }


    return 0;
}
