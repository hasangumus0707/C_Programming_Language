/*) Write a C program which generates even numbers between 1000 and 2000
and then prints them.
*/

#include <stdio.h>

int main()
{

    int counter;
    
    for(counter = 100 ; counter <= 2000 ; counter ++)
    {

        if( counter %2 == 0)
        {
            printf("%d\n" , counter );
        }
    }




    return 0;
}