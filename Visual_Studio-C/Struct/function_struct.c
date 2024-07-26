#include <stdio.h>


struct info{

    char* name;
    int age;
};

void show_me (struct info);

int main()
{
    struct info x;

    x.name = "Hasan";
    x.age = 20;

    show_me(x);

    return 0;
}

void show_me (struct info k){   

    printf("Name:%s\n", k.name);
    printf("Age:%d", k.age);
}