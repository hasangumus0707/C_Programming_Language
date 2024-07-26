//1 ile 6 arasında randon sayı üretme 20 defa
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int i;

   for(i = 0 ; i <= 20 ; i++)
   {
      int random_number = 1 + rand()%6;
      printf("%2d",random_number);
   }

return 0;
}