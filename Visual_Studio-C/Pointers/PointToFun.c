#include <stdio.h>

int cube(int);
int square(int);

int main()
{
int (*islem)(int);
int number, choose;

printf("please enter your choose 1-Cube 2-Square\n");
scanf("%d", &choose);

printf("Please enter a number:");
scanf("%d", &number);

if(choose == 1){

    islem = cube;
}
else{

    islem = square;
}

printf("Result: %d",islem(number));

    return 0;
}

int cube (int a){

    return a*a*a;
}

int square (int b){

    return b*b;
}