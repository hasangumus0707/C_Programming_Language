/*X ve Y tamsayılarının ortak bölenlerinin en büyüğü (0BEB) , her ikisini de tam bölen tam sayıların
en büyüğüdür. X ve Y ta sayılarının OBEB ini bulan ve döndüren bir obeb yineleme (recursive)
fonksiyonunu C dilinde yazınız. X ve Y değerleri kullanıcı tarafından girilecektir. */

#include <stdio.h>

int ebob_find ( int number1 , int number2);

int main()
{

int x , y ;

printf("Enter first number: ");
scanf("%d", &x);

printf("Enter second number: ");
scanf("%d", &y);

if( x < y )
{
    printf("Ebob: %d" , ebob_find( x , y ));
}
else
{
    printf("Ebob: %d" , ebob_find( y , x ));
}

    return 0;
}

int ebob_find ( int number1 , int number2)
{
    static int i = 1 ;
    static int ebob = 1;

 if( i <= number1)
 {
    if( number1 % i == 0 && number2 % i == 0 )
    {
        ebob = i;
    }
    
    i++;
    ebob_find( number1 , number2 );
 }
 else
 {
    return ebob;
 }
}