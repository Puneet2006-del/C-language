// Question:
// Print a multiplication table of number entered by user without loop and other stuff!
#include <stdio.h>

int main() {
    int a;
    printf("Enter the number for multiplication table:");
    scanf("%d",&a);
    printf("the table is:");
    printf("\n1X%d=%d",a,a*1);
    printf("\n2X%d=%d",a,a*2);
    printf("\n3X%d=%d",a,a*3);
    printf("\n4X%d=%d",a,a*4);
    printf("\n5X%d=%d",a,a*5);
    printf("\n6X%d=%d",a,a*6);
    printf("\n7X%d=%d",a,a*7);
    printf("\n8X%d=%d",a,a*8);
    printf("\n9X%d=%d",a,a*9);
    printf("\n10X%d=%d",a,a*10);
    return 0;
}