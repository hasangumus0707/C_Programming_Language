#include <stdio.h>

  int main(){

   int i,j,lenght[2][10],weight[2][10],sum_weight,sum_lenght;
   float average_lenght,average_weight;

   sum_weight=0;
   sum_lenght=0;
    for(i=0;i<2;i++){
        for(j=0;j<10;j++){

            if(i==0){

                printf("%d.Student's Weight:",j+1);
                scanf("%d",&weight[i][j]);
                sum_weight+=weight[i][j];


            }
            else{
                
                printf("%d.Student's Lenght:",j+1);
                scanf("%d",&lenght[i][j]);
                sum_lenght+=lenght[i][j];
            }
        }
    }
 
    printf("Weights:");

      for(i=0;i<2;i++){
         for(j=0;j<10;j++){
             
             if(i==0){

                 printf("%d   ",weight[i][j]);
             }
             else if(j==0){

                printf("\nLenghts:");
                printf("%d   ",lenght[i][j]);
             }
             else{

                printf("%d   ",lenght[i][j]);
             }
            

        }
      }

      average_weight=sum_weight/10;
        printf("\nAverage weight of students:%.1f",average_weight);
      average_lenght=sum_lenght/10;
        printf("\nAverage lenght of student:%.1f",average_lenght);


     return 0;
     }

