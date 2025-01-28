#include <stdio.h>
int main()
{
    int age = 20;
    if (age >= 18)
    {
        printf("We are inside if\n");
        printf("Your age is greater than 18\nYou are eligible for vote in India\n. ");
    }
    if (age % 5 == 0)
    {
        printf("We are inside another if\n");
        printf("Your age is divisible by 5\n. ");
    }

    return 0;
}