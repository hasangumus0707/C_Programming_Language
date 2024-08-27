#include <stdio.h>

void binary(int number);

int main()
{
    int number;
    printf("Enter a number for decimal to binary:");
    scanf("%d",&number);
    binary(number);


     return 0;
}

void binary(int number)
{
    
    if( number!=0)
    {
        int remainder = number%2;
        
        binary(number/2);
        printf("%d",remainder);


    }
}




