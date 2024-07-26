//Girilen cümleyi tersten yazdırma

#include <stdio.h>
#include <string.h>

void reverse_string(char*, int);

int main(){

    char array[100];
    int length = 0;
    puts("Enter a string:");
    fgets(array, sizeof(array), stdin);
    length = strlen(array);
    reverse_string(array, length);

    return 0;
}

void reverse_string(char* ptr, int i){

    for( ; *(ptr+i-1) !='\0' ; i--){

     putchar(*(ptr+i-1));
    }
}
