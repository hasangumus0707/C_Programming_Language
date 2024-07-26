#include <stdio.h>

int a = 10;

void fonk1(int a)
{
    a = 40;
    printf("a = %d\n", a);
}

int main()
{
      printf("a = %d\n", a);
      fonk1(a);
      printf("a = %d\n", a);

    return 0;
}