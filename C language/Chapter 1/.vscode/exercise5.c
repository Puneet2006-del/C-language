// Reversing an array

#include <stdio.h>

void reverseArray(int arr[]){
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
    
}



void arrayPrint(int arr[]){
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n",i,arr[i]);
    }
    
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    printf("Before reversing the array\n");
    arrayPrint(arr);

    printf("\nAfter reversing the array\n");
    reverseArray(arr);
    arrayPrint(arr);

    return 0;
}