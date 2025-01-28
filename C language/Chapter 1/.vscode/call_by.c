// Call by value and call by reference 

// #include <stdio.h>
// int multi(int a, int b){ // it is function prototype or declaration
//     printf("Enter the value of a:"); // here is function definication
//     scanf("%d",&a);
//     printf("Enter the value of b:");
//     scanf("%d", &b);
//     int c;
//     c = a * b;
//     return(c);
// }
// int div(int a, int b){ // it is function prototype or declaration
//     printf("Enter the value of a:"); // // here is function definication
//     scanf("%d",&a);
//     printf("Enter the value of b:");
//     scanf("%d", &b);
//     int c;
//     c = a / b;
//     return(c);
// }
// int main(){
//     int x, y, z, d;
//     z = multi(x, y); // here is function call
//     printf("The multiplication is %d\n",z);
//     d = div(x,y); // function call!
//     printf("The division is %d\n", d);
// }
// above example is for call by value


// now the example of call by reference 

#include <stdio.h>

void swap(int *x, int *y) {  // here x and y are formal parameters 

int temp;
temp = *x;
*x = *y;
*y = temp;
return;

}

int main(){
    int a = 5, b = 10;     // here a and b is actual parameters
    printf("The value of a is %d and value of b is %d\n",a,b);
    swap(&a,&b);
    printf("The value of a is %d and value of b is %d\n",a,b);
    return 0;
}
// Successfully swap the value of a and b 