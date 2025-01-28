#include <stdio.h>

void change_to_ten_times(int *a); // Function Prototype !

void chane_to_ten_times(int *a){ // Function Definition !
    *a = *a * 10;
}

int main(){
    int p = 10;
    printf("The value of p is %d\n", p);
    chane_to_ten_times(&p);
    printf("The value of p is %d", p);
    return 0;
}