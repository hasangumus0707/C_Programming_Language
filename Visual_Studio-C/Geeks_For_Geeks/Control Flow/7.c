/*C Program to Check Leap Year*/

#include <stdio.h>

int main()
{
    int year;

    printf("Please enter a year:");
    scanf("%d", &year);

    if ( (year % 4 == 0 && year % 100 != 0) || ( year % 100 == 0 && year % 400 == 0) )
    {
       printf("Leap Year.");
       
    }else{

       printf("Not Leap Year."); 

    }

    
    return 0;

}