// Static Variables which are the most important variables in c programming language 
// Local and Global Variables
// Actul Parameters and Formal Parameters

#include <stdio.h>

int factorial(int number){   // Number is formal parameter here
    if (number == 1 || number == 0){
        return 1;
    }
    else{
        return (number * factorial(number - 1));
    }
}
int main()
{
    int num;
    printf("Enter the number you want the factorial of:\n");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,factorial(num));  // Num is actual parameter here
    return 0;
}