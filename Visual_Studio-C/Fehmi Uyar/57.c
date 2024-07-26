/*Üs alma fonksiyonu*/

#include <stdio.h>
#include <stdlib.h>

int pow(int,int);
int i,result=1;

int main()
{
   printf("%d",pow(5,3));
   return 0;
}


int pow(int x,int y){

for(i=y;i>0;i--){
   result*=x;
}
 return result;
}