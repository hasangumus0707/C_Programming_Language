#include <stdio.h>
#include <string.h>


int main()
{
   char sentence[100];
   char *ptr_start;
   char *ptr_end;
   int control = 1;

   printf("Please enter a sentence: ");
   fgets(sentence, sizeof(sentence), stdin);

   sentence[strlen(sentence) -1] = '\0';

  
   

   for(ptr_end = sentence ; *ptr_end ; ptr_end++) ;

   ptr_end--;

   for(ptr_start = sentence ; control == 1 && ptr_start < ptr_end ; ptr_start++ , ptr_end--){

    if(*ptr_start != *ptr_end){

        control = 0;
    }
   }

   if(control == 1){

    printf("You entered sentence is a palindrom.");

   }else{

     printf("You entered sentence is not a palindrom.");
   }



    return 0;
}
