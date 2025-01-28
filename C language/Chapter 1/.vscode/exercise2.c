#include <stdio.h>

int main()
{
    int choice;
    float k, i, c, p;
    printf("Enter 1 for km to miles\n2 for inches to feet\n3 for cm to inches\n4 for pounds to kg\n5 for inches to meters\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter the value in kilometers: ");
        scanf("%f", &k);
        printf("The value in miles is %.2f\n", k * 0.621371);
    }
    else if (choice == 2)
    {
        printf("Enter the value in inches: ");
        scanf("%f", &i);
        printf("The value in feet is %.2f\n", i / 12);    // I am solving this problem by conditional statements !
    }
    else if (choice == 3)
    {
        printf("Enter the value in cm: ");
        scanf("%f", &c);
        printf("The value in inches is %.2f\n", c / 2.54);
    }
    else if (choice == 4)
    {
        printf("Enter the value in pounds: ");
        scanf("%f", &p);
        printf("The value in kg is %.2f\n", p * 0.453592);
    }
    else if (choice == 5)
    {
        printf("Enter the value in inches: ");
        scanf("%f", &i);
        printf("The value in meters is %.2f\n", i * 0.0254);
    }
    else
    {
        printf("Invalid choice, please enter between 1 and 5!");
    }
    return 0;
}
