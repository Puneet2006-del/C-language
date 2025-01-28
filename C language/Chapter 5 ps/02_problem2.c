#include <stdio.h>
float c2f(float);
float c2f(float c)
{
    return ((9 * c) / 5) + 32;
}
int main()
{
    float c = 36.5;
    printf("Celsius temperature into Fahrenheit for %.1f is %.2f", c, c2f(c));
    return 0;
}