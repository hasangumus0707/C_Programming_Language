#include <stdio.h>
#include <string.h>

struct person_data
{
    char name[40];
    int length;
};

struct person_data get_person_data();
void show_person_data( struct person_data person);

int main()
{
    struct person_data person;
    person = get_person_data();
    show_person_data( person );

    return 0;
}

struct person_data get_person_data()
{
    struct person_data person;
    printf("Name> ");
    gets(person.name);
    printf(" Length> ");
    scanf("%d", &person.length);

    return person;
}

void show_person_data( struct person_data person )
{
    printf( "Name: %s\n", person.name );
    printf( "Length: %d\n", person.length );
}