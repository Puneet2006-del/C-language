#include <stdio.h>
// Function Prototype 
float average(float, float, float);

// Function Definition 

float average(float x, float y, float z){
    float p = (x + y + z)/3;
    return p;
}

int main()
{
    float a = 6;
    float b = 3;
    float c = 1;
    float avg = average(a,b,c);
    printf("The average is: %f", avg);
    // float n1, n2, n3, average;
    // printf("Enter three numbers:");
    // scanf("%f %f %f", &n1, &n2, &n3);

    // average = (n1 + n2 + n3) / 3;
    // printf("The average is:%.2f\n", average);
    return 0;
}