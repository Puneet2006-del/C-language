#include <stdio.h>

void change_to_ten_times(int); // Function Prototype !

void chane_to_ten_times(int a){
    a = a * 10; // We can change value only by using the address of value not by using value, Beacuse it pass the copy !
}

int main(){
    int p = 10;
    printf("The value of p is %d\n", p);
    chane_to_ten_times(p);
    printf("The value of p is %d", p);
    return 0;
}