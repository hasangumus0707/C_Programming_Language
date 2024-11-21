/*Circular linked list full*/

#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node *next;
};

struct node* add_front( struct node * head , int key );

void print_list(struct node* head);

int main()
{
    struct node *head = NULL;

    head = add_front(head , 5);

    print_list(head);

    head = add_front(head , 50);

    print_list(head);

    head = add_front(head , 30);

    print_list(head);

    return 0;
}

struct node* add_front( struct node* head , int key)
{
struct node* newnode;

newnode = (struct node*)malloc(sizeof(struct node));

if( newnode == NULL ){

    printf("Memory error");
    return NULL;

}

newnode->data = key;

if( head == NULL ){

newnode->next = newnode;
head = newnode;

}else{

newnode->next = head;
struct node *last = head;

while( last->next != head)
{
    last = last->next;
}
last->next = newnode;
head = newnode;  

}

return head;

}

void print_list(struct node* head)
{
struct node *temp = head;

while( temp->next != head)
{
    printf("%d ", temp->data);
    temp = temp->next;
}
 printf("%d \n", temp->data);
 
}