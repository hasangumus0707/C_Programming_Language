#include <stdio.h>
#include <string.h>

union unionS{

    char name[40];
    int age;
    float weight;

}uStudent;

int main()
{

    strcpy(uStudent.name, "Hasan");
    uStudent.age = 20;
    uStudent.weight = 70;

    printf("\nYour Name:%s\n",uStudent.name);
    printf("Your Age:%d\n",uStudent.age);
    printf("\nYour Weight:%.2f\n",uStudent.weight);




    return 0;
}