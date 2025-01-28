#include <stdio.h>

int main(){
    char i = 'A';
    char* j = &i;  // j is a pointer pointing to i 
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);    // We can use %u for integer address and %p for normal address !

    printf("The value at address i is %d", *&i); // Address to value just use *and & (Your variable name) ex- --> *&i;

    return 0;
}