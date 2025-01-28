// Passing array as function argument
// #include <stdio.h>

// float func_average(int marks[]){
//     int sum = 0;
//     for (int i = 0; i < 20; i++)
//     {
//         sum += marks[i];
//     }
//     return (float)sum / 20; // Cast to float for accurate division
// }

// int main(){
//     int marks[] = {40,88,56,98,79,60,55,80,58,74,78,52,48,74,86,84,88,36,66,90};
//     float average = func_average(marks);
//     printf("%.2f", average); // Print output as a floating-point number with 2 decimal places
//     return 0;
// }

#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}


void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
}


void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}


int main()
{
    int arr[][2] = {{2, 13}, {9, 3}};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}

