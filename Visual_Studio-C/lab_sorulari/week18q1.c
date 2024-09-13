/*Soru 1: Programlama dersindeki öğrenciler için kullanılacak ‘student’ isimli struct yapısını, ‘number’,
‘name’, ‘surname’, ‘midtermGrade’ ve ‘finalGrade’ alanlarından oluşacak şekilde tanımlayınız.

Soru 2: Tanımladığınız bu yapıyı kullanarak 5 öğrenci için bir pointer dizişi oluşturun.
Soru 3: 5 öğrenci için tanımladığınız pointer dizisi üzerinden ilgili bilgileri döngü kullanarak kullanıcıdan alınız.
Soru 4: 5 öğrenciye ait vize ve final notu bilgilerini kullanarak ortalama yıl sonu notunu elde ediniz.
Soru 5: Öğrenci dizisini isme göre sıralayınız.
Soru 6: Öğrenci listesinde isme göre arama yapın.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i , j , found = 0;
    char search_name[40];
    

    struct student
    {
        int number;
        char name[40];
        char surname[40];
        int midterm_grade;
        int final_grade;
    };

    struct student *array[5];

    for(  i = 0 ; i < 5 ; i ++)
    {
        array[i] = (struct student *)malloc( sizeof(struct student));

        if( array[i] == NULL)
        {
            return 1;
        }
    }

for( i = 0 ; i < 5 ; i++ )
{
    printf("No:%d => Number: ", i + 1 );
    scanf("%d", &array[i]->number);

    printf("\nNo:%d => Name: ", i + 1 );
    scanf("%s", array[i]->name);

    printf("\nNo:%d => Surname: ", i + 1 );
    scanf("%s", array[i]->surname);

    printf("\nNo:%d => Midterm Grade: ", i + 1 );
    scanf("%d", &array[i]->midterm_grade);

    printf("\nNo:%d => Final Grade: ", i + 1 );
    scanf("%d", &array[i]->final_grade);
}

float sum_midterm = 0 , sum_final = 0;
float average_midterm , average_final;


 for( i = 0 ; i < 5 ; i++ )
 { 
    sum_midterm += array[i]->midterm_grade;
    sum_final += array[i]->final_grade;
 }

 average_midterm = sum_midterm / 5 ; 
 average_final = sum_final / 5 ;

 printf("Midterm Average: %.2f\n" , average_midterm );
 printf("Final Average: %.2f\n" , average_final );
 printf("Grade Point Average: %.2f\n", (average_midterm + average_final) / 2 );

 struct student *temp;

 for( i = 0 ; i < 4 ; i++ )
 {
     for( j = 0 ; j < 4 - i ; j++ )
     {
       if( strcmp( array[j]->name , array[j + 1]->name ) > 0 )
       {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;

       }
     }
 }

 for( i = 0 ; i < 5 ; i++)
 {
  printf("Number : %d\nName: %s\nSurname: %s\nMidterm Grade: %d\nFinal Grade: %d\n\n", array[i]->number ,
                                                                                       array[i]->name ,
                                                                                       array[i]->surname ,
                                                                                       array[i]->midterm_grade ,
                                                                                       array[i]->final_grade );
 }

 printf("\nEnter the Name You Want to Search For: ");
 scanf("%s", &search_name);

 for( i = 0 ; i < 5 ; i++ )
 {
  if( strcmp( array[i]->name , search_name) == 0)
  {
    found = 1;

    printf("Number : %d\nName: %s\nSurname: %s\nMidterm Grade: %d\nFinal Grade: %d\n\n", array[i]->number ,
                                                                                       array[i]->name ,
                                                                                       array[i]->surname ,
                                                                                       array[i]->midterm_grade ,
                                                                                       array[i]->final_grade );
  }
 }

 if( found == 0 )
 {
  printf("The Name You  Are Looking for Couldn't be found. ");

 }


 for( i = 0 ; i < 5 ; i++)
 {
  free(array[i]);
 }



    return 0;
}