/*Unsigned integer değeri binary değere çeviren bir fonksiyon yazınız.*/

#include <stdio.h>
#include <stdlib.h>

void convert_to_binary( unsigned x );

int main()
{
    unsigned number;
    printf("Enter Number:");
    scanf("%u", &number);
    convert_to_binary(number);

    return 0;
}

void convert_to_binary( unsigned x)
{
    int i=1 , k ;
    unsigned *p;

    p = (unsigned *)malloc(2*sizeof(unsigned));

    if( p == NULL)
    {
        printf("There is memory enough.");
        return;
        
    }
    else
    {
        *p = x;

    while(1)
    {
        *(p+i) = x%2;
        x = x/2;

        if( x == 1)
        {
            p = (unsigned *)realloc(p, (i+1)* sizeof(unsigned));
            *( p + i + 1 ) = x;
            break;
        }
        i++;
        p = (unsigned *)realloc(p, (i+1)* sizeof(unsigned));
    }

    for(k = i + 1 ; k > 0 ; k--)
    {
        printf("%u", *( p + k ));
    }

    }
    
    free(p);
}