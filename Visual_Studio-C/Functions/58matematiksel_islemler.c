#include <stdio.h>

float max(float, float);
float min(float, float);
void absolute(float, float);
void square(float, float);

int main()
{
    float x, y;   
    printf("Enter two numbers:");
    scanf("%f%f", &x, &y);
    printf("Max number: %f\n", max(x, y));
    printf("Min number: %f\n", min(x, y));
    absolute(x,y);
    square(x, y);

    return 0;
}

float max(float x, float y)
{
    return (x >= y) ? x : y;
}

float min(float x, float y)
{
    return (x <= y) ? x : y;
}

void absolute(float x, float y)
{
    if (x < 0)
    {
        x = -1 * x;
    }
    if (y < 0)
    {
        y = -1 * y;
    }
    printf("Absolute of numbers:%.1f %.1f\n",x,y);
    
}

void square(float x, float y)
{
    x = x * x;
    y = y * y;
    printf("Square of numbers: %.1f %.1f\n", x, y);
}