// #include <stdio.h>

// int sum(int a, int b)
// { // Function declaration (prototype)

//     return a + b; // Return's the sum of a and b  (definition of function)
// }

// int main()
// {
//     int num1 = 45, num2 = 55;
//     int result = sum(num1, num2);
//     printf("The sum of %d and %d is %d", num1, num2, result); // function call
//     return 0;
// }

// another example of function in c 

#include <stdio.h>
int multi(int a, int b){ // it is function prototype or declaration
    printf("Enter the value of a:"); // here is function definication
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    int c;
    c = a * b;
    return(c);
}
int div(int a, int b){ // it is function prototype or declaration
    printf("Enter the value of a:"); // // here is function definication
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    int c;
    c = a / b;
    return(c);
}
int main(){
    int x, y, z, d;
    z = multi(x, y); // here is function call
    printf("The multiplication is %d\n",z);
    d = div(x,y); // function call!
    printf("The division is %d\n", d);
}