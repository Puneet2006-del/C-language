#include <stdio.h>

int main() {
    int num1, num2, num3, num4, greatest;

    // Input four numbers from the user
    printf("Enter four numbers:\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Assume num1 is the greatest
    greatest = num1;

    // Compare num2 with greatest
    if (num2 > greatest) {
        greatest = num2;
    }

    // Compare num3 with greatest
    if (num3 > greatest) {
        greatest = num3;
    }

    // Compare num4 with greatest
    if (num4 > greatest) {
        greatest = num4;
    }

    // Output the greatest number
    printf("The greatest number is: %d\n", greatest);

    return 0;
}
