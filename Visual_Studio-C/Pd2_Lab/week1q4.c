/*Fibonacci serisini bulan programı fonksiyon olarak yazıp ana programdan çağıran programı
yazınız.*/

#include <stdio.h>

void finobacci(int series);

int main()
{
    int number;
    printf("Enter number of finobacci series:");
    scanf("%d", &number);

    finobacci(number);

    return 0;
}

void finobacci(int series)
{
    int first = 0 , second = 1 , third, i;

    printf("%d %d ", first , second);

    for(i = 1 ; i <= series - 2 ; i++)
    {
        third = first + second;
        printf("%d ", third);
        first = second;
        second = third;

    }

}