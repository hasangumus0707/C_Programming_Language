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

    struct person_data
    {
        char name[40];
        int lenght;
        struct birth_date date;
    };

    struct person_data person[3] = { "Ali", 180 , {6 , 11 , 2003},
                                     "Mehmet" , 190 , { 8 , 12 , 2001},
                                     "Hasan" , 195 , {5 , 10 , 2002} };


    for( i = 0 ; i < 3 ; i++ )
    {
        printf("%s  %d   %d/%d/%d ", person[i].name , person[i].lenght , person[i].date.day , person[i].date.month , person[i].date.year);
        printf("\n\n");
    }
    return 0;
}