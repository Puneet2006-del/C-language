#include <stdio.h>
int main()
{
    int i = 1;
    int product = 1;
    int n = 6;
    while (i <= n)
    {

        product *= i;
        i++;
    }
    printf("The factorial %d is %d", n, product);
    return 0;
}