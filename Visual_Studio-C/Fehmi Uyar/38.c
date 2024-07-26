#include<stdio.h>
#include<stdlib.h>
/*Bugday problemi*/

int main(){
int i;
 double total,totalx;
     total=0;
     totalx=1;
     i=1;
do{
   total+=totalx;
   totalx*=2;
   i++; 

} while(i<=64);
printf("Total wheat:%lf",total);


    return 0;
}