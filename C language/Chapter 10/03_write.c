#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("puneet.txt", "w"); // write mode will erase your all data and then add new data in it. 
    int num = 432;                   // if you want your data would not erase. then use append key.
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}