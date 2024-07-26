#include <stdio.h>

int a;

void fonk1(void)
{
    a = 20;
}

int main()
{
 
    a = 10;
    printf("a = %d\n", a);
    fonk1();
    printf("a = %d\n", a);

 return 0;
}