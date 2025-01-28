#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Your age is %d\n", age);
    if (age > 60)
    {
        printf("You can drive and you are senior citizen so be carefull");
    }
    else if (age > 45)
    {
        printf("You can drive and you are elder");
    }
    else if (age > 18)
    {
        printf("You can drive");
    }
    else
    {
        printf("You cannot drive");
    }
    return 0;
}