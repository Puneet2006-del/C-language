#include <stdio.h>


typedef struct c
{
    int real; 
    int imaginary;
}Complex;


void display(Complex c){
    printf("The value of Complex numdber is %d + %di\n", c.real, c.imaginary);
}

int main(){
    Complex crr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part: \n");
        scanf("%d", &crr[i].real);
        printf("Enter imaginary part: \n");
        scanf("%d", &crr[i].imaginary);
        display(crr[i]);
        
    }
    
    return 0;
}