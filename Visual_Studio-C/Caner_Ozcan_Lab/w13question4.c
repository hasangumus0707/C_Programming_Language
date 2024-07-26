/* İki ayrı fonksiyon oluşturarak bir tamsayının asal sayı mı yoksa Armstrong mu yoksa her ikisi mi
olduğunu kontrol etmeyi sağlayan programı yazınız.*/

#include <stdio.h>

void prime( int a );
void armstrong( int b );

int main()
{
    int number;

    printf("Please enter a number:");
    scanf("%d", &number );

    prime( number );
    armstrong( number );

    return 0;
}

 void prime ( int a )
 {
    int i , counter = 1;

    if( a == 2)
    {
        printf("The number is prime.");

    }else{

        for( i = 2 ; i <= a/2 ; i++)
        {
            if(a % i == 0)
            {
                counter ++;
            }
        }
    }
    if( counter == 1)
    {
        printf("The number is prime.\n");

    }else{

        printf("The number is not prime\n");
    }
 }

 void armstrong ( int b )
 {
    int copy_number, copy_number2 , digit = 0 , i, j , sum = 0 , odd, odd_sum = 1;

    copy_number = b;
    copy_number2 = b;

    while( b != 0)
    {
        b = b / 10;
        digit ++;
    }
    
    for(i = 1 ; i <= digit ; i++)
    {
        odd = copy_number % 10;
        copy_number = copy_number / 10;

        for(j = 1 ; j <= digit ; j++)
        {
            odd_sum = odd_sum * odd;
        }

        sum = sum + odd_sum;
        odd_sum = 1;
    }

    if( sum == copy_number2)
    {
        printf("The number is an armstrong number.");

    }else{

        printf("The number is not an armstrong number.");
    }
 }