#include <stdio.h>
/*1000 den 2000 e kadar olan çift sayıları yazma*/

int main()
{
  int i;
  for(i=1000;i<=2000;i++){
      if(i%2==0){
          printf("%d\n",i);
      }
  }

    return 0;
}