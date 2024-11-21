/*Aşağıda verilen prototipi kullanarak strlen fonksiyonuna benzer bir fonksiyon yazınız.

int uzunluk(char *)   */

#include <stdio.h>

int find_length( char *);

int main()
{
  char string[50];
  char *ptr;

  ptr = string;

  printf("Enter a string: ");

  scanf("%s", ptr);


  printf("Length of string: %d" , find_length( ptr ));


    return 0;
}

int find_length( char *str)
{
    int length = 0;

    while(*str != '\0')
    {
        length++;
        str++;
    }

    return length;
}
