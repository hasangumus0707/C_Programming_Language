#include <stdio.h>
#include <stdlib.h>

int main()
{

 int *ptr; 
 int n = 5;
 int i;

 printf("You entered number:%d\n\n",n);

 ptr = (int *) malloc(n*sizeof(int));
 // ptr = (int *) calloc(n,sizeof(int));

 if(ptr == NULL){

    printf("There is no enough memory");
 }
 else{

   for(i=0 ; i<n ; i++){

    ptr[i] = i+1;

   } 

   for(i=0 ; i<n ; i++){

    printf("%d\n",*(ptr+i));

   }

   free(ptr);
   
 }


 return 0;
}
