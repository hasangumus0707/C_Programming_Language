#include<stdio.h>
#include<stdlib.h>

/*Harflerle ok oluşturma*/

int main(){
  
  int i,space;
  char character='A',letter;
  printf("Plese enter an upper case:");
  scanf("%c",&letter);

   for(i=1;i<=(letter-character)+1;i++){
    for(space=1;space<=i;space++){
        printf(" ");

    }printf("%c",letter);

    printf("\n");
   }
    for(i=(letter-character);i>=1;i--){
      for(space=i;space>=1;space--){
        printf(" ");
      }printf("%c",letter);
      printf("\n");
    }
   

    return 0;
}