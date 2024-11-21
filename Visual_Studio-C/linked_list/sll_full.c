/*Single linked list full*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int no;
    char name[40];
    int age;

    struct node *next;

    
};

struct node *head = NULL;

struct node* create_list();

struct node* add_front( int no , char *name , int age );

struct node* add_last(int no , char *name , int age);

struct node* add_any_position(struct node* head, int position);

struct node* destroy( struct node* head);

void print_list(struct node *head);

void reverse_print(struct node *head);

int count(struct node *head);

int reverse_count(struct node *head);

struct node* delete(struct node *head , int n);

struct node* del(struct node *head , int key);

int main()
{
    int delete_position , student_number , position ;

    head = create_list();

    print_list(head);

    printf("\n-------------------------\n");

    head = add_front( 99 , "hasan" , 20 );

    print_list(head);

    printf("\n-------------------------\n");
    
    head = add_last ( 87 , "mehmet" , 22);

    print_list(head);

    printf("----------------------------\n");

    reverse_print(head);

    printf("----------------------------\n");

    printf("There are %d data in the list.\n", count(head));

    printf("----------------------------\n");

    printf("There are %d data in the list( by recursively ).\n", reverse_count(head));

    printf("----------------------------\n");
    
    printf("Enter position you want to delete: ");
    scanf("%d", &delete_position);

    head = delete(head , delete_position);

    print_list(head);

    printf("----------------------------\n");
    printf("Enter the student number you want to delete: ");
    scanf("%d", &student_number);

    head = del(head , student_number);

    print_list(head);

    printf("----------------------------\n");
    printf("At which position do you want to add the new data?: ");
    scanf("%d", &position);

    head = add_any_position(head , position);

    print_list(head);

    printf("Destroying...----------------------------\n");

    head = destroy(head);

    print_list(head);

    return 0;
}

struct node* create_list()
{
    int n ,i;
    struct node *newnode , *p;

    p = NULL;

    printf("Enter number of students in the class:");
    scanf("%d", &n);

    for( i = 0 ; i < n ; i ++){

        newnode = (struct node*)malloc(sizeof(struct node));
        
        if( newnode == NULL ){

            printf("Memory Error.");
            return NULL;
        }

        printf("Enter Student Number: ");
        scanf("%d", &newnode->no);

        printf("\nEnter Student Name: ");
        scanf("%s", newnode->name);

        printf("\n Enter Student Age: ");
        scanf("%d", &newnode->age);

        newnode->next = NULL;

        if( head == NULL ){

            head = newnode;

        }else{

            p->next = newnode;
        }

        p = newnode;

       
    }

    return head;

}

struct node* add_front( int no , char *name , int age)
{
    struct node* newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    if( newnode == NULL){

        printf("Memory Error.");
        return NULL;
    }

    newnode->no = no;
    strcpy(newnode->name , name);
    newnode->age = age;
    newnode->next = head;
    head = newnode;

    return head;

}

struct node * add_last(int no , char *name , int age)
{

struct node * newnode;

newnode = (struct node*)malloc(sizeof(struct node));

if( newnode == NULL){

    printf("Memory Error.");
    return NULL;
}

newnode->no = no;
strcpy(newnode->name , name);
newnode->age = age;
newnode->next = NULL;

if( head == NULL){

    head = newnode;

}else{

    struct node *last;
    last = head;

    while( last->next != NULL)
    {
        last = last->next;
    }

    last->next = newnode;
    
}
 
 return head;

}

struct node* add_any_position( struct node *head , int position)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    if( newnode == NULL ){

        printf("Memory Error.");
        return NULL;
    }

    printf("Enter Student Number: ");
    scanf("%d", &newnode->no);

    printf("\nEnter Student Name: ");
    scanf("%s", newnode->name);

    printf("\n Enter Student Age: ");
    scanf("%d", &newnode->age);

    struct node* temp1 = head;

    if( position == 1 ){

        newnode->next = temp1;
        head = newnode;
        return head;

    }else{

        for( int i = 0 ; i < position - 2 ; i++ ){

        temp1 = temp1->next;
        
    }

    newnode->next = temp1->next;
    temp1->next = newnode;
    return head;

    }

}


void print_list( struct node *head )
{
    struct node *temp = head;

    if( temp == NULL){

        printf("The list is empty.");

    }else{
    while( temp != NULL )
    {
        printf("%d %s %d\n", temp->no , temp->name , temp->age);
        temp = temp->next;
    }
    }
}

void reverse_print(struct node *head)
{

    if( head == NULL ){

        return;
    }

    reverse_print( head->next );
    
    printf("%d %s %d\n", head->no , head->name , head->age);
}

int count( struct node *head)
{
    int counter = 0;

    while( head != NULL)
    {
        counter++;
        head = head->next;
    }

    return counter;
}

int reverse_count( struct node *head )
{
    if( head->next == NULL ){

        return 1;
    }

    return( 1 + reverse_count( head->next ));
}


struct node* delete( struct node *head , int n )
{
struct node *temp1 = head;

if( n == 1 )
{
    head = temp1->next;
    free(temp1);
    return head;
}

for( int i = 0 ; i < n - 2 ; i++ ){

    temp1 = temp1->next;
}

struct node *temp2 = temp1->next;

temp1->next = temp2->next;

free(temp2);
return head;

}

struct node* del(struct node *head , int key)
{
    struct node *temp1 = head;

    if( temp1->no == key){

        head = temp1->next;
        free(temp1);
        return head;
    }

    while( temp1->next->no != key)
    {
        temp1 = temp1->next;
    }

    struct node *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
    return head;

}

struct node *destroy(struct node *head)
{
    struct node *temp = head;

    while( head != NULL )
    {
        head = head->next;
        free(temp);
        temp = head;
    }

    return head;
}