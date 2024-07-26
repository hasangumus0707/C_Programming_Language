/*Main fonksiyonu içerisinde verilen sayının basamaklarını toplamını 
rekürsif bir fonksiyon kullanarak bulunuz.*/

#include <stdio.h>

int sum(int a);

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("Sum of digits of the entered number:%d",sum(number));


    return 0;
}

int sum(int a)
{
    if(a !=0)
    {
        return ((a%10) + sum(a/10));
    }

        return 0;

}