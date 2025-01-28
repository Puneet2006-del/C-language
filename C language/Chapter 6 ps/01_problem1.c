#include <stdio.h>

int main()
{
    int i = 56;
    int *j = &i;
    printf("The address of i is %p\n", &i);
    printf("The value of i is %d", *j);
    return 0;
}