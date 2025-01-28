#include <stdio.h>

int main()
{
    if (1)
    {
        printf("This if is executed!\n");
    }
    if (1234)
    {
        printf("This if is also executed!\n");
    }
    if (3.4)
    {
        printf("This float inside if is also executed!\n");
    }
    if ('c')
    {
        printf("This Character inside if is also executed!\n");
    }
    if (0)
    {
        printf("I am 0 i am not executed\n");
    }
    return 0;
}