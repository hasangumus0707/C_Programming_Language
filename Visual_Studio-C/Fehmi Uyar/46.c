#include<stdio.h>
#include<stdlib.h>

/*Üçgen piramit deseni. Yapamadım tekrar bak*/

 int main(){

    int i,j,number;
                                                                                    
     printf("Enter a number:");
     scanf("%d",&number);
     
      for(i=1;i<=number;i++){
        for(j=1;j<=number-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
      

    return 0;
 }