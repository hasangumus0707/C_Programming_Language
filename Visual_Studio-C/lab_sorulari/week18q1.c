#include <stdio.h>
#include <string.h>

int main()
{
  struct student{

    int number;
    char name[40];
    char surname[40];
    int midtermGrade;
    int finalGrade;

  };

  struct student *ptr;
  struct student person[5];

   ptr = &person[0];


  for(int i = 0 ; i<5 ; i++){

    printf("%d.Student----------------\n",i+1);
    printf("Number:");
    scanf("%d", &((ptr+i)->number)); 

    printf("Name:");
    scanf("%s", &((ptr+i)->name));

    printf("Surname:");
    scanf("%s", &((ptr+i)->surname));

    printf("Midterm Grade:");
    scanf("%d", &((ptr+i)->midtermGrade));

    printf("Final Grade:");
    scanf("%d", &((ptr+i)->finalGrade));
       
    

  }

    return 0;
}