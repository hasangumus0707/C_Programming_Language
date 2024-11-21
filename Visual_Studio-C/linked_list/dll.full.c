/*Double Linked List Full*/

#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node *next;
    struct node *prev;
};

struct node* add_front(struct node* head , int key);
struct node* del(struct node* head , int key);
void print_list(struct node* head);

int main()
{
    struct node *head = NULL;
    

    head = add_front(head , 5);
    print_list(head);
    head = add_front(head , 15);
    print_list(head);
    head = add_front(head , 55);
    print_list(head);
    head = del(head, 15);
    print_list(head);

    

    return 0;
}

struct node* add_front(struct node* head , int key)
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    if( newnode == NULL ){

        printf("Memory error.");
        return NULL;
    }

    newnode->data = key;
    newnode->next = NULL;
    newnode->prev = NULL;

    if( head == NULL ){

        head = newnode;

    }else{

       head->prev = newnode;
       newnode->next = head; 
       head = newnode;
        
    }

    return head;

}


void print_list(struct node* head)
{
    struct node *temp = head;

    if( temp == NULL ){

        printf("List is empty.");
        return;

    }
    while( temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");

}


struct node* del(struct node *head , int key)
{
struct node *temp = head;

if( head->data == key ){

    head = head->next;
   head->prev = NULL;

    free(temp);
   

}else{

    while( temp != NULL && temp->data != key )
    {
        temp = temp->next;
    }

    if( temp == NULL ){

        return head;
    }

    temp->prev->next = temp->next;

    if( temp->next !=  NULL)
    {
        temp->next->prev = temp->prev;
    }

    free(temp);
}

return head;
}