// girilen cümledeki kelime sayısını bulma
#include <stdio.h>

int find_word(char*);

int main()
{
    char sentence[100];
    printf("Enter a sentence:\n");
    gets(sentence);
    printf("there are %d words in the entered sentence.",find_word(sentence));


    return 0;
}

int find_word(char* ptr)
{
int i = 0;
 while(*ptr != 0){

      if(*ptr == ' '){
       
        i++;
      }

 ptr++;
 }
  return (i + 1);
}