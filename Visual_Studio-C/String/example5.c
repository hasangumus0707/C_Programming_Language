//kelimelerin baş harfini alma

#include <stdio.h>

void first_letter(char*);

int main()
{
 char array[100];
 printf("Enter a string:");
 fgets(array, sizeof(array), stdin);
 first_letter(array);


    return 0;
}

void first_letter(char* ptr){

printf("%c",*ptr);

    while(*ptr != '\0'){

        if(*(ptr-1) == ' '){

         printf("%c",*ptr);
        }
    ptr++;
    }
}