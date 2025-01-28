#include <stdio.h>
#include <string.h>


struct employee 
{ 
int code; // This declares a new user defined data type! 
float salary; 
char name[10]; 
}; // semicolon is important 
int main(){
    struct employee e1;

    printf("Enter the value of code:\n");
    scanf("%d", &e1.code);

    printf("Enter the value of salary:\n");
    scanf("%f", &e1.salary);

    printf("Enter the value of Name:\n");
    scanf("%s", &e1.name);

    printf("%d %f %s", e1.code, e1.salary, e1.name);
    return 0;
}