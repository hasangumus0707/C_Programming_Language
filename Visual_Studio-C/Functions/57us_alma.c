#include <stdio.h>

int involution(int x, int y);

int main()
{

int x, y;
printf("x uzeri y icin sayilari girin:");
scanf("%d%d",&x ,&y);
printf("%d", involution(x, y));


    return 0;

}

int involution(int x, int y)
{
 int result = 1 ;
    for(int i=y ; i>0 ; i--)
    {
        
    result = result * x;
    

    }
    return result;
}