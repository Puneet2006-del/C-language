#include <stdio.h>

int main(){
    int arr[3][2];  // 3 rows, 2 columns array

    // Input loop
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {  // Changed 'i' to 'j' here
            printf("Enter the value of arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);  // Correctly inputting into arr[i][j]
        }
    }
        
    // Output loop
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {  // Changed 'i' to 'j' here
            printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);  // Correctly printing arr[i][j]
        }
    }

    return 0;
}
