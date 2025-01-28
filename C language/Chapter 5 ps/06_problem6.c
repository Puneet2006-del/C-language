#include <stdio.h>

int sum_natural(int n); // Function Protocol !

int sum_natural(int n)
{ // Function Definition !
    if (n == 1)
    {
        return 1;
    }
    return n + sum_natural(n - 1);
}    

int main()
{
    int n = 5;
    printf("The sum of first %d natural numbers is %d", n, sum_natural(n));

    return 0;
}