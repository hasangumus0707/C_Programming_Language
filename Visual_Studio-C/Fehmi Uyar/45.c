#include<stdio.h>
#include<stdlib.h>

/*Boş kare desen algoritması. Yapamadım tekrar bak silip kendin çöz*/

int main(){

    int i,j,number;
    printf("Enter a number:");
    scanf("%d",&number);
      for(i=1;i<=number;i++){
         for(j=1;j<=number;j++){
            if(i==1 || i==number || j==1 || j==number){
         
          printf("* ");
            }else{
                printf("  ");
            }
         }
         printf("\n");
      }

          
    return 0;
}