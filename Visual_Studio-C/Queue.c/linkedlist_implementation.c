/* Queue implementation using linked list*/
#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue( int number );
void display();
void peek();
void dequeue();

int main()
{
    enqueue(5);
    enqueue(0);
    enqueue(-3);
    display();
    dequeue();
    peek();
    display();

    return 0;
}

void enqueue( int number )
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    if( newnode == NULL )
    {
        printf("Memory Error.\n");
        return;

    }else{

        newnode->data = number;
        newnode->next = NULL;
    }

    if( front == NULL && rear == NULL )
    {
        front = newnode;
        rear = newnode;

    }else{

        rear->next = newnode;
        rear = newnode;
    }

    return;
}

void display()
{
    struct node *temp;
    temp = front;

    if( front == NULL && rear == NULL )
    {
        printf( "Queue is empty.\n");

    }else{

        while( temp != NULL )
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }

    printf("\n");
    return;
}

void dequeue()
{
    struct node* temp;
    temp = front;

    if( front == NULL && rear == NULL )
    {

    printf("Queue is empty.\n");

    }else if( front == rear ){

    printf("%d ", front->data);
    front = temp->next;
    rear = temp->next;
    free(temp);

    } else{

    printf("%d ", front->data);
    front = temp->next;
    free(temp);  

    }

    return ;
    
}

void peek()
{

    if( front == NULL && rear == NULL )
    {

    printf("Queue is empty.\n");

    }else{

        printf("%d",front->data);

    }

    return;
}