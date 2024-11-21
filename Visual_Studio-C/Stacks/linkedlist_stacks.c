#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;

};

struct node *top = 0;

void push( int x );
void display();
void peek();
void pop();

int main()
{

    push(2);
    push(3);
    push(10);
    display();
    peek();
    pop();
    peek();
    display();
    
    return 0;
}

void push( int x )
{
 struct node *newnode;
 newnode = (struct node *)malloc(sizeof(struct node));
 newnode->data = x;
 newnode->next = top;
 top = newnode;
}

void display()
{
    struct node *temp;
    temp = top;

    if( temp == 0 ){

    }else{

        while( temp != 0 )
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void peek()
{
    if( top == 0 ){

        printf("Stack is empty.");

    }else{

        printf("Top element is %d ", top->data);
    }
}

void pop()
{
    struct node *temp;
    temp = top;
    
    if( top == 0 ){

    }else{

    printf("Deleted: %d ", top->data);  
    top = top->next;
    free(temp); 

    }
}
 