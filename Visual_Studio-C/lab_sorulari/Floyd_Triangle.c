#include <stdio.h>
#include <stdlib.h>

 int main(){
  
   int i,j,number;
   printf("Enter a number:");
   scanf("%d",&number);

    for(i=1;i<=number;i++){
        for(j=1;j<=i;j++){
            if(i%2==1){
                printf("%d",j%2);
            }else if(i%2==0){
                printf("%d", (j+1)%2);
            }


        }

      printf("\n");

    }

    return 0;
 }