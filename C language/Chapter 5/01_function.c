#include <stdio.h>

// Function Prototype !
int sum(int, int);

// Function Difinition !
int sum(int x, int y)
{
    // printf("The sum is %d\n", x+y);
    return x + y;
}

int main()
{
    int a = 1;
    int b = 2;

    // int c = a+b;
    // printf("The sum is %d\n", c);
    int c = sum(a, b);
    printf("%d\n", c); // Function Call !

    int a1 = 5;
    int b1 = 4;

    // int c1 = a1+b1;
    // printf("The sum is %d\n", c1);
    int c1 = sum(a1, b1); // Function Call !
    printf("%d\n", c1);

    int a2 = 12;
    int b2 = 23;

    // int c2 = a2+b2;
    // printf("The sum is %d\n", c2);
    int c2 = sum(a2, b2);
    printf("%d\n", c2);

    return 0;
}