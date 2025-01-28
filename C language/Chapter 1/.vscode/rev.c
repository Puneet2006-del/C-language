#include <stdio.h>

// int func1(int array[]){
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The value of %d is %d\n",i,array[i]);
//     }
//     array[0] = 10; // The very important point that if you change any value here,
                   // it gets reflected in main()
    
// }

void func2(int *ptr){
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n",i,*(ptr+i));
    }
    *(ptr+2) = 16;
    *(ptr+3) = 25;
    
}

int main(){
    int arr[] = {23,12,3,4};
    // printf("The value at index 0 is %d\n",arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n",arr[0]);
    func2(arr);
    func2(arr);
    return 0;
}