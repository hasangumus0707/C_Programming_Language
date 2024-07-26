#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int* ptr = (int*) malloc(5*sizeof(int));

    if(ptr == NULL){

        printf("Yeterli alan yok.");
    }
    else{

     for(i=0 ; i<5 ; i++){

        *(ptr +i) = 5*i;
    }  
    
    printf("%d\n", *ptr++); 
    
    printf("%d\n", (*ptr)++); 
    
     printf("%d\n", *ptr);
    
     printf("%d\n", *++ptr);
       
     printf("%d\n", ++*ptr);
        
    }


    return 0;
}

