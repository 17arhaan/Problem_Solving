#include <stdio.h>

// Function to calculate the sum of the four corners
int CornerSum(int matrix[100][100], int rows, int cols) {
    int sum = 0;

    // Sum of four corners
    sum = matrix[0][0]                // Top-left
        + matrix[0][cols - 1]        // Top-right
        + matrix[rows - 1][0]        // Bottom-left
        + matrix[rows - 1][cols - 1];// Bottom-right

    return sum;
}

int main() {
    int matrix[100][100], rows, cols;

    // Input matrix dimensions
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Validate dimensions
    if (rows < 2 || cols < 2) {
        printf("Matrix must have at least 2 rows and 2 columns.\n");
        return 1;
    }

    // Input matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and display the corner sum
    int result = CornerSum(matrix, rows, cols);
    printf("Sum of corner elements: %d\n", result);

    return 0;
}
