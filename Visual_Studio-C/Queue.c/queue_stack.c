/*Implementation of Queue of Using Stack
buna bak count kısmında hata var stack dolu oldugunda bile count artıyor ve mantıksal hata oluşuyor*/

#include <stdio.h>
#define N 5

int S1[N] , S2[N];
int top1 = -1 , top2 = -1 ;
int count = 0;

void enqueue( int x );
void dequeue();
void display();
void push1();
void push2();
int pop1();
int pop2();


int main()
{
    enqueue(5);
    enqueue(4);
    enqueue(3);
    enqueue(3);
    enqueue(1);
    enqueue(0);
    enqueue(-1);
    display();
    dequeue();
    enqueue(9);
    display();
    return 0;
}

void push1( int data )
{
    if( top1 == N -1 )
    {
        printf("Overflow Condition.\n");

    }else{

        top1++;
        S1[top1] = data;
    }
}

void push2( int data )
{
    if( top2 == N -1 )
    {
        printf("Overflow Condition.\n");

    }else{

        top2++;
        S2[top2] = data;
    }
}

int pop1()
{
    return S1[top1--];
}

int pop2()
{
    return S2[top2--];
}

void enqueue( int x )
{
    push1(x);
    count++;
}

void dequeue()
{
    
    int i,a,b ;

    if( top1 == -1 && top2 == -1 ){

        printf("Queue is empty.\n");

    }else{

        for( i = 0 ; i < count ; i++ )
        {
            a = pop1();
            push2(a);
        }

        b = pop2();
        printf("%d \n", b);
        count--;

        for( i = 0 ; i < count ; i++ )
        {
            a = pop2();
            push1(a);
        }
    }
}

void display()
{
    int i;
    
    for( i = 0 ; i <= top1 ; i++ )
    {
        printf("%d ", S1[i]);
    }
    printf("\n");
}