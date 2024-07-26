/*
Klavyeden girilen para miktarının minimum sayıda banknot kullanılarak 
oluşturulması istenir. Bunun için girilen tutara göre her banknotun numarasının
(100, 50, 20 ve 10) belirlenmesi gerekmektedir. 
Not: Klavyeden girilen para miktarı 10'un katları olmalıdır
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int AmountOfMoney,hundred,fifty,twenty,ten;

    printf("Please enter the amount of money(The amount of money must be a multiple of 10:)");
    scanf("%d", &AmountOfMoney);

    if(AmountOfMoney%10==0) {
        hundred=AmountOfMoney/100;
        AmountOfMoney%=100;
        fifty=AmountOfMoney/50;
        AmountOfMoney%=50;
        twenty=AmountOfMoney/20;
        AmountOfMoney%=20;
        ten=AmountOfMoney/10;
    }
    else {
        printf("Wrong entry.");
    }
        
    printf("Number of 100 banknotes:%d",hundred);
    printf("Number of 50 banknotes:%d",fifty);
    printf("Number of 20 banknotes:%d",twenty);
    printf("Number of 10 banknotes:%d",ten);


    return 0; 
}
