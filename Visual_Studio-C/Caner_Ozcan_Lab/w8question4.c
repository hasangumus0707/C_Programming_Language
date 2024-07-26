/*Determine Whether a Temperature is Below or Above the Freezing Point.*/

#include <stdio.h>

int main()
{
 
 float Temperature ;

  printf("Enter Temperature:");
  scanf("%f", &Temperature);

  if( Temperature > 0)

   printf("The Temperature is below the freezing point.");

     else if ( Temperature == 0)
     
       printf("The temperature at the freezing point.");

         else
 
          printf("The Temperature is above the freezing point.");
 

    return 0;
}