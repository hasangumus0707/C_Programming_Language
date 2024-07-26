/*C Program to Print Alphabets From A to Z Using Loop*/

#include <stdio.h>

int main()
{
    int i;

 printf("Alphabets from A to Z:\n");

 for(i = 65 ; i <= 90 ; i++)
 {
    printf("%c " , i);
 }

 printf("\nAlphabets from a to z:\n");

 for(i = 97 ; i <= 122 ; i++)
 {
    printf("%c " , i);
 }

    return 0;
}