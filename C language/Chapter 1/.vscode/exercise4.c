#include <stdio.h>

void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows, type;
    printf("Enter 0 for star pattern and 1 for reverse star pattern:");
    scanf("%d", &type);
    printf("Enter the rows you want:\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starPattern(rows);
        break;

    case 1:
        reverseStarPattern(rows);
        break;

    default:
        printf("Invalid choice please enter 0 or 1");
        break;
    }

    return 0;
}