/*Convert Temperature from Fahrenheit (℉) to Celsius (℃)*/

#include <stdio.h>

int main()
{

float fahrenheit , celsius ;

printf("Enter fahrenheit value:");
scanf("%f", &fahrenheit);

celsius = (5 * (fahrenheit - 32)) / 9 ;

printf("Celsius Value: %f" , celsius);


    return 0;
}