// String is the null terminated character array (\0)
// Strings Functions =

#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Puneet";
    char last[] = "Mehra";
    char s3[45];
    printf("The strcmp for name, last returned %d\n", strcmp(name, last));
    // puts(strcat(name, last));
    // printf("The length of first name is %d\n", strlen(name));
    // printf("The length of last name is %d\n", strlen(last));
    // printf("The reversed string of first name is :");
    // puts(strrev(name));
    // printf("The reversed string of last name is :");
    // puts(strrev(last));

    // strcpy(s3, strcat(name, last));
    // puts(s3);

    return 0;
}
