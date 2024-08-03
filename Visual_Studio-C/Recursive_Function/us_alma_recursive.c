#include <stdio.h>

int exponentiate(int,int);

int main()
{
    int x,y;
    printf("x uzeri y li sayilari giriniz:");
    scanf("%d%d",&x,&y);
    printf("%d",exponentiate(x,y));
    
    
    return 0;
}

int exponentiate(int x, int y)
{
    if(y == 0)
    {
        return 1;
    }
    else
    {
       return x * exponentiate(x,y-1); 
    }
}