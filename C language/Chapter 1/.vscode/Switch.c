// Switch case statements

#include <stdio.h>

int main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    switch (age)
    {
        case 10:
            printf("Your age is 10");
            break;

        case 15:
            printf("Your age is 15");
            break;

        case 18:
            printf("Your age is 18");
            break;    

    
        default:
            printf("Your are is not 10, 15, and 18");
            break;
    }
    return 0;
}