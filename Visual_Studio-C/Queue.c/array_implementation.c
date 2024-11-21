/*Implementation of queue using arrays*/

#include <stdio.h>

#define QUEUE_SIZE 5 

int queue[QUEUE_SIZE];
int front = -1;
int rear = -1;

void enqueue( int number );
void dequeue();
void peek();
void display();

void main()
{
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    peek();
    dequeue();
    peek();
    display();

    return ;
}

void enqueue( int number )
{
    if( front == -1 && rear == -1 ){

        front = rear = 0;
        queue[rear] = number;

    }else if( rear ==  QUEUE_SIZE - 1 ){

        printf("Overflow condition.");

    }else{

        rear++;
        queue[rear] = number;

    }

    return;
}

void dequeue()
{
    if( front == -1 && rear == -1 ){

        printf("underflow condition");
        
    }else if( front == rear ){

        printf("%d ", queue[front]);
        front = rear = -1;
        
    }else{

        printf("%d ", queue[front]);
        front++;
    }

    printf("\n");
    return;
}

void display()
{
    int i;

    if( front == -1 && rear == -1 ){

        printf("Queue is empty.\n");

    }else{

        for( i = front ; i < rear + 1 ; i++ ){

            printf("%d " , queue[i]);

        }
    }
    printf("\n");
    return;

}

void peek()
{
    if( front == -1 && rear == -1 ){

        printf("Queue is empty.\n");

    }else{

        printf("%d", queue[front]);
    }

    printf("\n");
    return;
}