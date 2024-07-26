#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 char* message = "how are you today";
 int i = 0;

    while(*(message+i) != 0){

        printf("%c", *(message+i));
        i++;

    }
    

   return 0;
}