#include<stdio.h>

int main(){

 int i,number,factorial;
 float sum,NewNumber;
 printf("Enter a whole number:");
 scanf("%d",&number);
 factorial=1;
 sum=0;
 NewNumber=1;
  for(i=1;i<number;i++){
NewNumber=NewNumber*number;
    factorial=factorial*i;
    sum=sum+NewNumber/factorial;
  }
sum+=1;
printf("Result:%f",sum);
    return 0;
}