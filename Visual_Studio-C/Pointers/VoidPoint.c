#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    void* a;
    a = (void*)malloc(6);

    if(a == NULL){

        printf("There is no enough memory.");

    return 1;
    }
    else{

    strcpy((char*)a,"12345");
    printf("%s\n",a);

    }

    free(a);

    a = (int*)malloc(sizeof(int));
    printf("Enter a number:");
    scanf("%d",(int*)a);
    printf("%d",*(int*)a);
  




    return 0;

}