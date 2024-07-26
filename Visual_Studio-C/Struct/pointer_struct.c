#include <stdio.h>
#include <string.h>

struct books{

    char* bookname;
    char* writer;
    int page;
    int year;


};

void print_me (struct books*);

int main(){

    struct books x;
    struct books* y;
    y = &x;

    (*y).bookname = "Harry Potter";
    (*y).writer = "Hasan Flanagan";
    (*y).page = 405;
    (*y).year = 1999; 

    print_me(y);

    /*
    printf("Book Name:%s\n", (*y).bookname);
    printf("Writer:%s\n", (*y).writer);
    printf("Page:%d\n", (*y).page);
    printf("Year:%d\n", (*y).year);
    */



    return 0;
}

void print_me ( struct books* ptr){

    printf("Book Name:%s\n", (*ptr).bookname);
    printf("Writer:%s\n", (*ptr).writer);
    printf("Page:%d\n", (*ptr).page);
    printf("Year:%d\n", (*ptr).year);


}