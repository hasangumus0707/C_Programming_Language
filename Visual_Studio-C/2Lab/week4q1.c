/*bunu iyi anla tekrar bak*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car {

    char model[50];
    int year;
    struct car *prev;
    struct car *next;

};

void AddSorted ( struct car **head , char model[] , int year );

void Delete( struct car **head , char model[] , int year );

void printList( struct car **head);

int main()
{
    struct car *head = NULL;
    
    AddSorted( &head , "Toyota" , 2015 );
    AddSorted( &head , "Honda" , 2018 );
    AddSorted( &head , "Dacia" , 2019 );
    AddSorted( &head , "Bmw" , 2021 );
    AddSorted( &head , "Mercedes" , 2022 );
    AddSorted( &head , "Renault" , 2024 );

    printList(&head);


    Delete(&head , "Bmw" , 2021 );
    Delete(&head , "Toyota" , 2015 );
    Delete(&head , "Renault" , 2024 );
    printList(&head);
  
    
    return 0;
}

void AddSorted ( struct car **head , char model[] , int year )
{
   struct car *newCar = (struct car *)malloc(sizeof(struct car));

   if( newCar == NULL ){

    printf("Memory Error");
    return;
   }

   strcpy( newCar->model , model );
   newCar->year = year;
   newCar->next = NULL;
   newCar->prev = NULL;

   if( *head == NULL ){

    *head = newCar;
    return;

   }

   if( year < (*head)->year ){

    (*head)->prev = newCar;
    newCar->next = *head;
    *head = newCar;
    return;
   }

   struct car *current = *head;

   while( current->next != NULL &&  current->next->year < year )
   {
    current = current->next;
   }

   if(current->next != NULL){

    current->next->prev = newCar;

   }

   newCar->next = current->next;
   current->next = newCar;
   newCar->prev = current;
   
}

void Delete( struct car **head , char model[] , int year )
{
    struct car *current = *head;

    if( strcmp((*head)->model, model) == 0 && (*head)->year == year)
{

        current->next->prev = NULL;
        *head = current->next;
        free(current);
        return;
    }

    while( current != NULL && strcmp(current->model , model) !=0 && current->year != year )
    {
        current = current->next;
    }

    if( strcmp(current->model , model) == 0 && current->year == year ){

        current->prev->next = current->next;
        if( current->next != NULL){

            current->next->prev = current->prev;
        }
        
        free(current);
        return;

    }else{

        printf("No car found.\n");
        return;
    }
}

void printList( struct car **head)
{
    struct car *current = *head;

    while( current != NULL )
    {
        printf("Car:%s Model:%d \n" , current->model , current->year);
        current = current->next;
    }

    printf("----------------\n");
    return;
}