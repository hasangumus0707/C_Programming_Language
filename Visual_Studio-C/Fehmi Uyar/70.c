#include<stdio.h>
 
 /*Üç sayının ortalamasını arrayler aracılıgıyla yap*/
int main(){

float average;
int number[3]={15,57,98};

average=(number[0]+number[1]+number[2])/3;

printf("%f",average);

    return 0;
}