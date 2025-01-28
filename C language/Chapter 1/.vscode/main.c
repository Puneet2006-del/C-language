#include <stdio.h>

int main(){
    int arr[] = {2,56,74,89,53};
    int* ptr = arr;
    // now here is so many ways to print the address of an array for 1 or others indexes
    printf("The address of first element of array is %d\n",&arr[0]);
    printf("The address of first element of array is %d\n", arr); // it takes first index of an array "arr"
    printf("The address of second element of array is %d\n",&arr[1]);
    printf("The address of second element of array is %d\n", arr+1);
    printf("The address of third element of array is %d\n",&arr[2]);
    printf("The address of third element of array is %d\n", arr+2);

    // Now print the values of array

    printf("The value of first index of array is %d\n",arr[0]);
    printf("The value of first index of array is %d\n",*(&arr[0]));
    printf("The value of first index of array is %d\n",*(arr));
    printf("The value of second index of array is %d\n",arr[1]);
    printf("The value of second index of array is %d\n",*(&arr[1]));
    printf("The value of second index of array is %d\n",*(arr+1));
    printf("The value of third index of array is %d\n",arr[2]);
    printf("The value of third index of array is %d\n",*(&arr[2]));
    printf("The value of third index of array is %d\n",*(arr+2));

    // it will come with practice and consistency 

    return 0;
}