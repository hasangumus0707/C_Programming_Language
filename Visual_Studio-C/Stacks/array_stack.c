#include <stdio.h>

#define N 5

int stack[N];
int top = -1;

void push();
void pop();
void peek();
void display();

int main()
{
int choice;

do
{
printf("Select Operation\n1->PUSH\n2->POP\n3->PEEK\n4->DISPLAY\n0->EXIT\n");
scanf("%d", &choice);

switch(choice)
{
    case 4: 
        display();
        break;

    case 3: 
        peek();
        break;

    case 2:
        pop();
        break;

    case 1:
        push();
        break;
    
    default:
        printf("Invalid choice.");
        break;
}
}while( choice != 0 );
 
    return 0;
}

void push()
{
    int x;
    
    printf("Enter Data: ");
    scanf("%d", &x);

    if( top == N - 1 ){

        printf("Overflow");

    }else{

        top++;
        stack[top] = x;
    }
}

void pop()
{
    int item;

    if( top == -1 ){

        printf("Underflow");

    }else{

        item = stack[top];
        top--;
        printf("%d", item);
    }
}

void peek()
{
    if( top == -1 ){


    }else{

        printf("%d", stack[top]);
    }
}

void display()
{
    int i;

    for( i = top ; i >= 0 ; i-- ){

        printf("%d", stack[i]);
    }
}
