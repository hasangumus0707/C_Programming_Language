#include <stdio.h>

typedef struct{

    char* name;
    int age;
    float weight;

}student;

int main()
{

student s1 = {"Hasan",28,62.3};
student s2 = {"Memati",25,61.7};

printf("Your Name:%s\n", s1.name);
printf("Your Age:%d\n", s1.age);
printf("Your Weight:%.2f\n\n", s1.weight);

printf("Your Name:%s\n", s2.name);
printf("Your Age:%d\n", s2.age);
printf("Your Weight:%.2f\n\n", s2.weight);

}