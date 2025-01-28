// Calculate the fibonacci series of n numbers use recursive and interative function and find which one is fast.

#include <stdio.h>

int fib_recursive(int n){
    if (n == 1 || n == 2){
        return n-1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);   
    }
}
int fib_interative(int n){
    int a = 0;
    int b = 1;
    for (int i = 0; i < n-1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}
int num;
int main(){
    printf("Enter the index for fibonacci series:\n");
    scanf("%d",&num);
    printf("The value of fibonacci series at index %d using interative function is %d\n",num, fib_interative(num));
    printf("The value of fibonacci series at index %d using recursive function is %d\n",num, fib_recursive(num));
    return 0;
}
// for fibonacci series for n numbers interative function is faster than recursive function thanks!