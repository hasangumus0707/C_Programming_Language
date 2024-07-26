/*Klavyeden bir dairenin yarıçap bilgisi ve işlem türü girildiğinde işlem türü 1
ise dairenin çevresini hesaplanıp yazdıran 2 girilirse alanının hesaplayıp
yazdıran, bunların dışındaki girişler için “Yanlış giriş” mesajı vererek sonlanan
programı C dili ile yazınız.
*/

#include <stdio.h>
#define PI 3.14

int main()
{
    int yaricap, secim;
    float cevre, alan ;

    printf("Dairenin yaricapini giriniz:");
    scanf("%d", &yaricap );

    printf("Secim Yapiniz: \n 1-Cevre Hesapla \n 2-Alan Hesapla\n");
    scanf("%d" , &secim);

    if( secim == 1 )
    {
        cevre = 2 * PI * yaricap ;
        printf("Cevre:%f" , cevre );

    }   else if ( secim == 2)
        {
            alan = PI * yaricap * yaricap;
            printf("Alan:%f" , alan);
            
        }   else
            {
                printf("Yanlis secim.");
                return 0;
            }
        


    return 0;
}