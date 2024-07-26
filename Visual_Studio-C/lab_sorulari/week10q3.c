#include<stdio.h>
#include<stdlib.h>
/*Maksimum 5 basamaklı sayının basamaklarındaki
rakamları diziye atan ve akrana basan programı yazınız*/
 int main(){
    int i,number,Array[5],remainder,sum;
    printf("Enter a number(Maximum of 5 digits:)");
    scanf("%d",&number);
     i=0;
    while(number!=0){
        
         remainder=number%10;
         printf("Array[%d]=%d\n",i,remainder);
         number=number-remainder;
         number=number/10;
         i=i+1;
    }

    return 0;
 }