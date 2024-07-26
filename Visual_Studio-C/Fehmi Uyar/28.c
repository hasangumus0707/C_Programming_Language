#include <stdio.h>
#include <stdlib.h>
/*Switch ile tek sayı çift sayı bulma*/

int main(){

  int number,remainder;

  printf("Enter a number:");
  scanf("%d",&number);
  remainder=number%2;

   switch(remainder){
     case 0: 
     printf("The number is even.");
     break;
     case 1:
     printf("The number is odd.");
     break;
    


    return 0;
}