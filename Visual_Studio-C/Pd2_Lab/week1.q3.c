/*1-1000 arasındaki asal sayıları bulup toplayan programı fonksiyon kullanarak yazınız. (Asal
sayı bulma kısmı fonksiyon halinde yazılmalıdır.)*/

#include <stdio.h>
#include <stdbool.h>

int sum();
bool isPrime(int number);

int main()
{
    printf("Sum: %d" ,sum());

    return 0;
}

int sum()
{
int sumOfPrime = 0 , i;

for(i = 1 ; i <= 1000 ; i++)
{
    if(isPrime(i) == true)
    {
        sumOfPrime += i;
    }
}
return sumOfPrime;
}

bool isPrime(int number)
{
    int i;

    if(number < 2) return false;
    if(number == 2) return true;

    for(i = 2 ; i <= number/2 ; i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    return true;
}