#include <stdio.h>

int calculate( int base , int power);

int main()
{
    int power , base;

    printf("Enter base value: ");
    scanf("%d", &base);

    printf("Enter power value: ");
    scanf("%d", &power);

    if( power == 0 && base == 0 ){

        printf("Result = 1");
        return 0;    
    }

    if( power == 1 ){

        printf("Result: %d", base);

    }

    printf("Result: %d", calculate(base , power));



    return 0;
}

int calculate( int base , int power )
{ 
 
 int result;

 if( power == 0 ){

    return 1;

 }else{

    result = base * calculate( base , power - 1);

 }
}