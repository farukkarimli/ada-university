#include <stdio.h>

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    char name[20];
    int id;
    double gpa;
    Date date;
} Student;



int main(void)
{
    Student s = { "Kamran", 25, 3.4, {4, 5, 2000} };
    printf("%s %d %g %d.%d.%d", s.name, s.id, s.gpa, s.date.day, s.date.month, s.date.year);
}