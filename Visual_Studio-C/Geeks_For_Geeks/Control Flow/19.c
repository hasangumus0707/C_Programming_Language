/*C Program to Display Prime Numbers Between Intervals*/

#include <stdio.h>

int main()
{
    int a , b , i, j , control;

    printf("Enter intervals a - b :");
    scanf("%d %d", &a , &b);

    for( i = a ; i <= b ; i++)
    {
        control = 1;

        for(j = 2 ;  j <= i/2 ; j++)
        {
            if(i % j == 0)
            {
                control = 0;
            }
        }

        if( control == 1 )
        {
            printf("%d " , i);
        }

    }

    return 0;
}