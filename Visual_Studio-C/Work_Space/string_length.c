#include <stdio.h>
#include <string.h>

void main()
{
 char string[50];
 int i = 0;

 printf("Enter a String:");
 scanf("%s", string);

 while( string[i] != '\0')
 {
    i++;
 }

 printf("Lenght of String: %d", i);



}