#include <stdio.h>
#define max 50

int palindrom(char str[], int start, int end);

int main()
{
    int size=0;
    char str[max];
    printf("Kelimeyi giriniz:");
    scanf("%s", str);


    while(str[size] !='\0')
    {
        size++;
    }

 

if(palindrom(str, 0 , size-1) == 1)

    printf("the string you entered is palindrom");
else
    printf("The string you entered is not palindrom");


    return 0;
}

int palindrom(char str[], int start , int end)
{
    if(start >= end)
    {
        return 1;
    }
    
    if(str[start] == str[end])
    {
        return(palindrom(str, start+1, end-1));

    }else{
        
        return 0;
    }
}