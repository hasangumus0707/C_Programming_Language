#include <stdio.h>
/*Faktöriyel yazma programi*/

int main(){
    int number,i,factorial;
         printf("Enter a whole number:");
         scanf("%d",&number);
    factorial=1;
    
    for(i=2;i<=number;i++){
        factorial*=i;
        
    }
    printf("%d!=%d",number,factorial);
  

    return 0;
}