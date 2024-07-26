#include <stdio.h>

int main()
{
    int i[10] ,j;
    int* ptr;
    ptr = i;

        for(j=0 ; j<10 ; j++){

            i[j] = j;
        }

        for(j=0 ; j<10 ; j++){

            printf("%d\n", *(ptr+j));
            
        }
       printf("-----------------------");
       printf("\n%d\n", *(ptr-1));
       printf("\n%d\n", *ptr);

    return 0;
}