// Unions are similer to structures
#include <stdio.h>

union student
{
    char name[50];
    int id;
    int marks;
    char fav_color;
};

int main()
{

    union student Puneet;
    sprintf(Puneet.name, "Puneet");
    Puneet.id = 5; // Union will print only one value. for other it will print garbage value.
    Puneet.marks = 96;
    Puneet.fav_color = 'B';

    printf("Name: %s\nId: %d\nMarks: %d\nFav_color: %c\n", Puneet.name, Puneet.id, Puneet.marks, Puneet.fav_color);

    return 0;
}