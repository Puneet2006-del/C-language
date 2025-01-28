#include <stdio.h>

int main()
{
    int subject;
    printf("Enter 1 if you pass in one subject (science or math).\nEnter 2 if you pass in both.\nEnter any number except 1 or 2 if you failed in both.\n");
    printf("Enter the number: ");
    scanf("%d", &subject);
    printf("You have entered %d\n", subject);
    if (subject == 1)
    {
        printf("You passed in one subject and have received a $15 gift!\n");
    }
    else if (subject == 2)
    {
        printf("You passed in both subjects. Congratulations! You have received a $45 gift!\n");
    }
    else
    {
        printf("You failed, so you receive nothing. Work hard!\n");
    }
    return 0;
}
