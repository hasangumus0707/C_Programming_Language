#include <stdio.h>

typedef struct student{

    int id;
    char name[40];
    int midterm_grade;
    int final_grade;
}student;

void take_grades(student *information);

int average_grade(int midterm , int final);
int main()
{

student s1;

take_grades(&s1);


printf("Average grade: %d" ,average_grade(s1.midterm_grade , s1.final_grade));


    return 0;
}

void take_grades(student *information)
{
    printf("Enter Student's id: ");
    scanf("%d", &information->id);

    printf("\nEnter Student's name: ");
    scanf("%s", information->name);

    printf("\nEnter Student's midterm grade: ");
    scanf("%d", &information->midterm_grade);

    printf("\nEnter Student's final grade: ");
    scanf("%d", &information->final_grade);
}

int average_grade(int midterm , int final)
{
    int result;

    result = (midterm * 0.4) + (final * 0.6);

    return result;
}