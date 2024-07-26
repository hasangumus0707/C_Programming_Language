#include <stdio.h>
/*Palindrom sayı */

int main(){
     int number,sum,digit,i;
     printf("Enter a whole number:");
     scanf("%d",&number);
     sum=0;
     i=number;
     while(number!=0){
         digit=number%10;
         sum=sum*10+digit;
         number=number-digit;
         number=number/10;
         
     }
     if(i==sum){
         printf("The number is palindrome.");
     }else
     printf("The number is not palindrome.");
    return 0;
}