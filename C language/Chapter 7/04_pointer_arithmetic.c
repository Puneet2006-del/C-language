#include <stdio.h>

int main(){
    // POINTER ARITHMETIC USING INTEGER POINTER 
    // int a = 5;
    // int *ptr = &a;
    // printf("The address of a is %u\n", &a );
    // printf("The address of a is %u\n", ptr);
    // ptr++;
    // printf("The address of ptr is %u\n", ptr);

    // POINTER ARITHMETIC USING CHARACTER PO
    char a = 'P';
    char *ptr = &a;
    printf("The address of a is %u\n", &a );
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The address of ptr is %u\n", ptr);

    return 0;
}