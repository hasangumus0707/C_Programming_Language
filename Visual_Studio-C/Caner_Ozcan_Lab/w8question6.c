/*Write C code to convert the length in feet to centimeter.
*/

#include <stdio.h>

int main()
{

float feet , centimeter ;

printf("Enter feet value:");
scanf("%f", &feet );

centimeter = feet * 30.48;

printf("Centimeter value:%.2f" , centimeter);

    return 0;
}