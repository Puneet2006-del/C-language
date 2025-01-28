#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 5;
    float *ptr;
    ptr = (float*) malloc(n* sizeof (float));
    // int arr[n]; Not allowed in c language 
    ptr[0] = 3.891;
    ptr[1] = 65.891;
    ptr[2] = 63.891;
    ptr[3] = 60.891;
    ptr[4] = 61.891;

    printf("%f\n",ptr[0]);
    printf("%f\n",ptr[1]);
    printf("%f\n",ptr[2]);
    printf("%f\n",ptr[3]);
    printf("%f\n",ptr[4]);

    return 0;
}