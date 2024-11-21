#include <stdio.h>
#include <stdlib.h>  

int main()
{
    int i;

    struct birth_date
    {
        int day;
        int month;
        int year;
    };
    
    struct person_date
    {
        char name[40];
        int length; 
        struct birth_date date;
    };
    
 
    struct person_date *ptr = (struct person_date*) malloc(3 * sizeof(struct person_date));

    if (ptr == NULL) {
        printf("There are no space in the memory!\n");
        return 1; 

    for (i = 0; i < 3; i++)
    {
        printf("No:%d => Name: ", (i + 1));
        scanf("%s", (ptr + i)->name);

        printf("\nNo:%d => Length: ", (i + 1));
        scanf("%d", &(ptr + i)->length); 

        printf("\nNo:%d => Birth Date (day month year): ", (i + 1));
        scanf("%d%d%d", &(ptr + i)->date.day, &(ptr + i)->date.month, &(ptr + i)->date.year); 
    }

    for (i = 0; i < 3; i++)
    {
        printf("Name: %s \n", (ptr + i)->name);
        printf("Length: %d \n", (ptr + i)->length);
        printf("Birth Date: %d/%d/%d \n\n\n", (ptr + i)->date.day, (ptr + i)->date.month, (ptr + i)->date.year);
    }

    free(ptr);  
    return 0;
}
