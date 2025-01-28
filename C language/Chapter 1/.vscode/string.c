#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'P', 'u', 'n', 'i', 't', '\0'};
    // char str[6] = "punit";
    char str[34];
    gets(str); // for taking output from the string 
    printf("Using custom function printStr\n");
    printStr(str);
    printf("Using printf %s\n", str); // this one is best 
    printf("using puts: \n");
    puts(str);
    return 0;
}
