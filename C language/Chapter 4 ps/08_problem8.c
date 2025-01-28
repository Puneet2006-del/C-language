#include <stdio.h>
int main(){
    int product = 1;
    int n = 10;
    for (int i = 1; i<= n; i++)
    {
        product *=i;
    }
   printf("The factorial is %d",product);
   return 0;
}