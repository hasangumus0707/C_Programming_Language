#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    char operation[100];
    struct node *next;

}node;

typedef struct 
{
    struct node *top;
    int cnt;

}stack;

void push( stack *s , char *operation );
char* top(stack *s);
void pop(stack *s);
void display(stack *s);


int main()
{

stack s;

s.top = NULL;
s.cnt = 0;

push(&s , "Opened Google");
push(&s , "Searched for Data Structures");
push(&s , "Opened Stack Overflow");

display(&s);

printf("Current operation: %s\n", top(&s));
pop(&s);
printf("After undo , current operation: %s\n", top(&s));

display(&s);

    return 0;
}

void push( stack *s , char *operation )
{
    node *newnode = (node*)malloc(sizeof(node));

    if( newnode == NULL ){

        printf("Memory Error.");
        return;
    }

    strcpy(newnode->operation , operation);

    newnode->next = s->top;
    s->cnt++;
    s->top = newnode;
}

char* top(stack *s)
{
    if( s->top == NULL ){

        return "Stack is empty.";

    }else{

        return s->top->operation;
    }
}

void pop(stack *s)
{
    if( s->top == NULL ){

        printf("Stack is empty");

    }else{

        node *temp = s->top;
        s->top = s->top->next;
        free(temp);
        s->cnt--;
    }
}

void display(stack *s)
{
    node *temp;
    temp = s->top;

    if( temp == 0 ){

        return;

    }else{

        while( temp != NULL)
        {
            printf(" |%s| ", temp->operation);
            temp = temp->next;
        }
    }
}

