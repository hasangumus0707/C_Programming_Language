#include<stdio.h>
#include<stdlib.h>

/*Girilen asal sayıya kadar olan tüm asal sayıları yazdırma*/
int main(){

    int number,i,b,sum;
     number=0;
   printf("Enter a positive whole number:");
   scanf("%d",&number);
   if(number<1){
    printf("You entered number is not positive.");
    return 0;

   }
   for(i=1;i<=number;i++){
    sum=0;
    for(b=1;b<=i;b++){
        if(i%b==0){
            sum++;
        }       

    }
    if(sum==2){
        printf("%d ",i);

    }
    
   }



    return 0;
}