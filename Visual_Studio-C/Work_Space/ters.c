/*String ifadeyi tersten yazdırma recursion fonksiyon ile*/

#include <stdio.h>
#define max 100

void reverse(char str[], int size);

int main()
{
    char str[max];
    int i=0;
    printf("Kelimeyi giriniz: ");
    scanf("%s",str);

    while(str[i] != '\0')
    {
        i++;
    }

    reverse(str,i);



    return 0;
}

void reverse(char str[], int size)
{

    if(size >= 0)
    {
       printf("%c",str[size-1]);
       reverse(str,size-1);
    }
     
}