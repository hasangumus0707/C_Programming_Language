/*C Program to Display Prime Numbers Between Two Intervals Using Functions*/

#include <stdio.h>

void write_prime ( int a , int b);

int main()
{   
    int number1, number2;

    printf("Enter two numbers:");
    scanf("%d%d", &number1 , &number2);

    if( number1 >= number2)
    {
        write_prime( number2 , number1);

    }else{

        write_prime( number1 , number2);
    }



    return 0;

}

void write_prime ( int a , int b)
{
    int i , j , control;

    for( i = a ; i <= b ; i++)
    {
        control = 1  ;
        for( j = 2 ; j <= (i / 2) ; j++)
        {
            if( i % j == 0)
            {
                control = 0;
            }
        }
        if( control == 1 )
        {
            printf("%d " , i);

        }
    }
}