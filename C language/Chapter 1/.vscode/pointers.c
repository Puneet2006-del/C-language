#include <stdio.h>

int main(){
 
int a = 65;
int *ptr = &a;

printf("The value of a is %d\n",a); // prints the value of a which is 65
printf("The value of a is %d\n",*ptr); // prints the value of a by the help of its address which store in *ptr variabl!
printf("The address of a is %p\n", &a); // prints the address of variable which is a 
printf("The address of a is %p\n",&ptr); // prints the address of pointer 


return 0;
} 

// I am good student that's why I am learning C. Hello my name is Puneet Mehra
