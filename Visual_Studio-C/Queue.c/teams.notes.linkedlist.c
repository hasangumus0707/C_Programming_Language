#include <stdio.h>
#include <stdlib.h>
#define  QUEUE_SIZE 10

struct node 
{
    int data;
    struct node *next;

};

typedef struct 
{
    struct node *front;
    struct node *rear;
    int cnt;
}queue;

void initialize(queue *q);
int isFull(queue *q);
int isEmpty(queue *q);
void enqueue(queue *q , int x);
int dequeue(queue *q);

void main()
{
    queue q;
    initialize(&q);
    enqueue(&q, 5);
    dequeue(&q);

}

void initialize(queue *q)
{
    q->cnt = 0;
    q->front = q->rear = NULL;
}

int isFull(queue *q)
{
    if( q->cnt == QUEUE_SIZE ){

        return 1;

    }else{

        return 0;
    }
}

int isEmpty(queue *q)
{
    if( q->cnt == 0 ){

        return 1;

    }else{

        return 0;
    }
}

void enqueue(queue *q , int x)
{
    if( isFull(q) ){

        printf("\n Queue is full");

    }else{
        
        struct node* newnode;
        newnode = (struct node *)malloc(sizeof(struct node));

        if( newnode == NULL ){

            printf("Memory error.\n");
            return;
        }

       newnode->data = x;
       newnode->next = NULL;

       if( isEmpty(q) ){

        q->front = q->rear = newnode;

       }else{

        q->rear->next = newnode;
        q->rear = newnode;
       }

       q->cnt++;
    }
}

    int dequeue(queue *q)
    {
        int deleted;

        if( isEmpty(q) ){

            printf("Queue is empty.");
            return -100;

        }else{
        
            struct node *temp;
            temp = q->front;
            deleted = temp->data;
            q->front = temp->next;
            q->cnt--;
            free(temp);

            if( isEmpty(q) ){

                q->rear = NULL;
            }

            return(deleted);


        }
    }



