/*In th&s lab, you w&ll create a s&ngly l&nked l&st and perform the follow&ng operat&ons:

1. Add a new node to the head of the l&st.
2. Add a new node to the ta&l of the l&st.
3. F&nd the total number of nodes &n the l&st.
4. Pr&nt all the elements &n the l&st.*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *addhead( struct node *head , int key );
struct node *addlast( struct node *head , int key );
int count( struct node *head );
void print( struct node *head );

int main()
{
    int control = 0 , data ;
    struct node *head;
    head = NULL;

    while( control != -1)
    {
        
        printf("\n\nEnter the action you want to perform\n\n1-Addhead\n2-Addlast\n3-Count\n4-Print List\n(-1)-Exit\n\n: ");
        scanf("%d", &control);

        switch( control )
        {
            case 1: 
                printf("Enter data:");
                scanf("%d", &data);
                head = addhead( head , data );
            break;

            case 2:
                printf("Enter data:");
                scanf("%d", &data);
                head = addlast( head , data );
            break;

            case 3:
                printf("There are %d data in the list:\n", count(head));
            break;

            case 4:
                print(head);
            break;

            case -1:
                printf("Exit is in progress.");
            break;

            default: 
                printf("Wrong Entry.");
            break;
        }
    }

    return 0;
}

struct node *addhead( struct node *head , int key )
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    if( newnode == NULL)
    {
        printf("Memory Error.");
        return NULL;
    }

    
    newnode->data = key;
    newnode->next = head;
    head = newnode;

    return head;
}

struct node *addlast( struct node *head , int key )
{
    struct node *newnode;
    struct node *temp;
    temp = head;

    newnode = (struct node*)malloc(sizeof(struct node));

    if( newnode == NULL)
    {
        printf("Memory Error.");
        return NULL;
    }

    newnode->data = key;

    if( head == NULL )
    { 
        return newnode;
    }

    while( temp->next != NULL )
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->next = NULL;

    return head;

}

int count( struct node *head )
{
    int counter = 0;

    while( head != NULL)
    {
        counter++;
        head = head->next;
    }

    return counter;
}

void print( struct node *head )
{
    printf("Linked List\n\n ");
    while( head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}