/*Circular Queue Using Linked List*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front;
struct node *rear;

void enqueue ( int number );
void dequeue ();
void display();
void peek();


int main()
{

enqueue(2);
enqueue(-1);
enqueue(5);
display();
dequeue();
peek();
display();

    return 0;
}

void  enqueue( int number )
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    if( newnode == NULL ){

        printf("Memory error.");
        return;
    }

    newnode->data = number;
    newnode->next = NULL;

    if( rear == NULL && front == NULL )
    {
        front = newnode;
        rear = newnode;
        rear->next =front;

    }else{

        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void dequeue()
{
    struct node* temp;
    temp = front;

    if( rear == NULL && front == NULL ){

        printf("Queue is empty.\n");
        
    }else if( front == rear ){

        front = NULL;
        rear = NULL;
        free(temp);

    }else{

        front = front->next;
        rear->next = front;
        free(temp);

    }
}

void display()
{
    struct node *temp;
    temp = front;

    if( front == NULL && rear == NULL ){

        printf("Queue is empty.\n");

    }else{

        while( temp->next != front )
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }

        printf("%d", temp->data);
    }

    printf("\n");
}

void peek()
{
    if( front == NULL && rear == NULL ){

        printf("Queue is empty.\n");

    }else{

        printf("%d ", front->data); 
    }

    printf("\n");
}