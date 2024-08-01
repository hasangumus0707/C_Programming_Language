/* Bir dairenin alanını hesaplayan programı yazın.

Kısıtlar:

• Dairenin yarıçapı kullanıcıya sorularak klavyeden girilmelidir ve fonksiyon main fonksiyounu
içerisinden çağrılmalıdır.
• Fonksiyon prototipi: float square (const int r)
• Pi sayısı 3.14 dür ve programın başında sabit olarak tanımlanmalıdır.
• Sonuç ekrana yazdırılırken küsürat ‘2’ olacak şekilde olmalıdır.                */


#include <stdio.h>

#define PI 3.14

float square ( const int r );

int main()
{
    float r;

    printf("Please enter radius of circle: ");
    scanf("%f", &r);

    printf("\nArea of circle : %.2f ", square(r));


    return 0;

}

float square( const int r){

    int area;

    return ( PI * r * r);
}