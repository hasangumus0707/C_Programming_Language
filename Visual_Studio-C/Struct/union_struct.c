#include <stdio.h> 

/*aynı anda bir union verisine erişilebilir 
unoin boyun olarak en fazla yer kaplayan verisinin boyutunu alır*/

union unions{

    char name[40];
    int age;
    float weight;

}uStudent;

typedef struct{

    char name[40];
    int age;
    float weight;

}Student;

int main()
{

printf("Size of unions:%d\n",sizeof(uStudent));
printf("Size of struct:%d",sizeof(Student));


    return 0;
} 