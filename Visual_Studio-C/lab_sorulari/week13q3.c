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




/*Tekde çözemedim tekrar bak sindir


#include <stdio.h>

void ikilik(int);

int main()
{

    int number;
    printf("Lutfen bir sayi giriniz:");
    scanf("%d", &number);

    ikilik(number);

    return 0;
}

void ikilik(int a){

    if(a != 0 ){

        ikilik(a/2);
        printf("%d", a%2);
    }
    else{

        return ;
    }
}*/