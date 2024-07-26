//Girilen string' in uzunlugunu bulma
#include <stdio.h>

int main()
{
    char string[100];
    gets(string);
    int i = 0;

        while(string[i] != '\0')
        {              
        i++;
        }

    printf("length of you entered string:%d", i);


    return 0;
}