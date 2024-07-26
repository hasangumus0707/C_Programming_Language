#include <stdio.h>

void main()
{

 int i = 0 ;
 char string[50];

 printf("Enter a String: ");
 scanf("%s", string);

 while( string[i] != '\0')
 {
    i++;
 }

 while( i >= 0)
 {
    printf("%c" , string[i-1]);
    i--;
 }


}