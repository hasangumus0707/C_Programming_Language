#include <stdio.h>
#include <stdlib.h>
/*İç içe döngü ile şekil vs. oluşturma mantıgını kavrama*/

int main(){

    int i,j,star;
    printf("Enter a number of star:");
    scanf("%d",&star);
    for(i=1;i<=star;i++){

        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
       }

       for(i=1;i<star;i++){

         for(j=1;j<=star-i;j++){

            printf("*");
         }
         
        printf("\n");

       }




    return 0;

}
 /*}
    for(i=star;1<=i;i--){
        for(j=1;j<=i;j++){
            printf("*");
            }

            printf("\n");



        }
        */
