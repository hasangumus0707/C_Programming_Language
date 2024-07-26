#include <stdio.h>
#include <string.h>

struct books{

    char* book_name;
    char* writer;
    int page;
    int year;
};


int main()
{
  int i;
  struct books x[2];

  x[0].book_name = "Harry Potter";
  x[0].writer = "J.K Rowling";
  x[0].page = 238;
  x[0].year = 1999;

  x[1].book_name = "Golgelerin Efendisi";
  x[1].writer = "John Flanagan";
  x[1].page = 402;
  x[1].year = 2010;


  for(i=0 ; i<2 ; i++){

    printf("%d.Book\n", i+1);
    printf("Book name:%s\n", x[i].book_name);
    printf("Writer:%s\n", x[i].writer);
    printf("Page:%d\n", x[i].page);
    printf("Year:%d\n\n", x[i].year);


  }



    return 0;
}