#include<stdio.h>
#include<stdlib.h>

/*Asal sayı bulan program*/
int main(){

    int number,i,sum;
    number=0;
    i=1;
    sum=0;
    printf("Enter a positive whole number:");
    scanf("%d",&number);
     if(number<1){
        printf("You entered number is not positive.");
        return 0;

     }
     while(i<=number){
        if(number%i==0){
            sum++;

        }

        i++;

     }
     if(sum==2){
        printf("You entered number is prime.");
     }else{
       printf("You entered number is not prime.");
       }

    return 0;
}