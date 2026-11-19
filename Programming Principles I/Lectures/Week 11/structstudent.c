#include <stdio.h>
#include <string.h>

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    char name[20];
    int id;
    double gpa;
    Date date;
} Student;

void print_student(Student s)
{
    printf("%-8s %-3d %g, %d.%d.%d\n", s.name, s.id, s.gpa, s.date.day, s.date.month, s.date.year);
}

void raise_gpa(Student *s)
{
    //(*s).gpa += 0.3
    s->gpa += 0.3;
}

void rename_student(Student *s, char name[])
{
    strcpy(s->name, name);
}

Student create_student(char name[], int id, double gpa, int day, int month, int year)
{
    Student s;
    strcpy(s.name, name);
    s.id = id;
    s.gpa = gpa;
    s.date.day = day;
    s.date.month = month;
    s.date.year = year;
    return s;
}


int main(void)
{
    //Student s = { "Kamran", 25, 3.4, {4, 5, 2000} };
    //Student s1 = create_student("Aykhan", 255, 3.1, 5, 6, 2004);
    
    //print_student(s1);

    //raise_gpa(&s);
    //rename_student(&s, "Kanan");
    //print_student(s);

    Student sgr[4] = {
        { "Kamran", 25, 3.4, {4, 5, 2000}},
        { "Aykhan", 255, 3.1, {5, 6, 2004}},
        { "Faruk", 876, 3.4, {4, 5, 1999}},
        { "Aysel", 125, 1.6, {4, 5, 1976}}
    };

    for(int i = 0; i < 4; i++)
    {
        print_student(sgr[i]);
    }

    
}