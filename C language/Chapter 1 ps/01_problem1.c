#include <stdio.h>

int main(){
    
    //int lenght = 6;
    //int breadth = 56;
    int length, breadth;
    printf("Enter lenght");
    scanf("%d", &length);
    printf("Enter Breadth");
    scanf("%d", &breadth);
    printf("The area of this rectangle is %d", length*breadth);
    return 0;
}