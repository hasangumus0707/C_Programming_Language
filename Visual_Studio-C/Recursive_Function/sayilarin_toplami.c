/*Main fonksiyonu içerisinde verilen bir doğal sayıya kadar olan (bu sayı dahil) 
tüm sayıların toplamını rekürsif bir fonksiyon kullanarak hesaplayanız.*/

#include <stdio.h>

int sum(int a);

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("%d", sum(number));

}

int sum(int a)
{
    if(a>0)
    {
        return a + sum(a-1);
    }
        return 0;

}