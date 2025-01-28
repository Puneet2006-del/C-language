#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Puneet";
    char s1[56] = "Harry";
    char s2[56] = "Bhai";

    // printf("%d", strlen(st));

    char target[30];
    strcpy(target, st); // target now contains "Puneet"
    // printf("%s %s", st, target);

    strcat(s1, s2); // s1 now contains "helloharry" <no space in between>
    // printf("%s",s1);

    int a = strcmp("far", "joke"); // Negative value
    printf("%d\n", a);

    int b = strcmp("joke", "far"); // Positive value
    printf("%d", b);

    return 0;
}