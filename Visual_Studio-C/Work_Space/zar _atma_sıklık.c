#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int counter1 =0, counter2 =0, counter3 =0, counter4 =0, counter5 =0, counter6 =0;
   int i, number;

   for(i=1 ; i<=6000 ; i++)
   {
      number = 1 + rand()%6;

      switch(number)
      {
         case 1: counter1+= 1;
         break;
         case 2: counter2+= 1;
         break;
         case 3: counter3+= 1;
         break;
         case 4: counter4+= 1;
         break;
         case 5: counter5+= 1;
         break;
         case 6: counter6+= 1;

      }
   }

   printf("Frequency of 1:%d\n", counter1);
   printf("Frequency of 2:%d\n", counter2);
   printf("Frequency of 3:%d\n", counter3);
   printf("Frequency of 4:%d\n", counter4);
   printf("Frequency of 5:%d\n", counter5);
   printf("Frequency of 6:%d\n", counter6);

return 0;
}