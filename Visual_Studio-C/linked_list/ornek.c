#include <stdio.h>
#include <stdlib.h>

struct student
{
    int no;
    char name[40];
    int age;
    struct student* next;

};

typedef struct student node;
node* head;

node* create_list();
void traverse_list(node *head);

int main()
{

head = create_list();
traverse_list(head);

    


    return 0;
}

node* create_list()
{
    int n , k;
    node *newnode , *p;
    
    printf("Enter student count:");
    scanf("%d", &n);

    for( k = 0 ; k < n ; k++ ){

        if( k == 0 ){

            newnode = (node*)malloc(sizeof(node));
            p = newnode;

        }else{

            p = (node*)malloc(sizeof(node));
            p = p->next;
        }

        printf("Enter student number:");
        scanf("%d", &p->no);

        printf("Enter student name:");
        scanf("%s", p->name);

        printf("Enter student age:");
        scanf("%d", &p->age);
    }

    p->next = NULL;

    return head;
}

void traverse_list(node *head)
{

int i = 1;

while( head != NULL )
{
    printf("Information of %d. student:" , i);
    printf(" %d ", head->no);
    printf(" %s ", head->name);
    printf(" %d ", head->age);
    printf("\n");
    i++;
    head = head->next;
}
}
    