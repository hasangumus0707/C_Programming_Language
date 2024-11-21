/*Circular Queue Implementation Using Arrays*/

#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1 ;
int rear = -1 ;


void enqueue( int number );
void dequeue();
void display();
void peek();

int main()
{
 enqueue(2);
 enqueue(7);
 enqueue(9);
 enqueue(1);
 enqueue(5);
 enqueue(3);
 display();
 dequeue();
 display();
 peek();
 dequeue();
 enqueue(6);
 enqueue(4);
 display();


    return 0;
}

void enqueue( int number )
{
    if( front == -1 && rear == -1 ){

        front = rear = 0;
        queue[rear] = number;

    }else if( ( (rear + 1 ) % SIZE ) == front ){

        printf("Overflow. Queue is full.\n");

    }else{

        rear = (rear + 1 ) % SIZE ;
        queue[rear] = number;
    }
}

void dequeue()
{
    if( front == -1 && rear == -1 ){

        printf("Queue is empty.");

    }else if( front == rear ){

        printf("%d ", queue[front]);
        front = rear = -1;

    }else{

        printf("%d ", queue[front]);
        front = (front + 1) % SIZE ;

    }
    printf("\n");
}

void display()
{
    int i = front ;

    if( rear == -1 && front == -1 ){

        printf("Queue is empty.");

    }else{

        while ( i != rear )
        {
            printf("%d" , queue[i]);
            i = ( i + 1 ) % SIZE;
        }

        printf("%d" , queue[rear]);
    }

    printf("\n");
    }


void peek()
{
    if( rear == -1 && front == -1 ){

        printf("Queue is empty.\n");

    }else{

        printf("%d", queue[front]);
    }
    
    printf("\n");
}