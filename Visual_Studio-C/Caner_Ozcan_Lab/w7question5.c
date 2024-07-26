/*- Klavyeden girilen bir para miktarını en az banknot kullanarak oluşturmak
istediğimizde içinde kaç tane 100, 50, 20 ve 10’luk olduğunu bulan programı C
dili ile yazınız. Not: Klavyeden girilen para miktarı 10’un katları olmalıdır.
*/

#include <stdio.h>

int main()
{

    int number , hundred , fifty , twenty , ten ;

    printf("10 ' un kati olan bir sayi giriniz:");
    scanf("%d", &number);

     if( number%10 != 0)
    {
        printf("Yanlis giris.");
        return 0;
    }
    else{


     hundred = number / 100 ;
         number = number - hundred*100 ;
             fifty = number / 50 ;
                 number = number - fifty*50 ;
                     twenty = number / 20 ;
                         number = number - twenty*20 ;
                             ten = number / 10 ;

    
     printf("Hundred:%d\nFifty:%d\nTwenty:%d\nTen:%d\n", hundred , fifty , twenty , ten );
                                
     }



    return 0;
}