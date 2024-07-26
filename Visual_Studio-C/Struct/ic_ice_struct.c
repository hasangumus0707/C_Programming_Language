#include <stdio.h>
#include <string.h>

struct candi_date_info{

    char* name;
    char* lastname;
    int age;
    int note;
    float average;

};

struct interview{

    char* interview_date;
    char* interviewer;
    int interview_note;
    struct candi_date_info candidate;

};

int main()
{

struct interview y;

y.interviewer = "Hasan";
y.interview_date = "25.05.2029";
y.interview_note = 95;

y.candidate.name = "Kenan";
y.candidate.lastname = "Gumus";
y.candidate.age = 18;
y.candidate.note = 89;
y.candidate.average = 2.79;


printf("Mulakati Yapan:%s\n", y.interviewer);
printf("Mulakat Tarihi:%s\n", y.interview_date);
printf("Mulakat Notu:%d\n\n", y.interview_note);

printf("Adayin Ismi:%s\n", y.candidate.name);
printf("Adayin Soyismi:%s\n", y.candidate.lastname);
printf("Adayin Yasi:%d\n", y.candidate.age);
printf("Adayin Notu:%d\n", y.candidate.note);
printf("Adayin Ismi:%.2f\n", y.candidate.average);



    return 0;
}