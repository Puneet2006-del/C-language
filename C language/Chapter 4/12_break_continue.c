#include <stdio.h>

int main()
{
    for (int i = 0; i < 20; i++)
    {

        if (i == 10)
        {
            // break; // exit the loop now!
            continue; // Skip the iteration now!
        }
        printf("i is %d\n", i);
    } 
    printf("For loop is done!");

    return 0;
}