#include <stdio.h>

int main()
{
    int age = 18;
    if (age >= 18)
    {
        printf("We are inside if\n");
        printf("Your age is greater than 18\nYou are eligible for vote in India\n. ");
    }
    else
    {
        printf("Sorry you are not eligible for vote your age is less than 18.");
    }
    return 0;
}