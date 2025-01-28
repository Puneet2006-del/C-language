#include <stdio.h>

int main(){
    int i = 5;
    i = i + 5;
    printf("The value of i is %d\n", i);// 10
    printf("The Value of i is %d\n",++i);// 11
    printf("The Value of i is %d\n",i++); // 11
    printf("The Value of i is %d\n",i);// 12


    i += 2; // Same as i = i + 2;

    printf("The Value of i is %d\n",i); // 13

    // i++ prints i first and then increments (Post increment Operator)
    // ++i increments i first and then prints i (Post increment Operator)
    return 0;
}