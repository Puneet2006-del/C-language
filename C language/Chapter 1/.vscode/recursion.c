// recursion use to build logics in functions

#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n)
{
    if (n == 0)
    { // Base case
        return 1;
    }
    else
    {
        return n * factorial(n - 1); // Recursive call
    }
}
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    printf("The factorial of %d is %d", number, factorial(number));
}
