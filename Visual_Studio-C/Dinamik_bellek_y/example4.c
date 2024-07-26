/*ENTER tuşuna basılana kadar sürekli olarak klavyeden
girilen karakterleri alan ve her bir karakter için ekrana ‘*’
basan bir program yazınız. week6 page 14*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
char* ptr;
int i;
i=0;
ptr = (char*)malloc(sizeof(ptr));

while(1){

    *(ptr+i) = getch();

        if(*(ptr+i) == 13){

            break;
        }
            ptr = (char*)realloc(ptr,(i+10)*sizeof(char));
            printf("* ");
            i++;
}
i= 0;
while(*(ptr+i) != 13){

    printf("%c", *(ptr+i));
    i++;
}

    return 0;
}

