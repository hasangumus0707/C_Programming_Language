/*
Verilen bir dizi içerisindeki string ifadenin palindrom olup olmadığını kontrol eden rekürsif
fonksiyonu yazınız ? Palindrom: tersten okunuşu aynı olan kelimelere denir.
*/

#include <stdio.h>

 int palindrom(char string[], int size, int copy_lenf);

int main()
{
    int i =0;
    int lenf = 0;
    char string[] = "kulluk";


    for(i=0 ; string[i] != '\0' ; ++i)
    {
        lenf =lenf + 1;
    }

    int copy_lenf = lenf;

  if(palindrom(string, lenf, copy_lenf ) == 1)
  {
   printf("The string you entered is palindrom.");
  }
  else
  {
   printf("The string you entered is not palindrom.");
  }


    return 0;
}

int palindrom(char string[], int size , int copy_lenf)
{
 if( size > copy_lenf/2 )
 {
    if(string[size - 1] == string[copy_lenf - size])
    {
        return(string, size-1, copy_lenf);
    }
    else
    {
        return 0;
    }
 }
 else
   return 1;

}

