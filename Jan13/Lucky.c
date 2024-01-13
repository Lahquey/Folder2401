#include <stdio.h>

int main() {
    int i, j;

    // Number of rows and columns in the pattern
    int rows = 5;

    // Outer loop for rows
    for (i = 0; i < rows; i++) {
        
        // Inner loop for columns
        for (j = 0; j < rows; j++) {

            // Print 'L' if conditions for the cloverleaf are met
            if ((i == 0 && j >= 2) || (i == 1 && (j == 0 || j == rows - 1)) || (i == 2 && (j == 0 || j == 1 || j == rows - 2 || j == rows - 1)) || (i == 3 && (j == 0 || j == rows - 1)) || (i == 4 && j <= rows - 3)) {
                printf("L");
            } else {
                printf(" ");  // Print a space otherwise
            }
        }

        printf("\n");  // Move to the next line after each row
    }

    return 0;
}

