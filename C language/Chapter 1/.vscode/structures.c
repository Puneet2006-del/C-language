#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int id;
    int marks;
    char subject[50];
};

int main()
{

    struct student puneet;
    strcpy(puneet.name, "Puneet Mehra"); // This is way to print a string <------
    puneet.id = 5;
    puneet.marks = 95;
    sprintf(puneet.subject, "c programming"); // You can print a string with the help of sprintf and strcpy it's your choice.
    printf("Name: %s\n", puneet.name);
    printf("ID: %d\nMarks: %d\nSubject: %s\n", puneet.id, puneet.marks, puneet.subject);
    // dot "." is called as structure member operator.
    return 0;
}