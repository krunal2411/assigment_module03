//Write a program to find out the Max number from given Matrix.

#include <stdio.h>

#define ROWS 3
#define COLS 3

int findMax(int matrix[ROWS][COLS]) {
    int max_num = matrix[0][0];  // 

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] > max_num) {
                max_num = matrix[i][j];
            }
        }
    }

    return max_num;
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int max = findMax(matrix);
    printf("Maximum number in the matrix: %d\n", max);

    return 0;
}

