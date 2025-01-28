#include <stdio.h>

int factorial(int);

int factorial(int n){
    if(n == 1 || n == 0){ // Base Condition !
        return 1;
    }
    // Factorial (n) = Factorial(n-1) X n
    return factorial(n-1) * n;
}
int main(){
    int a = 6;
    printf("The factorial od %d is %d", a, factorial(a));
    return 0;
}