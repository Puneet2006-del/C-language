#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice()
{
    return rand() % 3;
}

int getUserChoice()
{
    int choice;
    printf("Enter your choice:\n");
    printf("0 for Rock\n1 for Paper\n2 for Scissor\n:");
    scanf("%d", &choice);
    return choice;
}

void displayChoice(int choice)
{
    switch (choice)
    {
    case 0:
        printf("Rock");
        break;
    case 1:
        printf("Paper");
        break;
    case 2:
        printf("Scissor");
        break;
    default:
        printf("Invalid Choice");
    }
}

void determineWinner(int userChoice, int computerChoice)
{
    printf("You chose ");
    displayChoice(userChoice);
    printf(", Computer chose ");
    displayChoice(computerChoice);
    printf(".\n");

    if (userChoice == computerChoice)
    {
        printf("It's a draw!");
    }
    else if ((userChoice == 0 && computerChoice == 2) ||
             (userChoice == 1 && computerChoice == 0) ||
             (userChoice == 2 && computerChoice == 1))
    {
        printf("You Win!\n");
    }
    else
    {
        printf("Computer Wins!\n");
    }
}
int main()
{
    srand(time(0));

    int userChoice = getUserChoice();

    if (userChoice < 0 || userChoice > 2)
    {
        printf("Invalid Choice , please enter 0, 1, or 2.\n ");
        return 1;
    }

    int computerChoice = getComputerChoice();
    determineWinner(userChoice, computerChoice);

    return 0;
}