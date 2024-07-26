#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct students{

    char my_letter;
    char* name;
    char* surname;
    int no;
    int age;
    float score;
    char parent_name[30];

 };



int main()
{

struct students x;
struct students x2;
struct students x3;

x.my_letter = 'H';
x.name = "Hasan";
x.surname = "Gumus";
x.no = 1;
x.age = 20;
x.score = 95.05;
strcpy(x.parent_name,"Kenan");

x2 = x;
x3 = x2;





printf("Letter:%c\n",x.my_letter);
printf("Name:%s\n", x.name);
printf("Surname:%s\n", x.surname);
printf("No:%d\n", x.no);
printf("Age:%d\n", x.age);
printf("Score:%.2f\n", x.score);
printf("Parent Name:%s", x.parent_name);


    return 0;
}