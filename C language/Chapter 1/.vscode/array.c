// #include <stdio.h>

// int main(){
//     int marks[4];
//     for (int i = 0; i < 4; i++)
//     {
//         printf("Enter the marks of %d roll number student:\n",i);
//         scanf("%d",&marks[i]);
//     }
//       for (int i = 0; i < 4; i++)
//     {
//         printf("The marks of roll number %d are %d\n", i, marks[i]);
//     }
    
//     return 0;
// }
// above example is for 1-d array!

// bbelow example is for 2-d array!

#include <stdio.h>

int main() {
    // Creating a 2D array
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Printing the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// noice 