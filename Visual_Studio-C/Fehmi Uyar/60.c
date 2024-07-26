/*Dört basamaklı sayıyı yazıya çevirme
KODU KOMPLE SİLİP TEKRAR DENE*/

#include <stdio.h>
#include <stdlib.h>

void birlik_cevir(int);
void onluk_cevir(int);

int main(){

    int number,d1,d2,d3,d4;
    while(number!=-1){
        printf("\n Enter a four digit number:");
        scanf("%d",&number);
        if(number==-1) break;

        d1= number%10;
        d2= (number%100)/10;
        d3= (number%1000)/100;
        d4= number/1000;

        if(d4!=1)   birlik_cevir(d4);
        printf(" Thousand ");
        if(d3!=1) birlik_cevir(d3);
        if(d3!=0) printf(" Hundred ");
        onluk_cevir(d2);
        printf(" ");
        birlik_cevir(d1);
        
    }

    return 0;
}

void birlik_cevir(int number){

    switch(number){

        case 1: printf("One");
        break;
        case 2: printf("Two");
        break;
        case 3: printf("Three");
        break;
        case 4: printf("Four");
        break;
        case 5: printf("Five");
        break;
        case 6: printf("Six");
        break;
        case 7: printf("Seven");
        break;
        case 8: printf("Eight");
        break;
        case 9: printf("Nine");
        break;
    }
}

void onluk_cevir(int number){
    switch(number){

        case 1: printf("Ten");
        break;
        case 2: printf("Twenty");
        break;
        case 3: printf("Thirty");
        break;
        case 4: printf("Forty");
        break;
        case 5: printf("Fifty");
        break;
        case 6: printf("Sixty");
        break;
        case 7: printf("Seventy");
        break;
        case 8: printf("Eighty");
        break;
        case 9: printf("Ninety");
        break;
    }
}