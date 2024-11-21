#include <stdio.h>
#include <stdlib.h>


struct student
{
    int no;
    char name[40];
    int age;
    struct student *next;
};

 typedef struct student node;
 node *head;

 node* create_list( void );

 void traverse_list( node* head );

 node* add_node ( node* head );

 node* delete_node( node* head );

int main()
{

 head = create_list();

 traverse_list(head);

 head = add_node(head);

 traverse_list(head);

 head = delete_node(head);

 traverse_list(head);

    return 0;
}

node* create_list()
{
    int n,k;
    node *head , *p;

    printf("How many students in the list?: ");
    scanf("%d", &n);

    for( k = 0 ; k < n ; k++ )
    {
        if( k == 0)
        {
            head = (node *)malloc(sizeof(node));
            p = head;
        }
        else
        {
            p->next = (node *)malloc(sizeof(node));
            p = p->next;
        }
        printf("Enter %d.student number: ", k+1);
            scanf("%d", &p->no);
        printf("\nEnter %d. student name: ", k+1);
            scanf("%s", p->name);
        printf("\nEnter %d. student age: ", k+1);
            scanf("%d", &p->age);    
    }

    p->next = NULL;
    
    return head;
}

void traverse_list( node * head)
{
 int counter = 1;
 node *p;
 p = head;

 while( p != NULL)
 {
    printf("%d- %d %s %d \n", counter , p->no , p->name , p->age);
    p = p->next;
    counter++;
 }

}

node * add_node(node* head)
{
    int std_no;
    node *p , *q;
    node *new_node = (node *)malloc(sizeof(node));
    printf("Enter new student number: ");
        scanf("%d", &new_node->no);
    printf("Enter new student name: ");
        scanf("%s", new_node->name);
    printf("Enter new student age: ");
        scanf("%d", &new_node->age);

    printf("Enter std number that new record will be added before: \n");
    printf("Press 0 to add to the end of list\n");
    scanf("%d", &std_no);

    p = head;

    if( p->no == std_no )
    {
        new_node->next = p;
        head = new_node;
    }
    else
    {
        while( p->next != NULL && p->no != std_no)
        {
            q=p;
            p = p->next;
        }
        if( p->no == std_no)
        {
            q->next = new_node;
            new_node->next = p;
        }
        else if( p->next == NULL ) 
        {
            p->next = new_node;
            new_node->next = NULL;
        }
    }
    return head;
}

node* delete_node ( node* head)
{
    int std_no;
    node *p , *q;

    printf("Enter student number that will be deleted?: ");
    scanf("%d", &std_no);

    p = head;

    if(p->no == std_no)
    {
        head = p->next;
        free(p);
    }
    else
    {
        while( p->next != NULL && p->no != std_no)
        {
            q = p;
            p = p->next;

        }
        if( p->no == std_no )
        {
            q->next = p->next;
            free(p);
        }
        else if( p->next == NULL )
        {
            printf("No node found to delete");
        }
    }

    return head;
}