// Basic pointer arithmetic
#include <stdio.h>

int main()
{
    int a = 3;
    int *ptr = &a;
    printf("%d\n", ptr); 
    ptr--;               
/*
Performing arithmetic operations on pointers will increase or decrease
the value of the pointer based on the size of the data type it points to (e.g., int, float, or char).
The value changes by the number of bytes, not bits, corresponding to the size of the type on the system.

For example, if int is 4 bytes on your system:

Suppose the address is 6422296.
ptr - 1 will decrease the pointer by 4 bytes, resulting in 6422292.
ptr - 2 will decrease the pointer by 8 bytes, resulting in 6422288.
This behavior is consistent for other data types:

For float (4 bytes on most systems), the pointer would decrease by 4 bytes per step.
For char (1 byte), the pointer would decrease by 1 byte per step.
The actual size of int, float, or char depends on the system architecture, 
such as 32-bit or 64-bit. Pointer arithmetic adjusts the address accordingly based on the size of the data type.
     
     
  
     */                    
    printf("%d\n", ptr);
    printf("%d\n", ptr - 2);
    return 0;
}