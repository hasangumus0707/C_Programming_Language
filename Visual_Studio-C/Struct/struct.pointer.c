#include <stdio.h>

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
        int lenght;
        struct birth_date date;
    };
    
    struct person_date *ptr;
    struct person_date person[3] = { "Ali", 180 , { 6 , 5 ,200},
                                     "Veli" , 185 , { 9 , 12 ,2001},
                                     "Mahmoud", 190 , {4 , 11 , 2003}};

    
    for( i = 0 , ptr = &person[0] ; ptr <= &person[2] ; ptr++ , i++ )
    {
        printf("Name: %s \n" , ptr->name);
        printf("Lenght: %d \n", ptr->lenght);
        printf("Birth Day: %d/%d/%d \n\n\n" , ptr->date.day , ptr->date.month , ptr->date.year);

    }

    
    return 0;
}