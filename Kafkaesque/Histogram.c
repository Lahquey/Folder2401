#include <stdio.h>

void drawHistogram(int data[], int size) {
    // Find the maximum value in the data array
    int max = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    // Draw the histogram
    for (int row = max; row > 0; row--) {
        for (int col = 0; col < size; col++) {
            if (data[col] >= row) {
                printf("  *  "); // Use '*' to represent each bar
            } else {
                printf("     "); // Empty space
            }
        }
        printf("\n");
    }

    // Print x-axis labels
    for (int i = 0; i < size; i++) {
        printf("-----");
    }
    printf("\n");

    for (int i = 0; i < size; i++) {
        printf("  %d  ", data[i]);
    }
    printf("\n");
}

int main() {
    // Example data (you can replace this with your own dataset)
    int data[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Calculate the size of the array
    int size = sizeof(data) / sizeof(data[0]);

    // Draw the histogram
    drawHistogram(data, size);

    return 0;
}

