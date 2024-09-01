/* Aşağıda verilen prototipi kullanarak bir dikdörtgenin çevresi ve alanını hesaplayan bir fonksiyon yazınız.

void rectangle(int a,int b, int *area, int *perimeter)        */

#include <stdio.h>

void rectangle( int a , int b , int *area , int *perimeter);

int main()
{
    int long_edge , short_edge;
    int area , perimeter;



    printf("Please enter long and short edge of rectangle: ");
    scanf("%d %d", &long_edge , &short_edge);

    rectangle( long_edge , short_edge , &area , &perimeter);

    printf(" Area: %d \n Perimeter: %d", area , perimeter);

    return 0;
}

void rectangle( int a , int b , int *area , int *perimeter)
{
    *area = a * b;
    *perimeter =  2 * ( a + b );
}

